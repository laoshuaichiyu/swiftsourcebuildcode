#line 6 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
//// Automatically Generated From SyntaxFactory.h.gyb.
//// Do Not Edit Directly!
//===------------- SyntaxFactory.h - Syntax Factory definition ------------===//
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
//
// This file defines the SyntaxFactory, one of the most important client-facing
// types in lib/Syntax and likely to be very commonly used.
//
// Effectively a namespace, SyntaxFactory is never instantiated, but is *the*
// one-stop shop for making new Syntax nodes. Putting all of these into a
// collection of static methods provides a single point of API lookup for
// clients' convenience and also allows the library to hide all of the
// constructors for all Syntax nodes, as the SyntaxFactory is friend to all.
//
//===----------------------------------------------------------------------===//

#ifndef SWIFT_SYNTAX_FACTORY_H
#define SWIFT_SYNTAX_FACTORY_H

#include "swift/Syntax/SyntaxNodes.h"
#include "swift/Syntax/Trivia.h"
#include "llvm/ADT/ArrayRef.h"

#include <vector>

namespace swift {
namespace syntax {

class SyntaxArena;

/// The Syntax factory - the one-stop shop for making new Syntax nodes.
struct SyntaxFactory {
  /// Make any kind of token.
  static TokenSyntax makeToken(tok Kind,
                               OwnedString Text, const Trivia &LeadingTrivia,
                               const Trivia &TrailingTrivia,
                               SourcePresence Presence,
                               RC<SyntaxArena> Arena = nullptr);

  /// Collect a list of tokens into a piece of "unknown" syntax.
  static UnknownSyntax makeUnknownSyntax(llvm::ArrayRef<TokenSyntax> Tokens,
                                         RC<SyntaxArena> Arena = nullptr);

  static Optional<Syntax> createSyntax(SyntaxKind Kind,
                                       llvm::ArrayRef<Syntax> Elements,
                                       RC<SyntaxArena> Arena = nullptr);

  static RC<RawSyntax> createRaw(SyntaxKind Kind,
                                 llvm::ArrayRef<RC<RawSyntax>> Elements,
                                 RC<SyntaxArena> Arena = nullptr);

  /// Count the number of children for a given syntax node kind,
  /// returning a pair of mininum and maximum count of children. The gap
  /// between these two numbers is the number of optional children.
  static std::pair<unsigned, unsigned> countChildren(SyntaxKind Kind);

  static Syntax
  makeBlankCollectionSyntax(SyntaxKind Kind);

#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DeclSyntax makeBlankDecl(RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ExprSyntax makeBlankExpr(RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static StmtSyntax makeBlankStmt(RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TypeSyntax makeBlankType(RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PatternSyntax makeBlankPattern(RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static UnknownDeclSyntax makeBlankUnknownDecl(RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static UnknownExprSyntax makeBlankUnknownExpr(RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static UnknownStmtSyntax makeBlankUnknownStmt(RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static UnknownTypeSyntax makeBlankUnknownType(RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static UnknownPatternSyntax makeBlankUnknownPattern(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CodeBlockItemSyntax makeCodeBlockItem(Syntax Item, llvm::Optional<TokenSyntax> Semicolon, llvm::Optional<Syntax> ErrorTokens,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CodeBlockItemSyntax makeBlankCodeBlockItem(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CodeBlockItemListSyntax makeCodeBlockItemList(
      const std::vector<CodeBlockItemSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CodeBlockItemListSyntax makeBlankCodeBlockItemList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CodeBlockSyntax makeCodeBlock(TokenSyntax LeftBrace, CodeBlockItemListSyntax Statements, TokenSyntax RightBrace,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CodeBlockSyntax makeBlankCodeBlock(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static InOutExprSyntax makeInOutExpr(TokenSyntax Ampersand, ExprSyntax Expression,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static InOutExprSyntax makeBlankInOutExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PoundColumnExprSyntax makePoundColumnExpr(TokenSyntax PoundColumn,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PoundColumnExprSyntax makeBlankPoundColumnExpr(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static FunctionCallArgumentListSyntax makeFunctionCallArgumentList(
      const std::vector<FunctionCallArgumentSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static FunctionCallArgumentListSyntax makeBlankFunctionCallArgumentList(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TupleElementListSyntax makeTupleElementList(
      const std::vector<TupleElementSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TupleElementListSyntax makeBlankTupleElementList(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ArrayElementListSyntax makeArrayElementList(
      const std::vector<ArrayElementSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ArrayElementListSyntax makeBlankArrayElementList(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DictionaryElementListSyntax makeDictionaryElementList(
      const std::vector<DictionaryElementSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DictionaryElementListSyntax makeBlankDictionaryElementList(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static StringLiteralSegmentsSyntax makeStringLiteralSegments(
      const std::vector<Syntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static StringLiteralSegmentsSyntax makeBlankStringLiteralSegments(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TryExprSyntax makeTryExpr(TokenSyntax TryKeyword, llvm::Optional<TokenSyntax> QuestionOrExclamationMark, ExprSyntax Expression,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TryExprSyntax makeBlankTryExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DeclNameArgumentSyntax makeDeclNameArgument(TokenSyntax Name, TokenSyntax Colon,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DeclNameArgumentSyntax makeBlankDeclNameArgument(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DeclNameArgumentListSyntax makeDeclNameArgumentList(
      const std::vector<DeclNameArgumentSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DeclNameArgumentListSyntax makeBlankDeclNameArgumentList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DeclNameArgumentsSyntax makeDeclNameArguments(TokenSyntax LeftParen, DeclNameArgumentListSyntax Arguments, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DeclNameArgumentsSyntax makeBlankDeclNameArguments(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static IdentifierExprSyntax makeIdentifierExpr(TokenSyntax Identifier, llvm::Optional<DeclNameArgumentsSyntax> DeclNameArguments,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static IdentifierExprSyntax makeBlankIdentifierExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SuperRefExprSyntax makeSuperRefExpr(TokenSyntax SuperKeyword,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SuperRefExprSyntax makeBlankSuperRefExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static NilLiteralExprSyntax makeNilLiteralExpr(TokenSyntax NilKeyword,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static NilLiteralExprSyntax makeBlankNilLiteralExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DiscardAssignmentExprSyntax makeDiscardAssignmentExpr(TokenSyntax Wildcard,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DiscardAssignmentExprSyntax makeBlankDiscardAssignmentExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AssignmentExprSyntax makeAssignmentExpr(TokenSyntax AssignToken,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AssignmentExprSyntax makeBlankAssignmentExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SequenceExprSyntax makeSequenceExpr(ExprListSyntax Elements,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SequenceExprSyntax makeBlankSequenceExpr(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ExprListSyntax makeExprList(
      const std::vector<ExprSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ExprListSyntax makeBlankExprList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PoundLineExprSyntax makePoundLineExpr(TokenSyntax PoundLine,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PoundLineExprSyntax makeBlankPoundLineExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PoundFileExprSyntax makePoundFileExpr(TokenSyntax PoundFile,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PoundFileExprSyntax makeBlankPoundFileExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PoundFunctionExprSyntax makePoundFunctionExpr(TokenSyntax PoundFunction,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PoundFunctionExprSyntax makeBlankPoundFunctionExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PoundDsohandleExprSyntax makePoundDsohandleExpr(TokenSyntax PoundDsohandle,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PoundDsohandleExprSyntax makeBlankPoundDsohandleExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SymbolicReferenceExprSyntax makeSymbolicReferenceExpr(TokenSyntax Identifier, llvm::Optional<GenericArgumentClauseSyntax> GenericArgumentClause,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SymbolicReferenceExprSyntax makeBlankSymbolicReferenceExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PrefixOperatorExprSyntax makePrefixOperatorExpr(llvm::Optional<TokenSyntax> OperatorToken, ExprSyntax PostfixExpression,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PrefixOperatorExprSyntax makeBlankPrefixOperatorExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static BinaryOperatorExprSyntax makeBinaryOperatorExpr(TokenSyntax OperatorToken,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static BinaryOperatorExprSyntax makeBlankBinaryOperatorExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ArrowExprSyntax makeArrowExpr(llvm::Optional<TokenSyntax> ThrowsToken, TokenSyntax ArrowToken,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ArrowExprSyntax makeBlankArrowExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static FloatLiteralExprSyntax makeFloatLiteralExpr(TokenSyntax FloatingDigits,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static FloatLiteralExprSyntax makeBlankFloatLiteralExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TupleExprSyntax makeTupleExpr(TokenSyntax LeftParen, TupleElementListSyntax ElementList, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TupleExprSyntax makeBlankTupleExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ArrayExprSyntax makeArrayExpr(TokenSyntax LeftSquare, ArrayElementListSyntax Elements, TokenSyntax RightSquare,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ArrayExprSyntax makeBlankArrayExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DictionaryExprSyntax makeDictionaryExpr(TokenSyntax LeftSquare, Syntax Content, TokenSyntax RightSquare,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DictionaryExprSyntax makeBlankDictionaryExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static FunctionCallArgumentSyntax makeFunctionCallArgument(llvm::Optional<TokenSyntax> Label, llvm::Optional<TokenSyntax> Colon, ExprSyntax Expression, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static FunctionCallArgumentSyntax makeBlankFunctionCallArgument(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TupleElementSyntax makeTupleElement(llvm::Optional<TokenSyntax> Label, llvm::Optional<TokenSyntax> Colon, ExprSyntax Expression, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TupleElementSyntax makeBlankTupleElement(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ArrayElementSyntax makeArrayElement(ExprSyntax Expression, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ArrayElementSyntax makeBlankArrayElement(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DictionaryElementSyntax makeDictionaryElement(ExprSyntax KeyExpression, TokenSyntax Colon, ExprSyntax ValueExpression, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DictionaryElementSyntax makeBlankDictionaryElement(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static IntegerLiteralExprSyntax makeIntegerLiteralExpr(TokenSyntax Digits,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static IntegerLiteralExprSyntax makeBlankIntegerLiteralExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static BooleanLiteralExprSyntax makeBooleanLiteralExpr(TokenSyntax BooleanLiteral,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static BooleanLiteralExprSyntax makeBlankBooleanLiteralExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TernaryExprSyntax makeTernaryExpr(ExprSyntax ConditionExpression, TokenSyntax QuestionMark, ExprSyntax FirstChoice, TokenSyntax ColonMark, ExprSyntax SecondChoice,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TernaryExprSyntax makeBlankTernaryExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static MemberAccessExprSyntax makeMemberAccessExpr(llvm::Optional<ExprSyntax> Base, TokenSyntax Dot, TokenSyntax Name, llvm::Optional<DeclNameArgumentsSyntax> DeclNameArguments,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static MemberAccessExprSyntax makeBlankMemberAccessExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static IsExprSyntax makeIsExpr(TokenSyntax IsTok, TypeSyntax TypeName,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static IsExprSyntax makeBlankIsExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AsExprSyntax makeAsExpr(TokenSyntax AsTok, llvm::Optional<TokenSyntax> QuestionOrExclamationMark, TypeSyntax TypeName,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AsExprSyntax makeBlankAsExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TypeExprSyntax makeTypeExpr(TypeSyntax Type,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TypeExprSyntax makeBlankTypeExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ClosureCaptureItemSyntax makeClosureCaptureItem(llvm::Optional<TokenListSyntax> Specifier, llvm::Optional<TokenSyntax> Name, llvm::Optional<TokenSyntax> AssignToken, ExprSyntax Expression, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ClosureCaptureItemSyntax makeBlankClosureCaptureItem(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ClosureCaptureItemListSyntax makeClosureCaptureItemList(
      const std::vector<ClosureCaptureItemSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ClosureCaptureItemListSyntax makeBlankClosureCaptureItemList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ClosureCaptureSignatureSyntax makeClosureCaptureSignature(TokenSyntax LeftSquare, llvm::Optional<ClosureCaptureItemListSyntax> Items, TokenSyntax RightSquare,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ClosureCaptureSignatureSyntax makeBlankClosureCaptureSignature(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ClosureParamSyntax makeClosureParam(TokenSyntax Name, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ClosureParamSyntax makeBlankClosureParam(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ClosureParamListSyntax makeClosureParamList(
      const std::vector<ClosureParamSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ClosureParamListSyntax makeBlankClosureParamList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ClosureSignatureSyntax makeClosureSignature(llvm::Optional<ClosureCaptureSignatureSyntax> Capture, llvm::Optional<Syntax> Input, llvm::Optional<TokenSyntax> ThrowsTok, llvm::Optional<ReturnClauseSyntax> Output, TokenSyntax InTok,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ClosureSignatureSyntax makeBlankClosureSignature(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ClosureExprSyntax makeClosureExpr(TokenSyntax LeftBrace, llvm::Optional<ClosureSignatureSyntax> Signature, CodeBlockItemListSyntax Statements, TokenSyntax RightBrace,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ClosureExprSyntax makeBlankClosureExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static UnresolvedPatternExprSyntax makeUnresolvedPatternExpr(PatternSyntax Pattern,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static UnresolvedPatternExprSyntax makeBlankUnresolvedPatternExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static FunctionCallExprSyntax makeFunctionCallExpr(ExprSyntax CalledExpression, llvm::Optional<TokenSyntax> LeftParen, FunctionCallArgumentListSyntax ArgumentList, llvm::Optional<TokenSyntax> RightParen, llvm::Optional<ClosureExprSyntax> TrailingClosure,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static FunctionCallExprSyntax makeBlankFunctionCallExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SubscriptExprSyntax makeSubscriptExpr(ExprSyntax CalledExpression, TokenSyntax LeftBracket, FunctionCallArgumentListSyntax ArgumentList, TokenSyntax RightBracket, llvm::Optional<ClosureExprSyntax> TrailingClosure,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SubscriptExprSyntax makeBlankSubscriptExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static OptionalChainingExprSyntax makeOptionalChainingExpr(ExprSyntax Expression, TokenSyntax QuestionMark,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static OptionalChainingExprSyntax makeBlankOptionalChainingExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ForcedValueExprSyntax makeForcedValueExpr(ExprSyntax Expression, TokenSyntax ExclamationMark,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ForcedValueExprSyntax makeBlankForcedValueExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PostfixUnaryExprSyntax makePostfixUnaryExpr(ExprSyntax Expression, TokenSyntax OperatorToken,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PostfixUnaryExprSyntax makeBlankPostfixUnaryExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SpecializeExprSyntax makeSpecializeExpr(ExprSyntax Expression, GenericArgumentClauseSyntax GenericArgumentClause,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SpecializeExprSyntax makeBlankSpecializeExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static StringSegmentSyntax makeStringSegment(TokenSyntax Content,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static StringSegmentSyntax makeBlankStringSegment(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ExpressionSegmentSyntax makeExpressionSegment(TokenSyntax Backslash, llvm::Optional<TokenSyntax> Delimiter, TokenSyntax LeftParen, FunctionCallArgumentListSyntax Expressions, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ExpressionSegmentSyntax makeBlankExpressionSegment(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static StringLiteralExprSyntax makeStringLiteralExpr(llvm::Optional<TokenSyntax> OpenDelimiter, TokenSyntax OpenQuote, StringLiteralSegmentsSyntax Segments, TokenSyntax CloseQuote, llvm::Optional<TokenSyntax> CloseDelimiter,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static StringLiteralExprSyntax makeBlankStringLiteralExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static KeyPathExprSyntax makeKeyPathExpr(TokenSyntax Backslash, llvm::Optional<ExprSyntax> RootExpr, ExprSyntax Expression,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static KeyPathExprSyntax makeBlankKeyPathExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static KeyPathBaseExprSyntax makeKeyPathBaseExpr(TokenSyntax Period,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static KeyPathBaseExprSyntax makeBlankKeyPathBaseExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ObjcNamePieceSyntax makeObjcNamePiece(TokenSyntax Name, llvm::Optional<TokenSyntax> Dot,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ObjcNamePieceSyntax makeBlankObjcNamePiece(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ObjcNameSyntax makeObjcName(
      const std::vector<ObjcNamePieceSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ObjcNameSyntax makeBlankObjcName(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ObjcKeyPathExprSyntax makeObjcKeyPathExpr(TokenSyntax KeyPath, TokenSyntax LeftParen, ObjcNameSyntax Name, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ObjcKeyPathExprSyntax makeBlankObjcKeyPathExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ObjcSelectorExprSyntax makeObjcSelectorExpr(TokenSyntax PoundSelector, TokenSyntax LeftParen, llvm::Optional<TokenSyntax> Kind, llvm::Optional<TokenSyntax> Colon, ExprSyntax Name, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ObjcSelectorExprSyntax makeBlankObjcSelectorExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static EditorPlaceholderExprSyntax makeEditorPlaceholderExpr(TokenSyntax Identifier,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static EditorPlaceholderExprSyntax makeBlankEditorPlaceholderExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ObjectLiteralExprSyntax makeObjectLiteralExpr(TokenSyntax Identifier, TokenSyntax LeftParen, FunctionCallArgumentListSyntax Arguments, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ObjectLiteralExprSyntax makeBlankObjectLiteralExpr(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TypeInitializerClauseSyntax makeTypeInitializerClause(TokenSyntax Equal, TypeSyntax Value,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TypeInitializerClauseSyntax makeBlankTypeInitializerClause(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TypealiasDeclSyntax makeTypealiasDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax TypealiasKeyword, TokenSyntax Identifier, llvm::Optional<GenericParameterClauseSyntax> GenericParameterClause, llvm::Optional<TypeInitializerClauseSyntax> Initializer, llvm::Optional<GenericWhereClauseSyntax> GenericWhereClause,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TypealiasDeclSyntax makeBlankTypealiasDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AssociatedtypeDeclSyntax makeAssociatedtypeDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax AssociatedtypeKeyword, TokenSyntax Identifier, llvm::Optional<TypeInheritanceClauseSyntax> InheritanceClause, llvm::Optional<TypeInitializerClauseSyntax> Initializer, llvm::Optional<GenericWhereClauseSyntax> GenericWhereClause,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AssociatedtypeDeclSyntax makeBlankAssociatedtypeDecl(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static FunctionParameterListSyntax makeFunctionParameterList(
      const std::vector<FunctionParameterSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static FunctionParameterListSyntax makeBlankFunctionParameterList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ParameterClauseSyntax makeParameterClause(TokenSyntax LeftParen, FunctionParameterListSyntax ParameterList, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ParameterClauseSyntax makeBlankParameterClause(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ReturnClauseSyntax makeReturnClause(TokenSyntax Arrow, TypeSyntax ReturnType,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ReturnClauseSyntax makeBlankReturnClause(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static FunctionSignatureSyntax makeFunctionSignature(ParameterClauseSyntax Input, llvm::Optional<TokenSyntax> ThrowsOrRethrowsKeyword, llvm::Optional<ReturnClauseSyntax> Output,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static FunctionSignatureSyntax makeBlankFunctionSignature(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static IfConfigClauseSyntax makeIfConfigClause(TokenSyntax PoundKeyword, llvm::Optional<ExprSyntax> Condition, Syntax Elements,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static IfConfigClauseSyntax makeBlankIfConfigClause(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static IfConfigClauseListSyntax makeIfConfigClauseList(
      const std::vector<IfConfigClauseSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static IfConfigClauseListSyntax makeBlankIfConfigClauseList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static IfConfigDeclSyntax makeIfConfigDecl(IfConfigClauseListSyntax Clauses, TokenSyntax PoundEndif,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static IfConfigDeclSyntax makeBlankIfConfigDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PoundErrorDeclSyntax makePoundErrorDecl(TokenSyntax PoundError, TokenSyntax LeftParen, StringLiteralExprSyntax Message, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PoundErrorDeclSyntax makeBlankPoundErrorDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PoundWarningDeclSyntax makePoundWarningDecl(TokenSyntax PoundWarning, TokenSyntax LeftParen, StringLiteralExprSyntax Message, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PoundWarningDeclSyntax makeBlankPoundWarningDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PoundSourceLocationSyntax makePoundSourceLocation(TokenSyntax PoundSourceLocation, TokenSyntax LeftParen, llvm::Optional<PoundSourceLocationArgsSyntax> Args, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PoundSourceLocationSyntax makeBlankPoundSourceLocation(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PoundSourceLocationArgsSyntax makePoundSourceLocationArgs(TokenSyntax FileArgLabel, TokenSyntax FileArgColon, TokenSyntax FileName, TokenSyntax Comma, TokenSyntax LineArgLabel, TokenSyntax LineArgColon, TokenSyntax LineNumber,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PoundSourceLocationArgsSyntax makeBlankPoundSourceLocationArgs(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DeclModifierSyntax makeDeclModifier(TokenSyntax Name, llvm::Optional<TokenSyntax> DetailLeftParen, llvm::Optional<TokenSyntax> Detail, llvm::Optional<TokenSyntax> DetailRightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DeclModifierSyntax makeBlankDeclModifier(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static InheritedTypeSyntax makeInheritedType(TypeSyntax TypeName, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static InheritedTypeSyntax makeBlankInheritedType(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static InheritedTypeListSyntax makeInheritedTypeList(
      const std::vector<InheritedTypeSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static InheritedTypeListSyntax makeBlankInheritedTypeList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TypeInheritanceClauseSyntax makeTypeInheritanceClause(TokenSyntax Colon, InheritedTypeListSyntax InheritedTypeCollection,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TypeInheritanceClauseSyntax makeBlankTypeInheritanceClause(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ClassDeclSyntax makeClassDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax ClassKeyword, TokenSyntax Identifier, llvm::Optional<GenericParameterClauseSyntax> GenericParameterClause, llvm::Optional<TypeInheritanceClauseSyntax> InheritanceClause, llvm::Optional<GenericWhereClauseSyntax> GenericWhereClause, MemberDeclBlockSyntax Members,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ClassDeclSyntax makeBlankClassDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static StructDeclSyntax makeStructDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax StructKeyword, TokenSyntax Identifier, llvm::Optional<GenericParameterClauseSyntax> GenericParameterClause, llvm::Optional<TypeInheritanceClauseSyntax> InheritanceClause, llvm::Optional<GenericWhereClauseSyntax> GenericWhereClause, MemberDeclBlockSyntax Members,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static StructDeclSyntax makeBlankStructDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ProtocolDeclSyntax makeProtocolDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax ProtocolKeyword, TokenSyntax Identifier, llvm::Optional<TypeInheritanceClauseSyntax> InheritanceClause, llvm::Optional<GenericWhereClauseSyntax> GenericWhereClause, MemberDeclBlockSyntax Members,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ProtocolDeclSyntax makeBlankProtocolDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ExtensionDeclSyntax makeExtensionDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax ExtensionKeyword, TypeSyntax ExtendedType, llvm::Optional<TypeInheritanceClauseSyntax> InheritanceClause, llvm::Optional<GenericWhereClauseSyntax> GenericWhereClause, MemberDeclBlockSyntax Members,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ExtensionDeclSyntax makeBlankExtensionDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static MemberDeclBlockSyntax makeMemberDeclBlock(TokenSyntax LeftBrace, MemberDeclListSyntax Members, TokenSyntax RightBrace,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static MemberDeclBlockSyntax makeBlankMemberDeclBlock(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static MemberDeclListSyntax makeMemberDeclList(
      const std::vector<MemberDeclListItemSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static MemberDeclListSyntax makeBlankMemberDeclList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static MemberDeclListItemSyntax makeMemberDeclListItem(DeclSyntax Decl, llvm::Optional<TokenSyntax> Semicolon,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static MemberDeclListItemSyntax makeBlankMemberDeclListItem(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SourceFileSyntax makeSourceFile(CodeBlockItemListSyntax Statements, TokenSyntax EOFToken,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SourceFileSyntax makeBlankSourceFile(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static InitializerClauseSyntax makeInitializerClause(TokenSyntax Equal, ExprSyntax Value,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static InitializerClauseSyntax makeBlankInitializerClause(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static FunctionParameterSyntax makeFunctionParameter(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<TokenSyntax> FirstName, llvm::Optional<TokenSyntax> SecondName, llvm::Optional<TokenSyntax> Colon, llvm::Optional<TypeSyntax> Type, llvm::Optional<TokenSyntax> Ellipsis, llvm::Optional<InitializerClauseSyntax> DefaultArgument, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static FunctionParameterSyntax makeBlankFunctionParameter(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ModifierListSyntax makeModifierList(
      const std::vector<DeclModifierSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ModifierListSyntax makeBlankModifierList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static FunctionDeclSyntax makeFunctionDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax FuncKeyword, TokenSyntax Identifier, llvm::Optional<GenericParameterClauseSyntax> GenericParameterClause, FunctionSignatureSyntax Signature, llvm::Optional<GenericWhereClauseSyntax> GenericWhereClause, llvm::Optional<CodeBlockSyntax> Body,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static FunctionDeclSyntax makeBlankFunctionDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static InitializerDeclSyntax makeInitializerDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax InitKeyword, llvm::Optional<TokenSyntax> OptionalMark, llvm::Optional<GenericParameterClauseSyntax> GenericParameterClause, ParameterClauseSyntax Parameters, llvm::Optional<TokenSyntax> ThrowsOrRethrowsKeyword, llvm::Optional<GenericWhereClauseSyntax> GenericWhereClause, llvm::Optional<CodeBlockSyntax> Body,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static InitializerDeclSyntax makeBlankInitializerDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DeinitializerDeclSyntax makeDeinitializerDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax DeinitKeyword, CodeBlockSyntax Body,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DeinitializerDeclSyntax makeBlankDeinitializerDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SubscriptDeclSyntax makeSubscriptDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax SubscriptKeyword, llvm::Optional<GenericParameterClauseSyntax> GenericParameterClause, ParameterClauseSyntax Indices, ReturnClauseSyntax Result, llvm::Optional<GenericWhereClauseSyntax> GenericWhereClause, llvm::Optional<Syntax> Accessor,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SubscriptDeclSyntax makeBlankSubscriptDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AccessLevelModifierSyntax makeAccessLevelModifier(TokenSyntax Name, llvm::Optional<TokenSyntax> LeftParen, llvm::Optional<TokenSyntax> Modifier, llvm::Optional<TokenSyntax> RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AccessLevelModifierSyntax makeBlankAccessLevelModifier(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AccessPathComponentSyntax makeAccessPathComponent(TokenSyntax Name, llvm::Optional<TokenSyntax> TrailingDot,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AccessPathComponentSyntax makeBlankAccessPathComponent(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AccessPathSyntax makeAccessPath(
      const std::vector<AccessPathComponentSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AccessPathSyntax makeBlankAccessPath(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ImportDeclSyntax makeImportDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax ImportTok, llvm::Optional<TokenSyntax> ImportKind, AccessPathSyntax Path,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ImportDeclSyntax makeBlankImportDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AccessorParameterSyntax makeAccessorParameter(TokenSyntax LeftParen, TokenSyntax Name, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AccessorParameterSyntax makeBlankAccessorParameter(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AccessorDeclSyntax makeAccessorDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<DeclModifierSyntax> Modifier, TokenSyntax AccessorKind, llvm::Optional<AccessorParameterSyntax> Parameter, llvm::Optional<CodeBlockSyntax> Body,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AccessorDeclSyntax makeBlankAccessorDecl(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AccessorListSyntax makeAccessorList(
      const std::vector<AccessorDeclSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AccessorListSyntax makeBlankAccessorList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AccessorBlockSyntax makeAccessorBlock(TokenSyntax LeftBrace, AccessorListSyntax Accessors, TokenSyntax RightBrace,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AccessorBlockSyntax makeBlankAccessorBlock(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PatternBindingSyntax makePatternBinding(PatternSyntax Pattern, llvm::Optional<TypeAnnotationSyntax> TypeAnnotation, llvm::Optional<InitializerClauseSyntax> Initializer, llvm::Optional<Syntax> Accessor, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PatternBindingSyntax makeBlankPatternBinding(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PatternBindingListSyntax makePatternBindingList(
      const std::vector<PatternBindingSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PatternBindingListSyntax makeBlankPatternBindingList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static VariableDeclSyntax makeVariableDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax LetOrVarKeyword, PatternBindingListSyntax Bindings,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static VariableDeclSyntax makeBlankVariableDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static EnumCaseElementSyntax makeEnumCaseElement(TokenSyntax Identifier, llvm::Optional<ParameterClauseSyntax> AssociatedValue, llvm::Optional<InitializerClauseSyntax> RawValue, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static EnumCaseElementSyntax makeBlankEnumCaseElement(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static EnumCaseElementListSyntax makeEnumCaseElementList(
      const std::vector<EnumCaseElementSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static EnumCaseElementListSyntax makeBlankEnumCaseElementList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static EnumCaseDeclSyntax makeEnumCaseDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax CaseKeyword, EnumCaseElementListSyntax Elements,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static EnumCaseDeclSyntax makeBlankEnumCaseDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static EnumDeclSyntax makeEnumDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax EnumKeyword, TokenSyntax Identifier, llvm::Optional<GenericParameterClauseSyntax> GenericParameters, llvm::Optional<TypeInheritanceClauseSyntax> InheritanceClause, llvm::Optional<GenericWhereClauseSyntax> GenericWhereClause, MemberDeclBlockSyntax Members,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static EnumDeclSyntax makeBlankEnumDecl(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static OperatorDeclSyntax makeOperatorDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax OperatorKeyword, TokenSyntax Identifier, llvm::Optional<OperatorPrecedenceAndTypesSyntax> OperatorPrecedenceAndTypes,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static OperatorDeclSyntax makeBlankOperatorDecl(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static IdentifierListSyntax makeIdentifierList(
      const std::vector<TokenSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static IdentifierListSyntax makeBlankIdentifierList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static OperatorPrecedenceAndTypesSyntax makeOperatorPrecedenceAndTypes(TokenSyntax Colon, IdentifierListSyntax PrecedenceGroupAndDesignatedTypes,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static OperatorPrecedenceAndTypesSyntax makeBlankOperatorPrecedenceAndTypes(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PrecedenceGroupDeclSyntax makePrecedenceGroupDecl(llvm::Optional<AttributeListSyntax> Attributes, llvm::Optional<ModifierListSyntax> Modifiers, TokenSyntax PrecedencegroupKeyword, TokenSyntax Identifier, TokenSyntax LeftBrace, PrecedenceGroupAttributeListSyntax GroupAttributes, TokenSyntax RightBrace,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PrecedenceGroupDeclSyntax makeBlankPrecedenceGroupDecl(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PrecedenceGroupAttributeListSyntax makePrecedenceGroupAttributeList(
      const std::vector<Syntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PrecedenceGroupAttributeListSyntax makeBlankPrecedenceGroupAttributeList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PrecedenceGroupRelationSyntax makePrecedenceGroupRelation(TokenSyntax HigherThanOrLowerThan, TokenSyntax Colon, PrecedenceGroupNameListSyntax OtherNames,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PrecedenceGroupRelationSyntax makeBlankPrecedenceGroupRelation(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PrecedenceGroupNameListSyntax makePrecedenceGroupNameList(
      const std::vector<PrecedenceGroupNameElementSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PrecedenceGroupNameListSyntax makeBlankPrecedenceGroupNameList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PrecedenceGroupNameElementSyntax makePrecedenceGroupNameElement(TokenSyntax Name, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PrecedenceGroupNameElementSyntax makeBlankPrecedenceGroupNameElement(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PrecedenceGroupAssignmentSyntax makePrecedenceGroupAssignment(TokenSyntax AssignmentKeyword, TokenSyntax Colon, TokenSyntax Flag,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PrecedenceGroupAssignmentSyntax makeBlankPrecedenceGroupAssignment(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PrecedenceGroupAssociativitySyntax makePrecedenceGroupAssociativity(TokenSyntax AssociativityKeyword, TokenSyntax Colon, TokenSyntax Value,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PrecedenceGroupAssociativitySyntax makeBlankPrecedenceGroupAssociativity(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenListSyntax makeTokenList(
      const std::vector<TokenSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TokenListSyntax makeBlankTokenList(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static NonEmptyTokenListSyntax makeNonEmptyTokenList(
      const std::vector<TokenSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static NonEmptyTokenListSyntax makeBlankNonEmptyTokenList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CustomAttributeSyntax makeCustomAttribute(TokenSyntax AtSignToken, TypeSyntax AttributeName, llvm::Optional<TokenSyntax> LeftParen, llvm::Optional<FunctionCallArgumentListSyntax> ArgumentList, llvm::Optional<TokenSyntax> RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CustomAttributeSyntax makeBlankCustomAttribute(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AttributeSyntax makeAttribute(TokenSyntax AtSignToken, TokenSyntax AttributeName, llvm::Optional<TokenSyntax> LeftParen, llvm::Optional<Syntax> Argument, llvm::Optional<TokenSyntax> RightParen, llvm::Optional<TokenListSyntax> TokenList,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AttributeSyntax makeBlankAttribute(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AttributeListSyntax makeAttributeList(
      const std::vector<Syntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AttributeListSyntax makeBlankAttributeList(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SpecializeAttributeSpecListSyntax makeSpecializeAttributeSpecList(
      const std::vector<Syntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SpecializeAttributeSpecListSyntax makeBlankSpecializeAttributeSpecList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static LabeledSpecializeEntrySyntax makeLabeledSpecializeEntry(TokenSyntax Label, TokenSyntax Colon, TokenSyntax Value, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static LabeledSpecializeEntrySyntax makeBlankLabeledSpecializeEntry(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static NamedAttributeStringArgumentSyntax makeNamedAttributeStringArgument(TokenSyntax NameTok, TokenSyntax Colon, Syntax StringOrDeclname,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static NamedAttributeStringArgumentSyntax makeBlankNamedAttributeStringArgument(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DeclNameSyntax makeDeclName(Syntax DeclBaseName, llvm::Optional<DeclNameArgumentsSyntax> DeclNameArguments,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DeclNameSyntax makeBlankDeclName(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ImplementsAttributeArgumentsSyntax makeImplementsAttributeArguments(SimpleTypeIdentifierSyntax Type, TokenSyntax Comma, Syntax DeclBaseName, llvm::Optional<DeclNameArgumentsSyntax> DeclNameArguments,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ImplementsAttributeArgumentsSyntax makeBlankImplementsAttributeArguments(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ObjCSelectorPieceSyntax makeObjCSelectorPiece(llvm::Optional<TokenSyntax> Name, llvm::Optional<TokenSyntax> Colon,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ObjCSelectorPieceSyntax makeBlankObjCSelectorPiece(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ObjCSelectorSyntax makeObjCSelector(
      const std::vector<ObjCSelectorPieceSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ObjCSelectorSyntax makeBlankObjCSelector(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ContinueStmtSyntax makeContinueStmt(TokenSyntax ContinueKeyword, llvm::Optional<TokenSyntax> Label,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ContinueStmtSyntax makeBlankContinueStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static WhileStmtSyntax makeWhileStmt(llvm::Optional<TokenSyntax> LabelName, llvm::Optional<TokenSyntax> LabelColon, TokenSyntax WhileKeyword, ConditionElementListSyntax Conditions, CodeBlockSyntax Body,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static WhileStmtSyntax makeBlankWhileStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DeferStmtSyntax makeDeferStmt(TokenSyntax DeferKeyword, CodeBlockSyntax Body,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DeferStmtSyntax makeBlankDeferStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ExpressionStmtSyntax makeExpressionStmt(ExprSyntax Expression,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ExpressionStmtSyntax makeBlankExpressionStmt(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SwitchCaseListSyntax makeSwitchCaseList(
      const std::vector<Syntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SwitchCaseListSyntax makeBlankSwitchCaseList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static RepeatWhileStmtSyntax makeRepeatWhileStmt(llvm::Optional<TokenSyntax> LabelName, llvm::Optional<TokenSyntax> LabelColon, TokenSyntax RepeatKeyword, CodeBlockSyntax Body, TokenSyntax WhileKeyword, ExprSyntax Condition,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static RepeatWhileStmtSyntax makeBlankRepeatWhileStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static GuardStmtSyntax makeGuardStmt(TokenSyntax GuardKeyword, ConditionElementListSyntax Conditions, TokenSyntax ElseKeyword, CodeBlockSyntax Body,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static GuardStmtSyntax makeBlankGuardStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static WhereClauseSyntax makeWhereClause(TokenSyntax WhereKeyword, ExprSyntax GuardResult,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static WhereClauseSyntax makeBlankWhereClause(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ForInStmtSyntax makeForInStmt(llvm::Optional<TokenSyntax> LabelName, llvm::Optional<TokenSyntax> LabelColon, TokenSyntax ForKeyword, llvm::Optional<TokenSyntax> CaseKeyword, PatternSyntax Pattern, llvm::Optional<TypeAnnotationSyntax> TypeAnnotation, TokenSyntax InKeyword, ExprSyntax SequenceExpr, llvm::Optional<WhereClauseSyntax> WhereClause, CodeBlockSyntax Body,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ForInStmtSyntax makeBlankForInStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SwitchStmtSyntax makeSwitchStmt(llvm::Optional<TokenSyntax> LabelName, llvm::Optional<TokenSyntax> LabelColon, TokenSyntax SwitchKeyword, ExprSyntax Expression, TokenSyntax LeftBrace, SwitchCaseListSyntax Cases, TokenSyntax RightBrace,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SwitchStmtSyntax makeBlankSwitchStmt(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CatchClauseListSyntax makeCatchClauseList(
      const std::vector<CatchClauseSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CatchClauseListSyntax makeBlankCatchClauseList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DoStmtSyntax makeDoStmt(llvm::Optional<TokenSyntax> LabelName, llvm::Optional<TokenSyntax> LabelColon, TokenSyntax DoKeyword, CodeBlockSyntax Body, llvm::Optional<CatchClauseListSyntax> CatchClauses,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DoStmtSyntax makeBlankDoStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ReturnStmtSyntax makeReturnStmt(TokenSyntax ReturnKeyword, llvm::Optional<ExprSyntax> Expression,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ReturnStmtSyntax makeBlankReturnStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static YieldStmtSyntax makeYieldStmt(TokenSyntax YieldKeyword, Syntax Yields,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static YieldStmtSyntax makeBlankYieldStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static YieldListSyntax makeYieldList(TokenSyntax LeftParen, ExprListSyntax ElementList, llvm::Optional<TokenSyntax> TrailingComma, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static YieldListSyntax makeBlankYieldList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static FallthroughStmtSyntax makeFallthroughStmt(TokenSyntax FallthroughKeyword,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static FallthroughStmtSyntax makeBlankFallthroughStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static BreakStmtSyntax makeBreakStmt(TokenSyntax BreakKeyword, llvm::Optional<TokenSyntax> Label,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static BreakStmtSyntax makeBlankBreakStmt(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CaseItemListSyntax makeCaseItemList(
      const std::vector<CaseItemSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CaseItemListSyntax makeBlankCaseItemList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ConditionElementSyntax makeConditionElement(Syntax Condition, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ConditionElementSyntax makeBlankConditionElement(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AvailabilityConditionSyntax makeAvailabilityCondition(TokenSyntax PoundAvailableKeyword, TokenSyntax LeftParen, AvailabilitySpecListSyntax AvailabilitySpec, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AvailabilityConditionSyntax makeBlankAvailabilityCondition(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static MatchingPatternConditionSyntax makeMatchingPatternCondition(TokenSyntax CaseKeyword, PatternSyntax Pattern, llvm::Optional<TypeAnnotationSyntax> TypeAnnotation, InitializerClauseSyntax Initializer,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static MatchingPatternConditionSyntax makeBlankMatchingPatternCondition(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static OptionalBindingConditionSyntax makeOptionalBindingCondition(TokenSyntax LetOrVarKeyword, PatternSyntax Pattern, llvm::Optional<TypeAnnotationSyntax> TypeAnnotation, InitializerClauseSyntax Initializer,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static OptionalBindingConditionSyntax makeBlankOptionalBindingCondition(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ConditionElementListSyntax makeConditionElementList(
      const std::vector<ConditionElementSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ConditionElementListSyntax makeBlankConditionElementList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DeclarationStmtSyntax makeDeclarationStmt(DeclSyntax Declaration,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DeclarationStmtSyntax makeBlankDeclarationStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ThrowStmtSyntax makeThrowStmt(TokenSyntax ThrowKeyword, ExprSyntax Expression,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ThrowStmtSyntax makeBlankThrowStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static IfStmtSyntax makeIfStmt(llvm::Optional<TokenSyntax> LabelName, llvm::Optional<TokenSyntax> LabelColon, TokenSyntax IfKeyword, ConditionElementListSyntax Conditions, CodeBlockSyntax Body, llvm::Optional<TokenSyntax> ElseKeyword, llvm::Optional<Syntax> ElseBody,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static IfStmtSyntax makeBlankIfStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ElseIfContinuationSyntax makeElseIfContinuation(IfStmtSyntax IfStatement,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ElseIfContinuationSyntax makeBlankElseIfContinuation(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ElseBlockSyntax makeElseBlock(TokenSyntax ElseKeyword, CodeBlockSyntax Body,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ElseBlockSyntax makeBlankElseBlock(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SwitchCaseSyntax makeSwitchCase(llvm::Optional<AttributeSyntax> UnknownAttr, Syntax Label, CodeBlockItemListSyntax Statements,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SwitchCaseSyntax makeBlankSwitchCase(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SwitchDefaultLabelSyntax makeSwitchDefaultLabel(TokenSyntax DefaultKeyword, TokenSyntax Colon,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SwitchDefaultLabelSyntax makeBlankSwitchDefaultLabel(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CaseItemSyntax makeCaseItem(PatternSyntax Pattern, llvm::Optional<WhereClauseSyntax> WhereClause, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CaseItemSyntax makeBlankCaseItem(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SwitchCaseLabelSyntax makeSwitchCaseLabel(TokenSyntax CaseKeyword, CaseItemListSyntax CaseItems, TokenSyntax Colon,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SwitchCaseLabelSyntax makeBlankSwitchCaseLabel(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CatchClauseSyntax makeCatchClause(TokenSyntax CatchKeyword, llvm::Optional<PatternSyntax> Pattern, llvm::Optional<WhereClauseSyntax> WhereClause, CodeBlockSyntax Body,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CatchClauseSyntax makeBlankCatchClause(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static PoundAssertStmtSyntax makePoundAssertStmt(TokenSyntax PoundAssert, TokenSyntax LeftParen, ExprSyntax Condition, llvm::Optional<TokenSyntax> Comma, llvm::Optional<TokenSyntax> Message, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static PoundAssertStmtSyntax makeBlankPoundAssertStmt(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static GenericWhereClauseSyntax makeGenericWhereClause(TokenSyntax WhereKeyword, GenericRequirementListSyntax RequirementList,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static GenericWhereClauseSyntax makeBlankGenericWhereClause(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static GenericRequirementListSyntax makeGenericRequirementList(
      const std::vector<Syntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static GenericRequirementListSyntax makeBlankGenericRequirementList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SameTypeRequirementSyntax makeSameTypeRequirement(TypeSyntax LeftTypeIdentifier, TokenSyntax EqualityToken, TypeSyntax RightTypeIdentifier, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SameTypeRequirementSyntax makeBlankSameTypeRequirement(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static GenericParameterListSyntax makeGenericParameterList(
      const std::vector<GenericParameterSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static GenericParameterListSyntax makeBlankGenericParameterList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static GenericParameterSyntax makeGenericParameter(llvm::Optional<AttributeListSyntax> Attributes, TokenSyntax Name, llvm::Optional<TokenSyntax> Colon, llvm::Optional<TypeSyntax> InheritedType, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static GenericParameterSyntax makeBlankGenericParameter(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static GenericParameterClauseSyntax makeGenericParameterClause(TokenSyntax LeftAngleBracket, GenericParameterListSyntax GenericParameterList, TokenSyntax RightAngleBracket,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static GenericParameterClauseSyntax makeBlankGenericParameterClause(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ConformanceRequirementSyntax makeConformanceRequirement(TypeSyntax LeftTypeIdentifier, TokenSyntax Colon, TypeSyntax RightTypeIdentifier, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ConformanceRequirementSyntax makeBlankConformanceRequirement(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SimpleTypeIdentifierSyntax makeSimpleTypeIdentifier(TokenSyntax Name, llvm::Optional<GenericArgumentClauseSyntax> GenericArgumentClause,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SimpleTypeIdentifierSyntax makeBlankSimpleTypeIdentifier(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static MemberTypeIdentifierSyntax makeMemberTypeIdentifier(TypeSyntax BaseType, TokenSyntax Period, TokenSyntax Name, llvm::Optional<GenericArgumentClauseSyntax> GenericArgumentClause,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static MemberTypeIdentifierSyntax makeBlankMemberTypeIdentifier(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ClassRestrictionTypeSyntax makeClassRestrictionType(TokenSyntax ClassKeyword,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ClassRestrictionTypeSyntax makeBlankClassRestrictionType(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ArrayTypeSyntax makeArrayType(TokenSyntax LeftSquareBracket, TypeSyntax ElementType, TokenSyntax RightSquareBracket,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ArrayTypeSyntax makeBlankArrayType(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static DictionaryTypeSyntax makeDictionaryType(TokenSyntax LeftSquareBracket, TypeSyntax KeyType, TokenSyntax Colon, TypeSyntax ValueType, TokenSyntax RightSquareBracket,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static DictionaryTypeSyntax makeBlankDictionaryType(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static MetatypeTypeSyntax makeMetatypeType(TypeSyntax BaseType, TokenSyntax Period, TokenSyntax TypeOrProtocol,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static MetatypeTypeSyntax makeBlankMetatypeType(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static OptionalTypeSyntax makeOptionalType(TypeSyntax WrappedType, TokenSyntax QuestionMark,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static OptionalTypeSyntax makeBlankOptionalType(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static SomeTypeSyntax makeSomeType(TokenSyntax SomeSpecifier, TypeSyntax BaseType,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static SomeTypeSyntax makeBlankSomeType(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ImplicitlyUnwrappedOptionalTypeSyntax makeImplicitlyUnwrappedOptionalType(TypeSyntax WrappedType, TokenSyntax ExclamationMark,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ImplicitlyUnwrappedOptionalTypeSyntax makeBlankImplicitlyUnwrappedOptionalType(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CompositionTypeElementSyntax makeCompositionTypeElement(TypeSyntax Type, llvm::Optional<TokenSyntax> Ampersand,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CompositionTypeElementSyntax makeBlankCompositionTypeElement(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CompositionTypeElementListSyntax makeCompositionTypeElementList(
      const std::vector<CompositionTypeElementSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CompositionTypeElementListSyntax makeBlankCompositionTypeElementList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static CompositionTypeSyntax makeCompositionType(CompositionTypeElementListSyntax Elements,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static CompositionTypeSyntax makeBlankCompositionType(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TupleTypeElementSyntax makeTupleTypeElement(llvm::Optional<TokenSyntax> InOut, llvm::Optional<TokenSyntax> Name, llvm::Optional<TokenSyntax> SecondName, llvm::Optional<TokenSyntax> Colon, TypeSyntax Type, llvm::Optional<TokenSyntax> Ellipsis, llvm::Optional<InitializerClauseSyntax> Initializer, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TupleTypeElementSyntax makeBlankTupleTypeElement(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TupleTypeElementListSyntax makeTupleTypeElementList(
      const std::vector<TupleTypeElementSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TupleTypeElementListSyntax makeBlankTupleTypeElementList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TupleTypeSyntax makeTupleType(TokenSyntax LeftParen, TupleTypeElementListSyntax Elements, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TupleTypeSyntax makeBlankTupleType(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static FunctionTypeSyntax makeFunctionType(TokenSyntax LeftParen, TupleTypeElementListSyntax Arguments, TokenSyntax RightParen, llvm::Optional<TokenSyntax> ThrowsOrRethrowsKeyword, TokenSyntax Arrow, TypeSyntax ReturnType,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static FunctionTypeSyntax makeBlankFunctionType(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AttributedTypeSyntax makeAttributedType(llvm::Optional<TokenSyntax> Specifier, llvm::Optional<AttributeListSyntax> Attributes, TypeSyntax BaseType,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AttributedTypeSyntax makeBlankAttributedType(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static GenericArgumentListSyntax makeGenericArgumentList(
      const std::vector<GenericArgumentSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static GenericArgumentListSyntax makeBlankGenericArgumentList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static GenericArgumentSyntax makeGenericArgument(TypeSyntax ArgumentType, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static GenericArgumentSyntax makeBlankGenericArgument(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static GenericArgumentClauseSyntax makeGenericArgumentClause(TokenSyntax LeftAngleBracket, GenericArgumentListSyntax Arguments, TokenSyntax RightAngleBracket,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static GenericArgumentClauseSyntax makeBlankGenericArgumentClause(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TypeAnnotationSyntax makeTypeAnnotation(TokenSyntax Colon, TypeSyntax Type,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TypeAnnotationSyntax makeBlankTypeAnnotation(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static EnumCasePatternSyntax makeEnumCasePattern(llvm::Optional<TypeSyntax> Type, TokenSyntax Period, TokenSyntax CaseName, llvm::Optional<TuplePatternSyntax> AssociatedTuple,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static EnumCasePatternSyntax makeBlankEnumCasePattern(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static IsTypePatternSyntax makeIsTypePattern(TokenSyntax IsKeyword, TypeSyntax Type,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static IsTypePatternSyntax makeBlankIsTypePattern(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static OptionalPatternSyntax makeOptionalPattern(PatternSyntax SubPattern, TokenSyntax QuestionMark,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static OptionalPatternSyntax makeBlankOptionalPattern(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static IdentifierPatternSyntax makeIdentifierPattern(TokenSyntax Identifier,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static IdentifierPatternSyntax makeBlankIdentifierPattern(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AsTypePatternSyntax makeAsTypePattern(PatternSyntax Pattern, TokenSyntax AsKeyword, TypeSyntax Type,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AsTypePatternSyntax makeBlankAsTypePattern(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TuplePatternSyntax makeTuplePattern(TokenSyntax LeftParen, TuplePatternElementListSyntax Elements, TokenSyntax RightParen,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TuplePatternSyntax makeBlankTuplePattern(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static WildcardPatternSyntax makeWildcardPattern(TokenSyntax Wildcard, llvm::Optional<TypeAnnotationSyntax> TypeAnnotation,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static WildcardPatternSyntax makeBlankWildcardPattern(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TuplePatternElementSyntax makeTuplePatternElement(llvm::Optional<TokenSyntax> LabelName, llvm::Optional<TokenSyntax> LabelColon, PatternSyntax Pattern, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TuplePatternElementSyntax makeBlankTuplePatternElement(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ExpressionPatternSyntax makeExpressionPattern(ExprSyntax Expression,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ExpressionPatternSyntax makeBlankExpressionPattern(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TuplePatternElementListSyntax makeTuplePatternElementList(
      const std::vector<TuplePatternElementSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static TuplePatternElementListSyntax makeBlankTuplePatternElementList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static ValueBindingPatternSyntax makeValueBindingPattern(TokenSyntax LetOrVarKeyword, PatternSyntax ValuePattern,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static ValueBindingPatternSyntax makeBlankValueBindingPattern(RC<SyntaxArena> Arena = nullptr);
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AvailabilitySpecListSyntax makeAvailabilitySpecList(
      const std::vector<AvailabilityArgumentSyntax> &elts,
      RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AvailabilitySpecListSyntax makeBlankAvailabilitySpecList(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AvailabilityArgumentSyntax makeAvailabilityArgument(Syntax Entry, llvm::Optional<TokenSyntax> TrailingComma,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AvailabilityArgumentSyntax makeBlankAvailabilityArgument(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AvailabilityLabeledArgumentSyntax makeAvailabilityLabeledArgument(TokenSyntax Label, TokenSyntax Colon, Syntax Value,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AvailabilityLabeledArgumentSyntax makeBlankAvailabilityLabeledArgument(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static AvailabilityVersionRestrictionSyntax makeAvailabilityVersionRestriction(TokenSyntax Platform, VersionTupleSyntax Version,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static AvailabilityVersionRestrictionSyntax makeBlankAvailabilityVersionRestriction(RC<SyntaxArena> Arena = nullptr);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static VersionTupleSyntax makeVersionTuple(Syntax MajorMinor, llvm::Optional<TokenSyntax> PatchPeriod, llvm::Optional<TokenSyntax> PatchVersion,
                                              RC<SyntaxArena> Arena = nullptr);
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

  static VersionTupleSyntax makeBlankVersionTuple(RC<SyntaxArena> Arena = nullptr);
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeAssociatedtypeKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeClassKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeDeinitKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeEnumKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeExtensionKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeFuncKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeImportKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeInitKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeInoutKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeLetKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeOperatorKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePrecedencegroupKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeProtocolKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeStructKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeSubscriptKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeTypealiasKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeVarKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeFileprivateKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeInternalKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePrivateKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePublicKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeStaticKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeDeferKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeIfKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeGuardKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeDoKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeRepeatKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeElseKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeForKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeInKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeWhileKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeReturnKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeBreakKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeContinueKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeFallthroughKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeSwitchKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeCaseKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeDefaultKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeWhereKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeCatchKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeThrowKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeAsKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeAnyKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeFalseKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeIsKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeNilKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeRethrowsKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeSuperKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeSelfKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeCapitalSelfKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeTrueKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeTryKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeThrowsKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax make__FILE__Keyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax make__LINE__Keyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax make__COLUMN__Keyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax make__FUNCTION__Keyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax make__DSO_HANDLE__Keyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeWildcardKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeLeftParenToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeRightParenToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeLeftBraceToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeRightBraceToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeLeftSquareBracketToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeRightSquareBracketToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeLeftAngleToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeRightAngleToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePeriodToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePrefixPeriodToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeCommaToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeEllipsisToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeColonToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeSemicolonToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeEqualToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeAtSignToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePrefixAmpersandToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeArrowToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeBacktickToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeBackslashToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeExclamationMarkToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePostfixQuestionMarkToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeInfixQuestionMarkToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeStringQuoteToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeSingleQuoteToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeMultilineStringQuoteToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundKeyPathKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundLineKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundSelectorKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundFileKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundColumnKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundFunctionKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundDsohandleKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundAssertKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundSourceLocationKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundWarningKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundErrorKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundIfKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundElseKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundElseifKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundEndifKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundAvailableKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundFileLiteralKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundImageLiteralKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePoundColorLiteralKeyword(const Trivia &LeadingTrivia,
                                              const Trivia &TrailingTrivia,
                                              RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeIntegerLiteral(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeFloatingLiteral(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeStringLiteral(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeUnknown(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeIdentifier(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeUnspacedBinaryOperator(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeSpacedBinaryOperator(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePostfixOperator(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makePrefixOperator(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeDollarIdentifier(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeContextualKeyword(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeRawStringDelimiter(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeStringSegment(OwnedString Text,
                                       const Trivia &LeadingTrivia,
                                       const Trivia &TrailingTrivia,
                                       RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeStringInterpolationAnchorToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"
  static TokenSyntax makeYieldToken(const Trivia &LeadingTrivia,
                                            const Trivia &TrailingTrivia,
                                            RC<SyntaxArena> Arena = nullptr);
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxFactory.h.gyb"

#pragma mark - Convenience APIs

  static TupleTypeSyntax makeVoidTupleType(RC<SyntaxArena> Arena = nullptr);

  /// Creates an labelled TupleTypeElementSyntax with the provided label,
  /// colon, type and optional trailing comma.
  static TupleTypeElementSyntax makeTupleTypeElement(
      llvm::Optional<TokenSyntax> Label,
      llvm::Optional<TokenSyntax> Colon, TypeSyntax Type,
      llvm::Optional<TokenSyntax> TrailingComma = llvm::None,
      RC<SyntaxArena> Arena = nullptr);

  /// Creates an unlabelled TupleTypeElementSyntax with the provided type and
  /// optional trailing comma.
  static TupleTypeElementSyntax
  makeTupleTypeElement(TypeSyntax Type,
                       llvm::Optional<TokenSyntax> TrailingComma = llvm::None,
                       RC<SyntaxArena> Arena = nullptr);

  /// Creates a TypeIdentifierSyntax with the provided name and leading/trailing
  /// trivia.
  static TypeSyntax makeTypeIdentifier(OwnedString TypeName,
                                       const Trivia &LeadingTrivia = {},
                                       const Trivia &TrailingTrivia = {},
                                       RC<SyntaxArena> Arena = nullptr);

  /// Creates a GenericParameterSyntax with no inheritance clause and an
  /// optional trailing comma.
  static GenericParameterSyntax
  makeGenericParameter(TokenSyntax Name,
                       llvm::Optional<TokenSyntax> TrailingComma,
                       RC<SyntaxArena> Arena = nullptr);

  /// Creates a TypeIdentifierSyntax for the `Any` type.
  static TypeSyntax makeAnyTypeIdentifier(const Trivia &LeadingTrivia = {},
                                          const Trivia &TrailingTrivia = {},
                                          RC<SyntaxArena> Arena = nullptr);

  /// Creates a TypeIdentifierSyntax for the `Self` type.
  static TypeSyntax makeSelfTypeIdentifier(const Trivia &LeadingTrivia = {},
                                           const Trivia &TrailingTrivia = {},
                                           RC<SyntaxArena> Arena = nullptr);

  /// Creates a TokenSyntax for the `Type` identifier.
  static TokenSyntax makeTypeToken(const Trivia &LeadingTrivia = {},
                                   const Trivia &TrailingTrivia = {},
                                   RC<SyntaxArena> Arena = nullptr);

  /// Creates a TokenSyntax for the `Protocol` identifier.
  static TokenSyntax makeProtocolToken(const Trivia &LeadingTrivia = {},
                                       const Trivia &TrailingTrivia = {},
                                       RC<SyntaxArena> Arena = nullptr);

  /// Creates an `==` operator token.
  static TokenSyntax makeEqualityOperator(const Trivia &LeadingTrivia = {},
                                          const Trivia &TrailingTrivia = {},
                                          RC<SyntaxArena> Arena = nullptr);

  /// Whether a raw node kind `MemberKind` can serve as a member in a syntax
  /// collection of the given syntax collection kind.
  static bool canServeAsCollectionMemberRaw(SyntaxKind CollectionKind,
                                            SyntaxKind MemberKind);

  /// Whether a raw node `Member` can serve as a member in a syntax collection
  /// of the given syntax collection kind.
  static bool canServeAsCollectionMemberRaw(SyntaxKind CollectionKind,
                                            const RC<RawSyntax> &Member);

  /// Whether a node `Member` can serve as a member in a syntax collection of
  /// the given syntax collection kind.
  static bool canServeAsCollectionMember(SyntaxKind CollectionKind, Syntax Member);
};
}
}

#endif // SWIFT_SYNTAX_FACTORY_H
