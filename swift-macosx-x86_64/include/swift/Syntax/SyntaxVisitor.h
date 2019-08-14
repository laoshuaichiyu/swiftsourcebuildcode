#line 7 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
//// Automatically Generated From SyntaxVisitor.h.gyb.
//// Do Not Edit Directly!
//===---------------- SyntaxVisitor.h - SyntaxVisitor definitions ---------===//
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

#ifndef SWIFT_SYNTAX_VISITOR_H
#define SWIFT_SYNTAX_VISITOR_H

#include "swift/Syntax/Syntax.h"
#include "swift/Syntax/SyntaxCollection.h"
#include "swift/Syntax/TokenSyntax.h"
#include "swift/Syntax/UnknownSyntax.h"
#include "swift/Syntax/SyntaxNodes.h"

namespace swift {
namespace syntax {
struct SyntaxVisitor {
  virtual ~SyntaxVisitor() {}

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(UnknownDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(UnknownExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(UnknownStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(UnknownTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(UnknownPatternSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CodeBlockItemSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CodeBlockItemListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CodeBlockSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(InOutExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PoundColumnExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(FunctionCallArgumentListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TupleElementListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ArrayElementListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DictionaryElementListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(StringLiteralSegmentsSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TryExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DeclNameArgumentSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DeclNameArgumentListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DeclNameArgumentsSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(IdentifierExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SuperRefExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(NilLiteralExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DiscardAssignmentExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AssignmentExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SequenceExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ExprListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PoundLineExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PoundFileExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PoundFunctionExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PoundDsohandleExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SymbolicReferenceExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PrefixOperatorExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(BinaryOperatorExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ArrowExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(FloatLiteralExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TupleExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ArrayExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DictionaryExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(FunctionCallArgumentSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TupleElementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ArrayElementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DictionaryElementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(IntegerLiteralExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(BooleanLiteralExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TernaryExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(MemberAccessExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(IsExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AsExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TypeExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ClosureCaptureItemSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ClosureCaptureItemListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ClosureCaptureSignatureSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ClosureParamSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ClosureParamListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ClosureSignatureSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ClosureExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(UnresolvedPatternExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(FunctionCallExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SubscriptExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(OptionalChainingExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ForcedValueExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PostfixUnaryExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SpecializeExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(StringSegmentSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ExpressionSegmentSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(StringLiteralExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(KeyPathExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(KeyPathBaseExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ObjcNamePieceSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ObjcNameSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ObjcKeyPathExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ObjcSelectorExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(EditorPlaceholderExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ObjectLiteralExprSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TypeInitializerClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TypealiasDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AssociatedtypeDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(FunctionParameterListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ParameterClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ReturnClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(FunctionSignatureSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(IfConfigClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(IfConfigClauseListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(IfConfigDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PoundErrorDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PoundWarningDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PoundSourceLocationSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PoundSourceLocationArgsSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DeclModifierSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(InheritedTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(InheritedTypeListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TypeInheritanceClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ClassDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(StructDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ProtocolDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ExtensionDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(MemberDeclBlockSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(MemberDeclListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(MemberDeclListItemSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SourceFileSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(InitializerClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(FunctionParameterSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ModifierListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(FunctionDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(InitializerDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DeinitializerDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SubscriptDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AccessLevelModifierSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AccessPathComponentSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AccessPathSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ImportDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AccessorParameterSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AccessorDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AccessorListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AccessorBlockSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PatternBindingSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PatternBindingListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(VariableDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(EnumCaseElementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(EnumCaseElementListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(EnumCaseDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(EnumDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(OperatorDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(IdentifierListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(OperatorPrecedenceAndTypesSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PrecedenceGroupDeclSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PrecedenceGroupAttributeListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PrecedenceGroupRelationSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PrecedenceGroupNameListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PrecedenceGroupNameElementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PrecedenceGroupAssignmentSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PrecedenceGroupAssociativitySyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TokenListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(NonEmptyTokenListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CustomAttributeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AttributeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AttributeListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SpecializeAttributeSpecListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(LabeledSpecializeEntrySyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(NamedAttributeStringArgumentSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DeclNameSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ImplementsAttributeArgumentsSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ObjCSelectorPieceSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ObjCSelectorSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ContinueStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(WhileStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DeferStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ExpressionStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SwitchCaseListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(RepeatWhileStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(GuardStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(WhereClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ForInStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SwitchStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CatchClauseListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DoStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ReturnStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(YieldStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(YieldListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(FallthroughStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(BreakStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CaseItemListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ConditionElementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AvailabilityConditionSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(MatchingPatternConditionSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(OptionalBindingConditionSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ConditionElementListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DeclarationStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ThrowStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(IfStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ElseIfContinuationSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ElseBlockSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SwitchCaseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SwitchDefaultLabelSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CaseItemSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SwitchCaseLabelSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CatchClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(PoundAssertStmtSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(GenericWhereClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(GenericRequirementListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SameTypeRequirementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(GenericParameterListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(GenericParameterSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(GenericParameterClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ConformanceRequirementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SimpleTypeIdentifierSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(MemberTypeIdentifierSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ClassRestrictionTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ArrayTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(DictionaryTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(MetatypeTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(OptionalTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(SomeTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ImplicitlyUnwrappedOptionalTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CompositionTypeElementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CompositionTypeElementListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(CompositionTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TupleTypeElementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TupleTypeElementListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TupleTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(FunctionTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AttributedTypeSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(GenericArgumentListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(GenericArgumentSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(GenericArgumentClauseSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TypeAnnotationSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(EnumCasePatternSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(IsTypePatternSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(OptionalPatternSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(IdentifierPatternSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AsTypePatternSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TuplePatternSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(WildcardPatternSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TuplePatternElementSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ExpressionPatternSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(TuplePatternElementListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(ValueBindingPatternSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AvailabilitySpecListSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AvailabilityArgumentSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AvailabilityLabeledArgumentSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(AvailabilityVersionRestrictionSyntax node);
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"
  virtual void visit(VersionTupleSyntax node);
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxVisitor.h.gyb"

  virtual void visit(TokenSyntax token) {}

  virtual void visitPre(Syntax node) {}
  virtual void visitPost(Syntax node) {}
  virtual void visit(Syntax node);

  void visitChildren(Syntax node) {
    for (unsigned i = 0, e = node.getNumChildren(); i != e; ++i) {
      if (auto Child = node.getChild(i))
        visit(*Child);
    }
  }
};
}
}

#endif // SWIFT_SYNTAX_VISITOR_H
