#line 10 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
//// Automatically Generated From SyntaxKind.h.gyb.
//// Do Not Edit Directly!
//===--------------- SyntaxKind.h - Syntax Kind definitions ---------------===//
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

#ifndef SWIFT_SYNTAX_KIND_H
#define SWIFT_SYNTAX_KIND_H

#include "swift/Basic/InlineBitfield.h"
#include "swift/Basic/ByteTreeSerialization.h"
#include "swift/Basic/JSONSerialization.h"
#include "llvm/Support/YAMLTraits.h"

namespace swift {
namespace syntax {

enum class SyntaxKind {
  Token,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  UnknownDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TypealiasDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AssociatedtypeDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  IfConfigDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PoundErrorDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PoundWarningDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PoundSourceLocation,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ClassDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  StructDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ProtocolDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ExtensionDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  FunctionDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  InitializerDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DeinitializerDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SubscriptDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ImportDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AccessorDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  VariableDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  EnumCaseDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  EnumDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  OperatorDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PrecedenceGroupDecl,
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  First_Decl = UnknownDecl,
  Last_Decl = PrecedenceGroupDecl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  UnknownExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  InOutExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PoundColumnExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TryExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  IdentifierExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SuperRefExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  NilLiteralExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DiscardAssignmentExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AssignmentExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SequenceExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PoundLineExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PoundFileExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PoundFunctionExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PoundDsohandleExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SymbolicReferenceExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PrefixOperatorExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  BinaryOperatorExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ArrowExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  FloatLiteralExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TupleExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ArrayExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DictionaryExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  IntegerLiteralExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  BooleanLiteralExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TernaryExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  MemberAccessExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  IsExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AsExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TypeExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ClosureExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  UnresolvedPatternExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  FunctionCallExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SubscriptExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  OptionalChainingExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ForcedValueExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PostfixUnaryExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SpecializeExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  StringLiteralExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  KeyPathExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  KeyPathBaseExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ObjcKeyPathExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ObjcSelectorExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  EditorPlaceholderExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ObjectLiteralExpr,
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  First_Expr = UnknownExpr,
  Last_Expr = ObjectLiteralExpr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  UnknownStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ContinueStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  WhileStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DeferStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ExpressionStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  RepeatWhileStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  GuardStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ForInStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SwitchStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DoStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ReturnStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  YieldStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  FallthroughStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  BreakStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DeclarationStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ThrowStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  IfStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PoundAssertStmt,
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  First_Stmt = UnknownStmt,
  Last_Stmt = PoundAssertStmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  Decl,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  Expr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  Stmt,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  Type,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  Pattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CodeBlockItem,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CodeBlock,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DeclNameArgument,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DeclNameArguments,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  FunctionCallArgument,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TupleElement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ArrayElement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DictionaryElement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ClosureCaptureItem,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ClosureCaptureSignature,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ClosureParam,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ClosureSignature,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  StringSegment,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ExpressionSegment,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ObjcNamePiece,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TypeInitializerClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ParameterClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ReturnClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  FunctionSignature,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  IfConfigClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PoundSourceLocationArgs,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DeclModifier,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  InheritedType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TypeInheritanceClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  MemberDeclBlock,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  MemberDeclListItem,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SourceFile,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  InitializerClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  FunctionParameter,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AccessLevelModifier,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AccessPathComponent,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AccessorParameter,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AccessorBlock,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PatternBinding,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  EnumCaseElement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  OperatorPrecedenceAndTypes,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PrecedenceGroupRelation,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PrecedenceGroupNameElement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PrecedenceGroupAssignment,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PrecedenceGroupAssociativity,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CustomAttribute,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  Attribute,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  LabeledSpecializeEntry,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  NamedAttributeStringArgument,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DeclName,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ImplementsAttributeArguments,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ObjCSelectorPiece,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  WhereClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  YieldList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ConditionElement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AvailabilityCondition,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  MatchingPatternCondition,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  OptionalBindingCondition,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ElseIfContinuation,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ElseBlock,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SwitchCase,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SwitchDefaultLabel,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CaseItem,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SwitchCaseLabel,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CatchClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  GenericWhereClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SameTypeRequirement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  GenericParameter,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  GenericParameterClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ConformanceRequirement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CompositionTypeElement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TupleTypeElement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  GenericArgument,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  GenericArgumentClause,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TypeAnnotation,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TuplePatternElement,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AvailabilityArgument,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AvailabilityLabeledArgument,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AvailabilityVersionRestriction,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  VersionTuple,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CodeBlockItemList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  FunctionCallArgumentList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TupleElementList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ArrayElementList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DictionaryElementList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  StringLiteralSegments,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DeclNameArgumentList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ExprList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ClosureCaptureItemList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ClosureParamList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ObjcName,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  FunctionParameterList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  IfConfigClauseList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  InheritedTypeList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  MemberDeclList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ModifierList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AccessPath,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AccessorList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PatternBindingList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  EnumCaseElementList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  IdentifierList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PrecedenceGroupAttributeList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  PrecedenceGroupNameList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TokenList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  NonEmptyTokenList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AttributeList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SpecializeAttributeSpecList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ObjCSelector,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SwitchCaseList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CatchClauseList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CaseItemList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ConditionElementList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  GenericRequirementList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  GenericParameterList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CompositionTypeElementList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TupleTypeElementList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  GenericArgumentList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TuplePatternElementList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AvailabilitySpecList,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  UnknownPattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  EnumCasePattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  IsTypePattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  OptionalPattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  IdentifierPattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AsTypePattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TuplePattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  WildcardPattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ExpressionPattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ValueBindingPattern,
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  First_Pattern = UnknownPattern,
  Last_Pattern = ValueBindingPattern,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  UnknownType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SimpleTypeIdentifier,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  MemberTypeIdentifier,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ClassRestrictionType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ArrayType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  DictionaryType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  MetatypeType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  OptionalType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  SomeType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  ImplicitlyUnwrappedOptionalType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  CompositionType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  TupleType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  FunctionType,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  AttributedType,
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  First_Type = UnknownType,
  Last_Type = AttributedType,
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"

  // NOTE: Unknown must be the last kind.
  Unknown,
};
enum : unsigned {
  NumSyntaxKindBits = countBitsUsed(static_cast<unsigned>(SyntaxKind::Unknown))
};

void dumpSyntaxKind(llvm::raw_ostream &os, const SyntaxKind kind);

/// Whether this kind is a syntax collection.
bool isCollectionKind(SyntaxKind Kind);

bool isDeclKind(SyntaxKind Kind);

bool isTypeKind(SyntaxKind Kind);

bool isStmtKind(SyntaxKind Kind);

bool isExprKind(SyntaxKind Kind);

bool isPatternKind(SyntaxKind Kind);

bool isTokenKind(SyntaxKind Kind);

bool isUnknownKind(SyntaxKind Kind);

SyntaxKind getUnknownKind(SyntaxKind Kind);
} // end namespace syntax

bool parserShallOmitWhenNoChildren(syntax::SyntaxKind Kind);

namespace byteTree {

template <>
struct WrapperTypeTraits<syntax::SyntaxKind> {
  // Explicitly spell out all SyntaxKinds to keep the serialized value stable
  // even if its members get reordered or members get removed
  static uint16_t numericValue(const syntax::SyntaxKind &Kind) {
    switch (Kind) {
    case syntax::SyntaxKind::Token:
      return 0;
    case syntax::SyntaxKind::Unknown:
      return 1;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::UnknownDecl: 
      return 2;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TypealiasDecl: 
      return 3;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AssociatedtypeDecl: 
      return 4;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::IfConfigDecl: 
      return 5;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PoundErrorDecl: 
      return 6;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PoundWarningDecl: 
      return 7;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PoundSourceLocation: 
      return 8;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ClassDecl: 
      return 9;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::StructDecl: 
      return 10;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ProtocolDecl: 
      return 11;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ExtensionDecl: 
      return 12;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::FunctionDecl: 
      return 13;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::InitializerDecl: 
      return 14;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DeinitializerDecl: 
      return 15;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SubscriptDecl: 
      return 16;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ImportDecl: 
      return 17;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AccessorDecl: 
      return 18;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::VariableDecl: 
      return 19;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::EnumCaseDecl: 
      return 20;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::EnumDecl: 
      return 21;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::OperatorDecl: 
      return 22;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PrecedenceGroupDecl: 
      return 23;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::UnknownExpr: 
      return 24;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::InOutExpr: 
      return 25;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PoundColumnExpr: 
      return 26;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TryExpr: 
      return 27;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::IdentifierExpr: 
      return 28;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SuperRefExpr: 
      return 29;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::NilLiteralExpr: 
      return 30;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DiscardAssignmentExpr: 
      return 31;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AssignmentExpr: 
      return 32;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SequenceExpr: 
      return 33;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PoundLineExpr: 
      return 34;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PoundFileExpr: 
      return 35;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PoundFunctionExpr: 
      return 36;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PoundDsohandleExpr: 
      return 37;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SymbolicReferenceExpr: 
      return 38;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PrefixOperatorExpr: 
      return 39;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::BinaryOperatorExpr: 
      return 40;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ArrowExpr: 
      return 41;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::FloatLiteralExpr: 
      return 42;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TupleExpr: 
      return 43;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ArrayExpr: 
      return 44;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DictionaryExpr: 
      return 45;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::IntegerLiteralExpr: 
      return 47;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::BooleanLiteralExpr: 
      return 49;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TernaryExpr: 
      return 50;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::MemberAccessExpr: 
      return 51;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::IsExpr: 
      return 53;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AsExpr: 
      return 54;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TypeExpr: 
      return 55;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ClosureExpr: 
      return 56;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::UnresolvedPatternExpr: 
      return 57;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::FunctionCallExpr: 
      return 58;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SubscriptExpr: 
      return 59;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::OptionalChainingExpr: 
      return 60;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ForcedValueExpr: 
      return 61;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PostfixUnaryExpr: 
      return 62;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SpecializeExpr: 
      return 63;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::StringLiteralExpr: 
      return 48;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::KeyPathExpr: 
      return 65;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::KeyPathBaseExpr: 
      return 66;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ObjcKeyPathExpr: 
      return 67;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ObjcSelectorExpr: 
      return 68;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::EditorPlaceholderExpr: 
      return 69;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ObjectLiteralExpr: 
      return 70;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::UnknownStmt: 
      return 71;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ContinueStmt: 
      return 72;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::WhileStmt: 
      return 73;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DeferStmt: 
      return 74;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ExpressionStmt: 
      return 75;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::RepeatWhileStmt: 
      return 76;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::GuardStmt: 
      return 77;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ForInStmt: 
      return 78;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SwitchStmt: 
      return 79;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DoStmt: 
      return 80;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ReturnStmt: 
      return 81;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::YieldStmt: 
      return 224;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::FallthroughStmt: 
      return 82;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::BreakStmt: 
      return 83;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DeclarationStmt: 
      return 84;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ThrowStmt: 
      return 85;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::IfStmt: 
      return 86;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PoundAssertStmt: 
      return 229;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::Decl: 
      return 87;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::Expr: 
      return 88;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::Stmt: 
      return 89;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::Type: 
      return 90;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::Pattern: 
      return 91;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CodeBlockItem: 
      return 92;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CodeBlock: 
      return 93;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DeclNameArgument: 
      return 94;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DeclNameArguments: 
      return 95;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::FunctionCallArgument: 
      return 96;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TupleElement: 
      return 97;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ArrayElement: 
      return 98;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DictionaryElement: 
      return 99;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ClosureCaptureItem: 
      return 100;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ClosureCaptureSignature: 
      return 101;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ClosureParam: 
      return 102;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ClosureSignature: 
      return 103;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::StringSegment: 
      return 104;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ExpressionSegment: 
      return 105;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ObjcNamePiece: 
      return 106;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TypeInitializerClause: 
      return 107;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ParameterClause: 
      return 108;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ReturnClause: 
      return 109;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::FunctionSignature: 
      return 110;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::IfConfigClause: 
      return 111;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PoundSourceLocationArgs: 
      return 112;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DeclModifier: 
      return 113;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::InheritedType: 
      return 114;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TypeInheritanceClause: 
      return 115;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::MemberDeclBlock: 
      return 116;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::MemberDeclListItem: 
      return 117;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SourceFile: 
      return 118;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::InitializerClause: 
      return 119;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::FunctionParameter: 
      return 120;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AccessLevelModifier: 
      return 121;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AccessPathComponent: 
      return 122;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AccessorParameter: 
      return 123;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AccessorBlock: 
      return 124;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PatternBinding: 
      return 125;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::EnumCaseElement: 
      return 126;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::OperatorPrecedenceAndTypes: 
      return 127;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PrecedenceGroupRelation: 
      return 128;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PrecedenceGroupNameElement: 
      return 129;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PrecedenceGroupAssignment: 
      return 130;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PrecedenceGroupAssociativity: 
      return 131;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CustomAttribute: 
      return 231;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::Attribute: 
      return 132;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::LabeledSpecializeEntry: 
      return 133;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::NamedAttributeStringArgument: 
      return 227;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DeclName: 
      return 228;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ImplementsAttributeArguments: 
      return 134;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ObjCSelectorPiece: 
      return 135;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::WhereClause: 
      return 136;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::YieldList: 
      return 225;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ConditionElement: 
      return 137;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AvailabilityCondition: 
      return 138;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::MatchingPatternCondition: 
      return 139;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::OptionalBindingCondition: 
      return 140;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ElseIfContinuation: 
      return 141;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ElseBlock: 
      return 142;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SwitchCase: 
      return 143;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SwitchDefaultLabel: 
      return 144;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CaseItem: 
      return 145;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SwitchCaseLabel: 
      return 146;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CatchClause: 
      return 147;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::GenericWhereClause: 
      return 148;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SameTypeRequirement: 
      return 149;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::GenericParameter: 
      return 150;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::GenericParameterClause: 
      return 151;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ConformanceRequirement: 
      return 152;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CompositionTypeElement: 
      return 153;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TupleTypeElement: 
      return 154;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::GenericArgument: 
      return 155;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::GenericArgumentClause: 
      return 156;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TypeAnnotation: 
      return 157;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TuplePatternElement: 
      return 158;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AvailabilityArgument: 
      return 159;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AvailabilityLabeledArgument: 
      return 160;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AvailabilityVersionRestriction: 
      return 161;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::VersionTuple: 
      return 162;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CodeBlockItemList: 
      return 163;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::FunctionCallArgumentList: 
      return 164;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TupleElementList: 
      return 165;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ArrayElementList: 
      return 166;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DictionaryElementList: 
      return 167;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::StringLiteralSegments: 
      return 168;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DeclNameArgumentList: 
      return 169;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ExprList: 
      return 170;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ClosureCaptureItemList: 
      return 171;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ClosureParamList: 
      return 172;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ObjcName: 
      return 173;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::FunctionParameterList: 
      return 174;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::IfConfigClauseList: 
      return 175;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::InheritedTypeList: 
      return 176;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::MemberDeclList: 
      return 177;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ModifierList: 
      return 178;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AccessPath: 
      return 179;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AccessorList: 
      return 180;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PatternBindingList: 
      return 181;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::EnumCaseElementList: 
      return 182;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::IdentifierList: 
      return 226;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PrecedenceGroupAttributeList: 
      return 183;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::PrecedenceGroupNameList: 
      return 184;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TokenList: 
      return 185;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::NonEmptyTokenList: 
      return 186;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AttributeList: 
      return 187;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SpecializeAttributeSpecList: 
      return 188;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ObjCSelector: 
      return 189;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SwitchCaseList: 
      return 190;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CatchClauseList: 
      return 191;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CaseItemList: 
      return 192;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ConditionElementList: 
      return 193;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::GenericRequirementList: 
      return 194;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::GenericParameterList: 
      return 195;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CompositionTypeElementList: 
      return 196;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TupleTypeElementList: 
      return 197;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::GenericArgumentList: 
      return 198;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TuplePatternElementList: 
      return 199;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AvailabilitySpecList: 
      return 200;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::UnknownPattern: 
      return 201;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::EnumCasePattern: 
      return 202;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::IsTypePattern: 
      return 203;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::OptionalPattern: 
      return 204;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::IdentifierPattern: 
      return 205;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AsTypePattern: 
      return 206;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TuplePattern: 
      return 207;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::WildcardPattern: 
      return 208;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ExpressionPattern: 
      return 209;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ValueBindingPattern: 
      return 210;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::UnknownType: 
      return 211;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SimpleTypeIdentifier: 
      return 212;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::MemberTypeIdentifier: 
      return 213;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ClassRestrictionType: 
      return 214;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ArrayType: 
      return 215;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::DictionaryType: 
      return 216;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::MetatypeType: 
      return 217;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::OptionalType: 
      return 218;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::SomeType: 
      return 230;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::ImplicitlyUnwrappedOptionalType: 
      return 219;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::CompositionType: 
      return 220;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::TupleType: 
      return 221;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::FunctionType: 
      return 222;
#line 94 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    case syntax::SyntaxKind::AttributedType: 
      return 223;
#line 98 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    }
    llvm_unreachable("unhandled kind");
  }

  static void write(ByteTreeWriter &Writer, const syntax::SyntaxKind &Kind,
                    unsigned Index) {
    Writer.write(numericValue(Kind), Index);
  }
};

} // end namespace byteTree

namespace json {

/// Serialization traits for SyntaxKind.
template <>
struct ScalarReferenceTraits<syntax::SyntaxKind> {
  static StringRef stringRef(const syntax::SyntaxKind &value) {
    switch (value) {
      case syntax::SyntaxKind::Token:
        return "\"Token\"";
      case syntax::SyntaxKind::Unknown:
        return "\"Unknown\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::Decl:
        return "\"Decl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::Expr:
        return "\"Expr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::Stmt:
        return "\"Stmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::Type:
        return "\"Type\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::Pattern:
        return "\"Pattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::UnknownDecl:
        return "\"UnknownDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::UnknownExpr:
        return "\"UnknownExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::UnknownStmt:
        return "\"UnknownStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::UnknownType:
        return "\"UnknownType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::UnknownPattern:
        return "\"UnknownPattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CodeBlockItem:
        return "\"CodeBlockItem\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CodeBlockItemList:
        return "\"CodeBlockItemList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CodeBlock:
        return "\"CodeBlock\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::InOutExpr:
        return "\"InOutExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PoundColumnExpr:
        return "\"PoundColumnExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::FunctionCallArgumentList:
        return "\"FunctionCallArgumentList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TupleElementList:
        return "\"TupleElementList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ArrayElementList:
        return "\"ArrayElementList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DictionaryElementList:
        return "\"DictionaryElementList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::StringLiteralSegments:
        return "\"StringLiteralSegments\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TryExpr:
        return "\"TryExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DeclNameArgument:
        return "\"DeclNameArgument\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DeclNameArgumentList:
        return "\"DeclNameArgumentList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DeclNameArguments:
        return "\"DeclNameArguments\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::IdentifierExpr:
        return "\"IdentifierExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SuperRefExpr:
        return "\"SuperRefExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::NilLiteralExpr:
        return "\"NilLiteralExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DiscardAssignmentExpr:
        return "\"DiscardAssignmentExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AssignmentExpr:
        return "\"AssignmentExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SequenceExpr:
        return "\"SequenceExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ExprList:
        return "\"ExprList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PoundLineExpr:
        return "\"PoundLineExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PoundFileExpr:
        return "\"PoundFileExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PoundFunctionExpr:
        return "\"PoundFunctionExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PoundDsohandleExpr:
        return "\"PoundDsohandleExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SymbolicReferenceExpr:
        return "\"SymbolicReferenceExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PrefixOperatorExpr:
        return "\"PrefixOperatorExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::BinaryOperatorExpr:
        return "\"BinaryOperatorExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ArrowExpr:
        return "\"ArrowExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::FloatLiteralExpr:
        return "\"FloatLiteralExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TupleExpr:
        return "\"TupleExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ArrayExpr:
        return "\"ArrayExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DictionaryExpr:
        return "\"DictionaryExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::FunctionCallArgument:
        return "\"FunctionCallArgument\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TupleElement:
        return "\"TupleElement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ArrayElement:
        return "\"ArrayElement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DictionaryElement:
        return "\"DictionaryElement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::IntegerLiteralExpr:
        return "\"IntegerLiteralExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::BooleanLiteralExpr:
        return "\"BooleanLiteralExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TernaryExpr:
        return "\"TernaryExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::MemberAccessExpr:
        return "\"MemberAccessExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::IsExpr:
        return "\"IsExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AsExpr:
        return "\"AsExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TypeExpr:
        return "\"TypeExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ClosureCaptureItem:
        return "\"ClosureCaptureItem\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ClosureCaptureItemList:
        return "\"ClosureCaptureItemList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ClosureCaptureSignature:
        return "\"ClosureCaptureSignature\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ClosureParam:
        return "\"ClosureParam\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ClosureParamList:
        return "\"ClosureParamList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ClosureSignature:
        return "\"ClosureSignature\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ClosureExpr:
        return "\"ClosureExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::UnresolvedPatternExpr:
        return "\"UnresolvedPatternExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::FunctionCallExpr:
        return "\"FunctionCallExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SubscriptExpr:
        return "\"SubscriptExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::OptionalChainingExpr:
        return "\"OptionalChainingExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ForcedValueExpr:
        return "\"ForcedValueExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PostfixUnaryExpr:
        return "\"PostfixUnaryExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SpecializeExpr:
        return "\"SpecializeExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::StringSegment:
        return "\"StringSegment\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ExpressionSegment:
        return "\"ExpressionSegment\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::StringLiteralExpr:
        return "\"StringLiteralExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::KeyPathExpr:
        return "\"KeyPathExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::KeyPathBaseExpr:
        return "\"KeyPathBaseExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ObjcNamePiece:
        return "\"ObjcNamePiece\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ObjcName:
        return "\"ObjcName\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ObjcKeyPathExpr:
        return "\"ObjcKeyPathExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ObjcSelectorExpr:
        return "\"ObjcSelectorExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::EditorPlaceholderExpr:
        return "\"EditorPlaceholderExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ObjectLiteralExpr:
        return "\"ObjectLiteralExpr\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TypeInitializerClause:
        return "\"TypeInitializerClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TypealiasDecl:
        return "\"TypealiasDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AssociatedtypeDecl:
        return "\"AssociatedtypeDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::FunctionParameterList:
        return "\"FunctionParameterList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ParameterClause:
        return "\"ParameterClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ReturnClause:
        return "\"ReturnClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::FunctionSignature:
        return "\"FunctionSignature\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::IfConfigClause:
        return "\"IfConfigClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::IfConfigClauseList:
        return "\"IfConfigClauseList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::IfConfigDecl:
        return "\"IfConfigDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PoundErrorDecl:
        return "\"PoundErrorDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PoundWarningDecl:
        return "\"PoundWarningDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PoundSourceLocation:
        return "\"PoundSourceLocation\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PoundSourceLocationArgs:
        return "\"PoundSourceLocationArgs\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DeclModifier:
        return "\"DeclModifier\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::InheritedType:
        return "\"InheritedType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::InheritedTypeList:
        return "\"InheritedTypeList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TypeInheritanceClause:
        return "\"TypeInheritanceClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ClassDecl:
        return "\"ClassDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::StructDecl:
        return "\"StructDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ProtocolDecl:
        return "\"ProtocolDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ExtensionDecl:
        return "\"ExtensionDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::MemberDeclBlock:
        return "\"MemberDeclBlock\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::MemberDeclList:
        return "\"MemberDeclList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::MemberDeclListItem:
        return "\"MemberDeclListItem\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SourceFile:
        return "\"SourceFile\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::InitializerClause:
        return "\"InitializerClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::FunctionParameter:
        return "\"FunctionParameter\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ModifierList:
        return "\"ModifierList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::FunctionDecl:
        return "\"FunctionDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::InitializerDecl:
        return "\"InitializerDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DeinitializerDecl:
        return "\"DeinitializerDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SubscriptDecl:
        return "\"SubscriptDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AccessLevelModifier:
        return "\"AccessLevelModifier\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AccessPathComponent:
        return "\"AccessPathComponent\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AccessPath:
        return "\"AccessPath\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ImportDecl:
        return "\"ImportDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AccessorParameter:
        return "\"AccessorParameter\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AccessorDecl:
        return "\"AccessorDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AccessorList:
        return "\"AccessorList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AccessorBlock:
        return "\"AccessorBlock\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PatternBinding:
        return "\"PatternBinding\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PatternBindingList:
        return "\"PatternBindingList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::VariableDecl:
        return "\"VariableDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::EnumCaseElement:
        return "\"EnumCaseElement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::EnumCaseElementList:
        return "\"EnumCaseElementList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::EnumCaseDecl:
        return "\"EnumCaseDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::EnumDecl:
        return "\"EnumDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::OperatorDecl:
        return "\"OperatorDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::IdentifierList:
        return "\"IdentifierList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::OperatorPrecedenceAndTypes:
        return "\"OperatorPrecedenceAndTypes\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PrecedenceGroupDecl:
        return "\"PrecedenceGroupDecl\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PrecedenceGroupAttributeList:
        return "\"PrecedenceGroupAttributeList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PrecedenceGroupRelation:
        return "\"PrecedenceGroupRelation\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PrecedenceGroupNameList:
        return "\"PrecedenceGroupNameList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PrecedenceGroupNameElement:
        return "\"PrecedenceGroupNameElement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PrecedenceGroupAssignment:
        return "\"PrecedenceGroupAssignment\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PrecedenceGroupAssociativity:
        return "\"PrecedenceGroupAssociativity\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TokenList:
        return "\"TokenList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::NonEmptyTokenList:
        return "\"NonEmptyTokenList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CustomAttribute:
        return "\"CustomAttribute\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::Attribute:
        return "\"Attribute\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AttributeList:
        return "\"AttributeList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SpecializeAttributeSpecList:
        return "\"SpecializeAttributeSpecList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::LabeledSpecializeEntry:
        return "\"LabeledSpecializeEntry\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::NamedAttributeStringArgument:
        return "\"NamedAttributeStringArgument\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DeclName:
        return "\"DeclName\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ImplementsAttributeArguments:
        return "\"ImplementsAttributeArguments\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ObjCSelectorPiece:
        return "\"ObjCSelectorPiece\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ObjCSelector:
        return "\"ObjCSelector\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ContinueStmt:
        return "\"ContinueStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::WhileStmt:
        return "\"WhileStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DeferStmt:
        return "\"DeferStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ExpressionStmt:
        return "\"ExpressionStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SwitchCaseList:
        return "\"SwitchCaseList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::RepeatWhileStmt:
        return "\"RepeatWhileStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::GuardStmt:
        return "\"GuardStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::WhereClause:
        return "\"WhereClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ForInStmt:
        return "\"ForInStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SwitchStmt:
        return "\"SwitchStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CatchClauseList:
        return "\"CatchClauseList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DoStmt:
        return "\"DoStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ReturnStmt:
        return "\"ReturnStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::YieldStmt:
        return "\"YieldStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::YieldList:
        return "\"YieldList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::FallthroughStmt:
        return "\"FallthroughStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::BreakStmt:
        return "\"BreakStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CaseItemList:
        return "\"CaseItemList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ConditionElement:
        return "\"ConditionElement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AvailabilityCondition:
        return "\"AvailabilityCondition\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::MatchingPatternCondition:
        return "\"MatchingPatternCondition\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::OptionalBindingCondition:
        return "\"OptionalBindingCondition\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ConditionElementList:
        return "\"ConditionElementList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DeclarationStmt:
        return "\"DeclarationStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ThrowStmt:
        return "\"ThrowStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::IfStmt:
        return "\"IfStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ElseIfContinuation:
        return "\"ElseIfContinuation\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ElseBlock:
        return "\"ElseBlock\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SwitchCase:
        return "\"SwitchCase\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SwitchDefaultLabel:
        return "\"SwitchDefaultLabel\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CaseItem:
        return "\"CaseItem\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SwitchCaseLabel:
        return "\"SwitchCaseLabel\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CatchClause:
        return "\"CatchClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::PoundAssertStmt:
        return "\"PoundAssertStmt\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::GenericWhereClause:
        return "\"GenericWhereClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::GenericRequirementList:
        return "\"GenericRequirementList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SameTypeRequirement:
        return "\"SameTypeRequirement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::GenericParameterList:
        return "\"GenericParameterList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::GenericParameter:
        return "\"GenericParameter\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::GenericParameterClause:
        return "\"GenericParameterClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ConformanceRequirement:
        return "\"ConformanceRequirement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SimpleTypeIdentifier:
        return "\"SimpleTypeIdentifier\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::MemberTypeIdentifier:
        return "\"MemberTypeIdentifier\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ClassRestrictionType:
        return "\"ClassRestrictionType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ArrayType:
        return "\"ArrayType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::DictionaryType:
        return "\"DictionaryType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::MetatypeType:
        return "\"MetatypeType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::OptionalType:
        return "\"OptionalType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::SomeType:
        return "\"SomeType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ImplicitlyUnwrappedOptionalType:
        return "\"ImplicitlyUnwrappedOptionalType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CompositionTypeElement:
        return "\"CompositionTypeElement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CompositionTypeElementList:
        return "\"CompositionTypeElementList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::CompositionType:
        return "\"CompositionType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TupleTypeElement:
        return "\"TupleTypeElement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TupleTypeElementList:
        return "\"TupleTypeElementList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TupleType:
        return "\"TupleType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::FunctionType:
        return "\"FunctionType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AttributedType:
        return "\"AttributedType\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::GenericArgumentList:
        return "\"GenericArgumentList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::GenericArgument:
        return "\"GenericArgument\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::GenericArgumentClause:
        return "\"GenericArgumentClause\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TypeAnnotation:
        return "\"TypeAnnotation\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::EnumCasePattern:
        return "\"EnumCasePattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::IsTypePattern:
        return "\"IsTypePattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::OptionalPattern:
        return "\"OptionalPattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::IdentifierPattern:
        return "\"IdentifierPattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AsTypePattern:
        return "\"AsTypePattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TuplePattern:
        return "\"TuplePattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::WildcardPattern:
        return "\"WildcardPattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TuplePatternElement:
        return "\"TuplePatternElement\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ExpressionPattern:
        return "\"ExpressionPattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::TuplePatternElementList:
        return "\"TuplePatternElementList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::ValueBindingPattern:
        return "\"ValueBindingPattern\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AvailabilitySpecList:
        return "\"AvailabilitySpecList\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AvailabilityArgument:
        return "\"AvailabilityArgument\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AvailabilityLabeledArgument:
        return "\"AvailabilityLabeledArgument\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::AvailabilityVersionRestriction:
        return "\"AvailabilityVersionRestriction\"";
#line 122 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
      case syntax::SyntaxKind::VersionTuple:
        return "\"VersionTuple\"";
#line 125 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    }
    llvm_unreachable("unhandled kind");
  }

  static bool mustQuote(StringRef) {
    // The string is already quoted. This is more efficient since it does not
    // check for characters that need to be escaped
    return false;
  }
};

} // end namespace json
} // end namespace swift

namespace llvm {
namespace yaml {

/// Deserialization traits for SyntaxKind.
template <>
struct ScalarEnumerationTraits<swift::syntax::SyntaxKind> {
  static void enumeration(IO &in, swift::syntax::SyntaxKind &value) {
    in.enumCase(value, "Token", swift::syntax::SyntaxKind::Token);
    in.enumCase(value, "Unknown", swift::syntax::SyntaxKind::Unknown);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "Decl", swift::syntax::SyntaxKind::Decl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "Expr", swift::syntax::SyntaxKind::Expr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "Stmt", swift::syntax::SyntaxKind::Stmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "Type", swift::syntax::SyntaxKind::Type);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "Pattern", swift::syntax::SyntaxKind::Pattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "UnknownDecl", swift::syntax::SyntaxKind::UnknownDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "UnknownExpr", swift::syntax::SyntaxKind::UnknownExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "UnknownStmt", swift::syntax::SyntaxKind::UnknownStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "UnknownType", swift::syntax::SyntaxKind::UnknownType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "UnknownPattern", swift::syntax::SyntaxKind::UnknownPattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CodeBlockItem", swift::syntax::SyntaxKind::CodeBlockItem);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CodeBlockItemList", swift::syntax::SyntaxKind::CodeBlockItemList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CodeBlock", swift::syntax::SyntaxKind::CodeBlock);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "InOutExpr", swift::syntax::SyntaxKind::InOutExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PoundColumnExpr", swift::syntax::SyntaxKind::PoundColumnExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "FunctionCallArgumentList", swift::syntax::SyntaxKind::FunctionCallArgumentList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TupleElementList", swift::syntax::SyntaxKind::TupleElementList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ArrayElementList", swift::syntax::SyntaxKind::ArrayElementList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DictionaryElementList", swift::syntax::SyntaxKind::DictionaryElementList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "StringLiteralSegments", swift::syntax::SyntaxKind::StringLiteralSegments);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TryExpr", swift::syntax::SyntaxKind::TryExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DeclNameArgument", swift::syntax::SyntaxKind::DeclNameArgument);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DeclNameArgumentList", swift::syntax::SyntaxKind::DeclNameArgumentList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DeclNameArguments", swift::syntax::SyntaxKind::DeclNameArguments);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "IdentifierExpr", swift::syntax::SyntaxKind::IdentifierExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SuperRefExpr", swift::syntax::SyntaxKind::SuperRefExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "NilLiteralExpr", swift::syntax::SyntaxKind::NilLiteralExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DiscardAssignmentExpr", swift::syntax::SyntaxKind::DiscardAssignmentExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AssignmentExpr", swift::syntax::SyntaxKind::AssignmentExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SequenceExpr", swift::syntax::SyntaxKind::SequenceExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ExprList", swift::syntax::SyntaxKind::ExprList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PoundLineExpr", swift::syntax::SyntaxKind::PoundLineExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PoundFileExpr", swift::syntax::SyntaxKind::PoundFileExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PoundFunctionExpr", swift::syntax::SyntaxKind::PoundFunctionExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PoundDsohandleExpr", swift::syntax::SyntaxKind::PoundDsohandleExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SymbolicReferenceExpr", swift::syntax::SyntaxKind::SymbolicReferenceExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PrefixOperatorExpr", swift::syntax::SyntaxKind::PrefixOperatorExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "BinaryOperatorExpr", swift::syntax::SyntaxKind::BinaryOperatorExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ArrowExpr", swift::syntax::SyntaxKind::ArrowExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "FloatLiteralExpr", swift::syntax::SyntaxKind::FloatLiteralExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TupleExpr", swift::syntax::SyntaxKind::TupleExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ArrayExpr", swift::syntax::SyntaxKind::ArrayExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DictionaryExpr", swift::syntax::SyntaxKind::DictionaryExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "FunctionCallArgument", swift::syntax::SyntaxKind::FunctionCallArgument);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TupleElement", swift::syntax::SyntaxKind::TupleElement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ArrayElement", swift::syntax::SyntaxKind::ArrayElement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DictionaryElement", swift::syntax::SyntaxKind::DictionaryElement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "IntegerLiteralExpr", swift::syntax::SyntaxKind::IntegerLiteralExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "BooleanLiteralExpr", swift::syntax::SyntaxKind::BooleanLiteralExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TernaryExpr", swift::syntax::SyntaxKind::TernaryExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "MemberAccessExpr", swift::syntax::SyntaxKind::MemberAccessExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "IsExpr", swift::syntax::SyntaxKind::IsExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AsExpr", swift::syntax::SyntaxKind::AsExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TypeExpr", swift::syntax::SyntaxKind::TypeExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ClosureCaptureItem", swift::syntax::SyntaxKind::ClosureCaptureItem);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ClosureCaptureItemList", swift::syntax::SyntaxKind::ClosureCaptureItemList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ClosureCaptureSignature", swift::syntax::SyntaxKind::ClosureCaptureSignature);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ClosureParam", swift::syntax::SyntaxKind::ClosureParam);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ClosureParamList", swift::syntax::SyntaxKind::ClosureParamList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ClosureSignature", swift::syntax::SyntaxKind::ClosureSignature);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ClosureExpr", swift::syntax::SyntaxKind::ClosureExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "UnresolvedPatternExpr", swift::syntax::SyntaxKind::UnresolvedPatternExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "FunctionCallExpr", swift::syntax::SyntaxKind::FunctionCallExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SubscriptExpr", swift::syntax::SyntaxKind::SubscriptExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "OptionalChainingExpr", swift::syntax::SyntaxKind::OptionalChainingExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ForcedValueExpr", swift::syntax::SyntaxKind::ForcedValueExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PostfixUnaryExpr", swift::syntax::SyntaxKind::PostfixUnaryExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SpecializeExpr", swift::syntax::SyntaxKind::SpecializeExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "StringSegment", swift::syntax::SyntaxKind::StringSegment);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ExpressionSegment", swift::syntax::SyntaxKind::ExpressionSegment);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "StringLiteralExpr", swift::syntax::SyntaxKind::StringLiteralExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "KeyPathExpr", swift::syntax::SyntaxKind::KeyPathExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "KeyPathBaseExpr", swift::syntax::SyntaxKind::KeyPathBaseExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ObjcNamePiece", swift::syntax::SyntaxKind::ObjcNamePiece);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ObjcName", swift::syntax::SyntaxKind::ObjcName);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ObjcKeyPathExpr", swift::syntax::SyntaxKind::ObjcKeyPathExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ObjcSelectorExpr", swift::syntax::SyntaxKind::ObjcSelectorExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "EditorPlaceholderExpr", swift::syntax::SyntaxKind::EditorPlaceholderExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ObjectLiteralExpr", swift::syntax::SyntaxKind::ObjectLiteralExpr);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TypeInitializerClause", swift::syntax::SyntaxKind::TypeInitializerClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TypealiasDecl", swift::syntax::SyntaxKind::TypealiasDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AssociatedtypeDecl", swift::syntax::SyntaxKind::AssociatedtypeDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "FunctionParameterList", swift::syntax::SyntaxKind::FunctionParameterList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ParameterClause", swift::syntax::SyntaxKind::ParameterClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ReturnClause", swift::syntax::SyntaxKind::ReturnClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "FunctionSignature", swift::syntax::SyntaxKind::FunctionSignature);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "IfConfigClause", swift::syntax::SyntaxKind::IfConfigClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "IfConfigClauseList", swift::syntax::SyntaxKind::IfConfigClauseList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "IfConfigDecl", swift::syntax::SyntaxKind::IfConfigDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PoundErrorDecl", swift::syntax::SyntaxKind::PoundErrorDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PoundWarningDecl", swift::syntax::SyntaxKind::PoundWarningDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PoundSourceLocation", swift::syntax::SyntaxKind::PoundSourceLocation);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PoundSourceLocationArgs", swift::syntax::SyntaxKind::PoundSourceLocationArgs);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DeclModifier", swift::syntax::SyntaxKind::DeclModifier);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "InheritedType", swift::syntax::SyntaxKind::InheritedType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "InheritedTypeList", swift::syntax::SyntaxKind::InheritedTypeList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TypeInheritanceClause", swift::syntax::SyntaxKind::TypeInheritanceClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ClassDecl", swift::syntax::SyntaxKind::ClassDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "StructDecl", swift::syntax::SyntaxKind::StructDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ProtocolDecl", swift::syntax::SyntaxKind::ProtocolDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ExtensionDecl", swift::syntax::SyntaxKind::ExtensionDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "MemberDeclBlock", swift::syntax::SyntaxKind::MemberDeclBlock);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "MemberDeclList", swift::syntax::SyntaxKind::MemberDeclList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "MemberDeclListItem", swift::syntax::SyntaxKind::MemberDeclListItem);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SourceFile", swift::syntax::SyntaxKind::SourceFile);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "InitializerClause", swift::syntax::SyntaxKind::InitializerClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "FunctionParameter", swift::syntax::SyntaxKind::FunctionParameter);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ModifierList", swift::syntax::SyntaxKind::ModifierList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "FunctionDecl", swift::syntax::SyntaxKind::FunctionDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "InitializerDecl", swift::syntax::SyntaxKind::InitializerDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DeinitializerDecl", swift::syntax::SyntaxKind::DeinitializerDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SubscriptDecl", swift::syntax::SyntaxKind::SubscriptDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AccessLevelModifier", swift::syntax::SyntaxKind::AccessLevelModifier);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AccessPathComponent", swift::syntax::SyntaxKind::AccessPathComponent);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AccessPath", swift::syntax::SyntaxKind::AccessPath);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ImportDecl", swift::syntax::SyntaxKind::ImportDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AccessorParameter", swift::syntax::SyntaxKind::AccessorParameter);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AccessorDecl", swift::syntax::SyntaxKind::AccessorDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AccessorList", swift::syntax::SyntaxKind::AccessorList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AccessorBlock", swift::syntax::SyntaxKind::AccessorBlock);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PatternBinding", swift::syntax::SyntaxKind::PatternBinding);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PatternBindingList", swift::syntax::SyntaxKind::PatternBindingList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "VariableDecl", swift::syntax::SyntaxKind::VariableDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "EnumCaseElement", swift::syntax::SyntaxKind::EnumCaseElement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "EnumCaseElementList", swift::syntax::SyntaxKind::EnumCaseElementList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "EnumCaseDecl", swift::syntax::SyntaxKind::EnumCaseDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "EnumDecl", swift::syntax::SyntaxKind::EnumDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "OperatorDecl", swift::syntax::SyntaxKind::OperatorDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "IdentifierList", swift::syntax::SyntaxKind::IdentifierList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "OperatorPrecedenceAndTypes", swift::syntax::SyntaxKind::OperatorPrecedenceAndTypes);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PrecedenceGroupDecl", swift::syntax::SyntaxKind::PrecedenceGroupDecl);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PrecedenceGroupAttributeList", swift::syntax::SyntaxKind::PrecedenceGroupAttributeList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PrecedenceGroupRelation", swift::syntax::SyntaxKind::PrecedenceGroupRelation);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PrecedenceGroupNameList", swift::syntax::SyntaxKind::PrecedenceGroupNameList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PrecedenceGroupNameElement", swift::syntax::SyntaxKind::PrecedenceGroupNameElement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PrecedenceGroupAssignment", swift::syntax::SyntaxKind::PrecedenceGroupAssignment);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PrecedenceGroupAssociativity", swift::syntax::SyntaxKind::PrecedenceGroupAssociativity);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TokenList", swift::syntax::SyntaxKind::TokenList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "NonEmptyTokenList", swift::syntax::SyntaxKind::NonEmptyTokenList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CustomAttribute", swift::syntax::SyntaxKind::CustomAttribute);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "Attribute", swift::syntax::SyntaxKind::Attribute);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AttributeList", swift::syntax::SyntaxKind::AttributeList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SpecializeAttributeSpecList", swift::syntax::SyntaxKind::SpecializeAttributeSpecList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "LabeledSpecializeEntry", swift::syntax::SyntaxKind::LabeledSpecializeEntry);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "NamedAttributeStringArgument", swift::syntax::SyntaxKind::NamedAttributeStringArgument);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DeclName", swift::syntax::SyntaxKind::DeclName);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ImplementsAttributeArguments", swift::syntax::SyntaxKind::ImplementsAttributeArguments);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ObjCSelectorPiece", swift::syntax::SyntaxKind::ObjCSelectorPiece);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ObjCSelector", swift::syntax::SyntaxKind::ObjCSelector);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ContinueStmt", swift::syntax::SyntaxKind::ContinueStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "WhileStmt", swift::syntax::SyntaxKind::WhileStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DeferStmt", swift::syntax::SyntaxKind::DeferStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ExpressionStmt", swift::syntax::SyntaxKind::ExpressionStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SwitchCaseList", swift::syntax::SyntaxKind::SwitchCaseList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "RepeatWhileStmt", swift::syntax::SyntaxKind::RepeatWhileStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "GuardStmt", swift::syntax::SyntaxKind::GuardStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "WhereClause", swift::syntax::SyntaxKind::WhereClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ForInStmt", swift::syntax::SyntaxKind::ForInStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SwitchStmt", swift::syntax::SyntaxKind::SwitchStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CatchClauseList", swift::syntax::SyntaxKind::CatchClauseList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DoStmt", swift::syntax::SyntaxKind::DoStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ReturnStmt", swift::syntax::SyntaxKind::ReturnStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "YieldStmt", swift::syntax::SyntaxKind::YieldStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "YieldList", swift::syntax::SyntaxKind::YieldList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "FallthroughStmt", swift::syntax::SyntaxKind::FallthroughStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "BreakStmt", swift::syntax::SyntaxKind::BreakStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CaseItemList", swift::syntax::SyntaxKind::CaseItemList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ConditionElement", swift::syntax::SyntaxKind::ConditionElement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AvailabilityCondition", swift::syntax::SyntaxKind::AvailabilityCondition);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "MatchingPatternCondition", swift::syntax::SyntaxKind::MatchingPatternCondition);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "OptionalBindingCondition", swift::syntax::SyntaxKind::OptionalBindingCondition);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ConditionElementList", swift::syntax::SyntaxKind::ConditionElementList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DeclarationStmt", swift::syntax::SyntaxKind::DeclarationStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ThrowStmt", swift::syntax::SyntaxKind::ThrowStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "IfStmt", swift::syntax::SyntaxKind::IfStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ElseIfContinuation", swift::syntax::SyntaxKind::ElseIfContinuation);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ElseBlock", swift::syntax::SyntaxKind::ElseBlock);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SwitchCase", swift::syntax::SyntaxKind::SwitchCase);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SwitchDefaultLabel", swift::syntax::SyntaxKind::SwitchDefaultLabel);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CaseItem", swift::syntax::SyntaxKind::CaseItem);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SwitchCaseLabel", swift::syntax::SyntaxKind::SwitchCaseLabel);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CatchClause", swift::syntax::SyntaxKind::CatchClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "PoundAssertStmt", swift::syntax::SyntaxKind::PoundAssertStmt);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "GenericWhereClause", swift::syntax::SyntaxKind::GenericWhereClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "GenericRequirementList", swift::syntax::SyntaxKind::GenericRequirementList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SameTypeRequirement", swift::syntax::SyntaxKind::SameTypeRequirement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "GenericParameterList", swift::syntax::SyntaxKind::GenericParameterList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "GenericParameter", swift::syntax::SyntaxKind::GenericParameter);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "GenericParameterClause", swift::syntax::SyntaxKind::GenericParameterClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ConformanceRequirement", swift::syntax::SyntaxKind::ConformanceRequirement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SimpleTypeIdentifier", swift::syntax::SyntaxKind::SimpleTypeIdentifier);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "MemberTypeIdentifier", swift::syntax::SyntaxKind::MemberTypeIdentifier);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ClassRestrictionType", swift::syntax::SyntaxKind::ClassRestrictionType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ArrayType", swift::syntax::SyntaxKind::ArrayType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "DictionaryType", swift::syntax::SyntaxKind::DictionaryType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "MetatypeType", swift::syntax::SyntaxKind::MetatypeType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "OptionalType", swift::syntax::SyntaxKind::OptionalType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "SomeType", swift::syntax::SyntaxKind::SomeType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ImplicitlyUnwrappedOptionalType", swift::syntax::SyntaxKind::ImplicitlyUnwrappedOptionalType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CompositionTypeElement", swift::syntax::SyntaxKind::CompositionTypeElement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CompositionTypeElementList", swift::syntax::SyntaxKind::CompositionTypeElementList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "CompositionType", swift::syntax::SyntaxKind::CompositionType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TupleTypeElement", swift::syntax::SyntaxKind::TupleTypeElement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TupleTypeElementList", swift::syntax::SyntaxKind::TupleTypeElementList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TupleType", swift::syntax::SyntaxKind::TupleType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "FunctionType", swift::syntax::SyntaxKind::FunctionType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AttributedType", swift::syntax::SyntaxKind::AttributedType);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "GenericArgumentList", swift::syntax::SyntaxKind::GenericArgumentList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "GenericArgument", swift::syntax::SyntaxKind::GenericArgument);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "GenericArgumentClause", swift::syntax::SyntaxKind::GenericArgumentClause);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TypeAnnotation", swift::syntax::SyntaxKind::TypeAnnotation);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "EnumCasePattern", swift::syntax::SyntaxKind::EnumCasePattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "IsTypePattern", swift::syntax::SyntaxKind::IsTypePattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "OptionalPattern", swift::syntax::SyntaxKind::OptionalPattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "IdentifierPattern", swift::syntax::SyntaxKind::IdentifierPattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AsTypePattern", swift::syntax::SyntaxKind::AsTypePattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TuplePattern", swift::syntax::SyntaxKind::TuplePattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "WildcardPattern", swift::syntax::SyntaxKind::WildcardPattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TuplePatternElement", swift::syntax::SyntaxKind::TuplePatternElement);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ExpressionPattern", swift::syntax::SyntaxKind::ExpressionPattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "TuplePatternElementList", swift::syntax::SyntaxKind::TuplePatternElementList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "ValueBindingPattern", swift::syntax::SyntaxKind::ValueBindingPattern);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AvailabilitySpecList", swift::syntax::SyntaxKind::AvailabilitySpecList);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AvailabilityArgument", swift::syntax::SyntaxKind::AvailabilityArgument);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AvailabilityLabeledArgument", swift::syntax::SyntaxKind::AvailabilityLabeledArgument);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "AvailabilityVersionRestriction", swift::syntax::SyntaxKind::AvailabilityVersionRestriction);
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
    in.enumCase(value, "VersionTuple", swift::syntax::SyntaxKind::VersionTuple);
#line 151 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxKind.h.gyb"
  }
};

} // end namespace yaml
} // end namespace llvm

namespace llvm {
  raw_ostream &operator<<(raw_ostream &OS, swift::syntax::SyntaxKind Kind);
} // end namespace llvm
#endif // SWIFT_SYNTAX_KIND_H
