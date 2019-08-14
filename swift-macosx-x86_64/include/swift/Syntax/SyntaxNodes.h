#line 7 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
//// Automatically Generated From SyntaxNodes.h.gyb.
//// Do Not Edit Directly!
//===---------------- SyntaxNodes.h - Syntax Node definitions -------------===//
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

#ifndef SWIFT_SYNTAX_NODES_H
#define SWIFT_SYNTAX_NODES_H

#include "swift/Syntax/Syntax.h"
#include "swift/Syntax/SyntaxCollection.h"
#include "swift/Syntax/TokenSyntax.h"
#include "swift/Syntax/UnknownSyntax.h"

namespace swift {
namespace syntax {

#line 34 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class StmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnknownDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnknownExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnknownStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnknownTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnknownPatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CodeBlockItemSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CodeBlockSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class InOutExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundColumnExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TryExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclNameArgumentSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclNameArgumentsSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IdentifierExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SuperRefExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class NilLiteralExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DiscardAssignmentExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AssignmentExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SequenceExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundLineExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundFileExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundFunctionExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundDsohandleExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SymbolicReferenceExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrefixOperatorExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class BinaryOperatorExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ArrowExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FloatLiteralExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TupleExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ArrayExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DictionaryExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionCallArgumentSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TupleElementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ArrayElementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DictionaryElementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IntegerLiteralExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class BooleanLiteralExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TernaryExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MemberAccessExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IsExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AsExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypeExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClosureCaptureItemSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClosureCaptureSignatureSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClosureParamSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClosureSignatureSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClosureExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnresolvedPatternExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionCallExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SubscriptExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OptionalChainingExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ForcedValueExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PostfixUnaryExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SpecializeExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class StringSegmentSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ExpressionSegmentSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class StringLiteralExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class KeyPathExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class KeyPathBaseExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ObjcNamePieceSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ObjcKeyPathExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ObjcSelectorExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class EditorPlaceholderExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ObjectLiteralExprSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypeInitializerClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypealiasDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AssociatedtypeDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ParameterClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ReturnClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionSignatureSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IfConfigClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IfConfigDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundErrorDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundWarningDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundSourceLocationSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundSourceLocationArgsSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclModifierSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class InheritedTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypeInheritanceClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClassDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class StructDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ProtocolDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ExtensionDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MemberDeclBlockSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MemberDeclListItemSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SourceFileSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class InitializerClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionParameterSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class InitializerDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeinitializerDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SubscriptDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AccessLevelModifierSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AccessPathComponentSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ImportDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AccessorParameterSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AccessorDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AccessorBlockSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PatternBindingSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class VariableDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class EnumCaseElementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class EnumCaseDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class EnumDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OperatorDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OperatorPrecedenceAndTypesSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrecedenceGroupDeclSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrecedenceGroupRelationSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrecedenceGroupNameElementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrecedenceGroupAssignmentSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrecedenceGroupAssociativitySyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CustomAttributeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AttributeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class LabeledSpecializeEntrySyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class NamedAttributeStringArgumentSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclNameSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ImplementsAttributeArgumentsSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ObjCSelectorPieceSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ContinueStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class WhileStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeferStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ExpressionStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class RepeatWhileStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GuardStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class WhereClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ForInStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SwitchStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DoStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ReturnStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class YieldStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class YieldListSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FallthroughStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class BreakStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ConditionElementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AvailabilityConditionSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MatchingPatternConditionSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OptionalBindingConditionSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclarationStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ThrowStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IfStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ElseIfContinuationSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ElseBlockSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SwitchCaseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SwitchDefaultLabelSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CaseItemSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SwitchCaseLabelSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CatchClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundAssertStmtSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GenericWhereClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SameTypeRequirementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GenericParameterSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GenericParameterClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ConformanceRequirementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SimpleTypeIdentifierSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MemberTypeIdentifierSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClassRestrictionTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ArrayTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DictionaryTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MetatypeTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OptionalTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SomeTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ImplicitlyUnwrappedOptionalTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CompositionTypeElementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CompositionTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TupleTypeElementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TupleTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AttributedTypeSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GenericArgumentSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GenericArgumentClauseSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypeAnnotationSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class EnumCasePatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IsTypePatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OptionalPatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IdentifierPatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AsTypePatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TuplePatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class WildcardPatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TuplePatternElementSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ExpressionPatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ValueBindingPatternSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AvailabilityArgumentSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AvailabilityLabeledArgumentSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AvailabilityVersionRestrictionSyntax;
#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class VersionTupleSyntax;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using CodeBlockItemListSyntax =
  SyntaxCollection<SyntaxKind::CodeBlockItemList,
                   CodeBlockItemSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using FunctionCallArgumentListSyntax =
  SyntaxCollection<SyntaxKind::FunctionCallArgumentList,
                   FunctionCallArgumentSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using TupleElementListSyntax =
  SyntaxCollection<SyntaxKind::TupleElementList,
                   TupleElementSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using ArrayElementListSyntax =
  SyntaxCollection<SyntaxKind::ArrayElementList,
                   ArrayElementSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using DictionaryElementListSyntax =
  SyntaxCollection<SyntaxKind::DictionaryElementList,
                   DictionaryElementSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using StringLiteralSegmentsSyntax =
  SyntaxCollection<SyntaxKind::StringLiteralSegments,
                   Syntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using DeclNameArgumentListSyntax =
  SyntaxCollection<SyntaxKind::DeclNameArgumentList,
                   DeclNameArgumentSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using ExprListSyntax =
  SyntaxCollection<SyntaxKind::ExprList,
                   ExprSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using ClosureCaptureItemListSyntax =
  SyntaxCollection<SyntaxKind::ClosureCaptureItemList,
                   ClosureCaptureItemSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using ClosureParamListSyntax =
  SyntaxCollection<SyntaxKind::ClosureParamList,
                   ClosureParamSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using ObjcNameSyntax =
  SyntaxCollection<SyntaxKind::ObjcName,
                   ObjcNamePieceSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using FunctionParameterListSyntax =
  SyntaxCollection<SyntaxKind::FunctionParameterList,
                   FunctionParameterSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using IfConfigClauseListSyntax =
  SyntaxCollection<SyntaxKind::IfConfigClauseList,
                   IfConfigClauseSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using InheritedTypeListSyntax =
  SyntaxCollection<SyntaxKind::InheritedTypeList,
                   InheritedTypeSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using MemberDeclListSyntax =
  SyntaxCollection<SyntaxKind::MemberDeclList,
                   MemberDeclListItemSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using ModifierListSyntax =
  SyntaxCollection<SyntaxKind::ModifierList,
                   DeclModifierSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using AccessPathSyntax =
  SyntaxCollection<SyntaxKind::AccessPath,
                   AccessPathComponentSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using AccessorListSyntax =
  SyntaxCollection<SyntaxKind::AccessorList,
                   AccessorDeclSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using PatternBindingListSyntax =
  SyntaxCollection<SyntaxKind::PatternBindingList,
                   PatternBindingSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using EnumCaseElementListSyntax =
  SyntaxCollection<SyntaxKind::EnumCaseElementList,
                   EnumCaseElementSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using IdentifierListSyntax =
  SyntaxCollection<SyntaxKind::IdentifierList,
                   TokenSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using PrecedenceGroupAttributeListSyntax =
  SyntaxCollection<SyntaxKind::PrecedenceGroupAttributeList,
                   Syntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using PrecedenceGroupNameListSyntax =
  SyntaxCollection<SyntaxKind::PrecedenceGroupNameList,
                   PrecedenceGroupNameElementSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using TokenListSyntax =
  SyntaxCollection<SyntaxKind::TokenList,
                   TokenSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using NonEmptyTokenListSyntax =
  SyntaxCollection<SyntaxKind::NonEmptyTokenList,
                   TokenSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using AttributeListSyntax =
  SyntaxCollection<SyntaxKind::AttributeList,
                   Syntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using SpecializeAttributeSpecListSyntax =
  SyntaxCollection<SyntaxKind::SpecializeAttributeSpecList,
                   Syntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using ObjCSelectorSyntax =
  SyntaxCollection<SyntaxKind::ObjCSelector,
                   ObjCSelectorPieceSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using SwitchCaseListSyntax =
  SyntaxCollection<SyntaxKind::SwitchCaseList,
                   Syntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using CatchClauseListSyntax =
  SyntaxCollection<SyntaxKind::CatchClauseList,
                   CatchClauseSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using CaseItemListSyntax =
  SyntaxCollection<SyntaxKind::CaseItemList,
                   CaseItemSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using ConditionElementListSyntax =
  SyntaxCollection<SyntaxKind::ConditionElementList,
                   ConditionElementSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using GenericRequirementListSyntax =
  SyntaxCollection<SyntaxKind::GenericRequirementList,
                   Syntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using GenericParameterListSyntax =
  SyntaxCollection<SyntaxKind::GenericParameterList,
                   GenericParameterSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using CompositionTypeElementListSyntax =
  SyntaxCollection<SyntaxKind::CompositionTypeElementList,
                   CompositionTypeElementSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using TupleTypeElementListSyntax =
  SyntaxCollection<SyntaxKind::TupleTypeElementList,
                   TupleTypeElementSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using GenericArgumentListSyntax =
  SyntaxCollection<SyntaxKind::GenericArgumentList,
                   GenericArgumentSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using TuplePatternElementListSyntax =
  SyntaxCollection<SyntaxKind::TuplePatternElementList,
                   TuplePatternElementSyntax>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
using AvailabilitySpecListSyntax =
  SyntaxCollection<SyntaxKind::AvailabilitySpecList,
                   AvailabilityArgumentSyntax>;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclSyntax  : public Syntax {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 115 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return isDeclKind(Kind);
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ExprSyntax  : public Syntax {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 115 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return isExprKind(Kind);
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class StmtSyntax  : public Syntax {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  StmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 115 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return isStmtKind(Kind);
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypeSyntax  : public Syntax {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 115 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return isTypeKind(Kind);
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PatternSyntax  : public Syntax {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 115 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return isPatternKind(Kind);
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnknownDeclSyntax final : public DeclSyntax {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  UnknownDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::UnknownDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnknownExprSyntax final : public ExprSyntax {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  UnknownExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::UnknownExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnknownStmtSyntax final : public StmtSyntax {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  UnknownStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::UnknownStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnknownTypeSyntax final : public TypeSyntax {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  UnknownTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::UnknownType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnknownPatternSyntax final : public PatternSyntax {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  UnknownPatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : PatternSyntax(Root, Data) {
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::UnknownPattern;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A CodeBlockItem is any Syntax node that appears on its own line inside
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// a CodeBlock.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CodeBlockItemSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class CodeBlockItemSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Item,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Semicolon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ErrorTokens,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  CodeBlockItemSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The underlying node inside the code block.
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getItem();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Item` replaced.
  /// - param newChild: The new `Item` to replace the node's
  ///                   current `Item`, if present.
  CodeBlockItemSyntax
  withItem(llvm::Optional<Syntax> NewSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// If present, the trailing semicolon at the end of the item.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getSemicolon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Semicolon` replaced.
  /// - param newChild: The new `Semicolon` to replace the node's
  ///                   current `Semicolon`, if present.
  CodeBlockItemSyntax
  withSemicolon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<Syntax> getErrorTokens();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ErrorTokens` replaced.
  /// - param newChild: The new `ErrorTokens` to replace the node's
  ///                   current `ErrorTokens`, if present.
  CodeBlockItemSyntax
  withErrorTokens(llvm::Optional<Syntax> NewSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::CodeBlockItem;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CodeBlockSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class CodeBlockSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftBrace,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Statements,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightBrace,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  CodeBlockSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftBrace` replaced.
  /// - param newChild: The new `LeftBrace` to replace the node's
  ///                   current `LeftBrace`, if present.
  CodeBlockSyntax
  withLeftBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockItemListSyntax getStatements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Statement` to the node's `Statements`
  /// collection.
  /// - param element: The new `Statement` to add to the node's
  ///                  `Statements` collection.
  /// - returns: A copy of the receiver with the provided `Statement`
  ///            appended to its `Statements` collection.
  CodeBlockSyntax addStatement(CodeBlockItemSyntax Statement);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Statements` replaced.
  /// - param newChild: The new `Statements` to replace the node's
  ///                   current `Statements`, if present.
  CodeBlockSyntax
  withStatements(llvm::Optional<CodeBlockItemListSyntax> NewCodeBlockItemListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightBrace` replaced.
  /// - param newChild: The new `RightBrace` to replace the node's
  ///                   current `RightBrace`, if present.
  CodeBlockSyntax
  withRightBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::CodeBlock;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class InOutExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class InOutExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Ampersand,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  InOutExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAmpersand();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Ampersand` replaced.
  /// - param newChild: The new `Ampersand` to replace the node's
  ///                   current `Ampersand`, if present.
  InOutExprSyntax
  withAmpersand(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  InOutExprSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::InOutExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundColumnExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PoundColumnExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundColumn,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PoundColumnExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundColumn();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundColumn` replaced.
  /// - param newChild: The new `PoundColumn` to replace the node's
  ///                   current `PoundColumn`, if present.
  PoundColumnExprSyntax
  withPoundColumn(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PoundColumnExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TryExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TryExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TryKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    QuestionOrExclamationMark,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TryExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getTryKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TryKeyword` replaced.
  /// - param newChild: The new `TryKeyword` to replace the node's
  ///                   current `TryKeyword`, if present.
  TryExprSyntax
  withTryKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getQuestionOrExclamationMark();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `QuestionOrExclamationMark` replaced.
  /// - param newChild: The new `QuestionOrExclamationMark` to replace the node's
  ///                   current `QuestionOrExclamationMark`, if present.
  TryExprSyntax
  withQuestionOrExclamationMark(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  TryExprSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TryExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclNameArgumentSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DeclNameArgumentSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DeclNameArgumentSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  DeclNameArgumentSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  DeclNameArgumentSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DeclNameArgument;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclNameArgumentsSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DeclNameArgumentsSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Arguments,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DeclNameArgumentsSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  DeclNameArgumentsSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  DeclNameArgumentListSyntax getArguments();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Argument` to the node's `Arguments`
  /// collection.
  /// - param element: The new `Argument` to add to the node's
  ///                  `Arguments` collection.
  /// - returns: A copy of the receiver with the provided `Argument`
  ///            appended to its `Arguments` collection.
  DeclNameArgumentsSyntax addArgument(DeclNameArgumentSyntax Argument);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Arguments` replaced.
  /// - param newChild: The new `Arguments` to replace the node's
  ///                   current `Arguments`, if present.
  DeclNameArgumentsSyntax
  withArguments(llvm::Optional<DeclNameArgumentListSyntax> NewDeclNameArgumentListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  DeclNameArgumentsSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DeclNameArguments;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IdentifierExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class IdentifierExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DeclNameArguments,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  IdentifierExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  IdentifierExprSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<DeclNameArgumentsSyntax> getDeclNameArguments();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DeclNameArguments` replaced.
  /// - param newChild: The new `DeclNameArguments` to replace the node's
  ///                   current `DeclNameArguments`, if present.
  IdentifierExprSyntax
  withDeclNameArguments(llvm::Optional<DeclNameArgumentsSyntax> NewDeclNameArgumentsSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::IdentifierExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SuperRefExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SuperRefExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    SuperKeyword,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SuperRefExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getSuperKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `SuperKeyword` replaced.
  /// - param newChild: The new `SuperKeyword` to replace the node's
  ///                   current `SuperKeyword`, if present.
  SuperRefExprSyntax
  withSuperKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SuperRefExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class NilLiteralExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class NilLiteralExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    NilKeyword,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  NilLiteralExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getNilKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `NilKeyword` replaced.
  /// - param newChild: The new `NilKeyword` to replace the node's
  ///                   current `NilKeyword`, if present.
  NilLiteralExprSyntax
  withNilKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::NilLiteralExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DiscardAssignmentExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DiscardAssignmentExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Wildcard,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DiscardAssignmentExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getWildcard();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Wildcard` replaced.
  /// - param newChild: The new `Wildcard` to replace the node's
  ///                   current `Wildcard`, if present.
  DiscardAssignmentExprSyntax
  withWildcard(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DiscardAssignmentExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AssignmentExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AssignmentExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AssignToken,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AssignmentExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAssignToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AssignToken` replaced.
  /// - param newChild: The new `AssignToken` to replace the node's
  ///                   current `AssignToken`, if present.
  AssignmentExprSyntax
  withAssignToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AssignmentExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SequenceExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SequenceExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Elements,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SequenceExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprListSyntax getElements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Element` to the node's `Elements`
  /// collection.
  /// - param element: The new `Element` to add to the node's
  ///                  `Elements` collection.
  /// - returns: A copy of the receiver with the provided `Element`
  ///            appended to its `Elements` collection.
  SequenceExprSyntax addElement(ExprSyntax Element);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Elements` replaced.
  /// - param newChild: The new `Elements` to replace the node's
  ///                   current `Elements`, if present.
  SequenceExprSyntax
  withElements(llvm::Optional<ExprListSyntax> NewExprListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SequenceExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundLineExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PoundLineExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundLine,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PoundLineExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundLine();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundLine` replaced.
  /// - param newChild: The new `PoundLine` to replace the node's
  ///                   current `PoundLine`, if present.
  PoundLineExprSyntax
  withPoundLine(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PoundLineExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundFileExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PoundFileExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundFile,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PoundFileExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundFile();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundFile` replaced.
  /// - param newChild: The new `PoundFile` to replace the node's
  ///                   current `PoundFile`, if present.
  PoundFileExprSyntax
  withPoundFile(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PoundFileExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundFunctionExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PoundFunctionExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundFunction,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PoundFunctionExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundFunction();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundFunction` replaced.
  /// - param newChild: The new `PoundFunction` to replace the node's
  ///                   current `PoundFunction`, if present.
  PoundFunctionExprSyntax
  withPoundFunction(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PoundFunctionExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundDsohandleExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PoundDsohandleExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundDsohandle,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PoundDsohandleExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundDsohandle();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundDsohandle` replaced.
  /// - param newChild: The new `PoundDsohandle` to replace the node's
  ///                   current `PoundDsohandle`, if present.
  PoundDsohandleExprSyntax
  withPoundDsohandle(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PoundDsohandleExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SymbolicReferenceExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SymbolicReferenceExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericArgumentClause,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SymbolicReferenceExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  SymbolicReferenceExprSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericArgumentClauseSyntax> getGenericArgumentClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericArgumentClause` replaced.
  /// - param newChild: The new `GenericArgumentClause` to replace the node's
  ///                   current `GenericArgumentClause`, if present.
  SymbolicReferenceExprSyntax
  withGenericArgumentClause(llvm::Optional<GenericArgumentClauseSyntax> NewGenericArgumentClauseSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SymbolicReferenceExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrefixOperatorExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PrefixOperatorExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    OperatorToken,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PostfixExpression,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PrefixOperatorExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getOperatorToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `OperatorToken` replaced.
  /// - param newChild: The new `OperatorToken` to replace the node's
  ///                   current `OperatorToken`, if present.
  PrefixOperatorExprSyntax
  withOperatorToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getPostfixExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PostfixExpression` replaced.
  /// - param newChild: The new `PostfixExpression` to replace the node's
  ///                   current `PostfixExpression`, if present.
  PrefixOperatorExprSyntax
  withPostfixExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PrefixOperatorExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class BinaryOperatorExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class BinaryOperatorExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    OperatorToken,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  BinaryOperatorExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getOperatorToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `OperatorToken` replaced.
  /// - param newChild: The new `OperatorToken` to replace the node's
  ///                   current `OperatorToken`, if present.
  BinaryOperatorExprSyntax
  withOperatorToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::BinaryOperatorExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ArrowExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ArrowExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ThrowsToken,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ArrowToken,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ArrowExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getThrowsToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ThrowsToken` replaced.
  /// - param newChild: The new `ThrowsToken` to replace the node's
  ///                   current `ThrowsToken`, if present.
  ArrowExprSyntax
  withThrowsToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getArrowToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ArrowToken` replaced.
  /// - param newChild: The new `ArrowToken` to replace the node's
  ///                   current `ArrowToken`, if present.
  ArrowExprSyntax
  withArrowToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ArrowExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FloatLiteralExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class FloatLiteralExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    FloatingDigits,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  FloatLiteralExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getFloatingDigits();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `FloatingDigits` replaced.
  /// - param newChild: The new `FloatingDigits` to replace the node's
  ///                   current `FloatingDigits`, if present.
  FloatLiteralExprSyntax
  withFloatingDigits(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::FloatLiteralExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TupleExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TupleExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ElementList,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TupleExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  TupleExprSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TupleElementListSyntax getElementList();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Element` to the node's `ElementList`
  /// collection.
  /// - param element: The new `Element` to add to the node's
  ///                  `ElementList` collection.
  /// - returns: A copy of the receiver with the provided `Element`
  ///            appended to its `ElementList` collection.
  TupleExprSyntax addElement(TupleElementSyntax Element);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ElementList` replaced.
  /// - param newChild: The new `ElementList` to replace the node's
  ///                   current `ElementList`, if present.
  TupleExprSyntax
  withElementList(llvm::Optional<TupleElementListSyntax> NewTupleElementListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  TupleExprSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TupleExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ArrayExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ArrayExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftSquare,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Elements,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightSquare,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ArrayExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftSquare();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftSquare` replaced.
  /// - param newChild: The new `LeftSquare` to replace the node's
  ///                   current `LeftSquare`, if present.
  ArrayExprSyntax
  withLeftSquare(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ArrayElementListSyntax getElements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Element` to the node's `Elements`
  /// collection.
  /// - param element: The new `Element` to add to the node's
  ///                  `Elements` collection.
  /// - returns: A copy of the receiver with the provided `Element`
  ///            appended to its `Elements` collection.
  ArrayExprSyntax addElement(ArrayElementSyntax Element);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Elements` replaced.
  /// - param newChild: The new `Elements` to replace the node's
  ///                   current `Elements`, if present.
  ArrayExprSyntax
  withElements(llvm::Optional<ArrayElementListSyntax> NewArrayElementListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightSquare();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightSquare` replaced.
  /// - param newChild: The new `RightSquare` to replace the node's
  ///                   current `RightSquare`, if present.
  ArrayExprSyntax
  withRightSquare(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ArrayExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DictionaryExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DictionaryExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftSquare,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Content,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightSquare,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DictionaryExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftSquare();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftSquare` replaced.
  /// - param newChild: The new `LeftSquare` to replace the node's
  ///                   current `LeftSquare`, if present.
  DictionaryExprSyntax
  withLeftSquare(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getContent();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Content` replaced.
  /// - param newChild: The new `Content` to replace the node's
  ///                   current `Content`, if present.
  DictionaryExprSyntax
  withContent(llvm::Optional<Syntax> NewSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightSquare();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightSquare` replaced.
  /// - param newChild: The new `RightSquare` to replace the node's
  ///                   current `RightSquare`, if present.
  DictionaryExprSyntax
  withRightSquare(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DictionaryExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionCallArgumentSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class FunctionCallArgumentSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Label,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  FunctionCallArgumentSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabel();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Label` replaced.
  /// - param newChild: The new `Label` to replace the node's
  ///                   current `Label`, if present.
  FunctionCallArgumentSyntax
  withLabel(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  FunctionCallArgumentSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  FunctionCallArgumentSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  FunctionCallArgumentSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::FunctionCallArgument;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TupleElementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TupleElementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Label,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TupleElementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabel();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Label` replaced.
  /// - param newChild: The new `Label` to replace the node's
  ///                   current `Label`, if present.
  TupleElementSyntax
  withLabel(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  TupleElementSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  TupleElementSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  TupleElementSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TupleElement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ArrayElementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ArrayElementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ArrayElementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  ArrayElementSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  ArrayElementSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ArrayElement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DictionaryElementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DictionaryElementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    KeyExpression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ValueExpression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DictionaryElementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getKeyExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `KeyExpression` replaced.
  /// - param newChild: The new `KeyExpression` to replace the node's
  ///                   current `KeyExpression`, if present.
  DictionaryElementSyntax
  withKeyExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  DictionaryElementSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getValueExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ValueExpression` replaced.
  /// - param newChild: The new `ValueExpression` to replace the node's
  ///                   current `ValueExpression`, if present.
  DictionaryElementSyntax
  withValueExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  DictionaryElementSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DictionaryElement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IntegerLiteralExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class IntegerLiteralExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Digits,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  IntegerLiteralExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getDigits();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Digits` replaced.
  /// - param newChild: The new `Digits` to replace the node's
  ///                   current `Digits`, if present.
  IntegerLiteralExprSyntax
  withDigits(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::IntegerLiteralExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class BooleanLiteralExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class BooleanLiteralExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    BooleanLiteral,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  BooleanLiteralExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getBooleanLiteral();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `BooleanLiteral` replaced.
  /// - param newChild: The new `BooleanLiteral` to replace the node's
  ///                   current `BooleanLiteral`, if present.
  BooleanLiteralExprSyntax
  withBooleanLiteral(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::BooleanLiteralExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TernaryExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TernaryExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ConditionExpression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    QuestionMark,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    FirstChoice,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ColonMark,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    SecondChoice,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TernaryExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getConditionExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ConditionExpression` replaced.
  /// - param newChild: The new `ConditionExpression` to replace the node's
  ///                   current `ConditionExpression`, if present.
  TernaryExprSyntax
  withConditionExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getQuestionMark();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `QuestionMark` replaced.
  /// - param newChild: The new `QuestionMark` to replace the node's
  ///                   current `QuestionMark`, if present.
  TernaryExprSyntax
  withQuestionMark(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getFirstChoice();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `FirstChoice` replaced.
  /// - param newChild: The new `FirstChoice` to replace the node's
  ///                   current `FirstChoice`, if present.
  TernaryExprSyntax
  withFirstChoice(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColonMark();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ColonMark` replaced.
  /// - param newChild: The new `ColonMark` to replace the node's
  ///                   current `ColonMark`, if present.
  TernaryExprSyntax
  withColonMark(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getSecondChoice();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `SecondChoice` replaced.
  /// - param newChild: The new `SecondChoice` to replace the node's
  ///                   current `SecondChoice`, if present.
  TernaryExprSyntax
  withSecondChoice(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TernaryExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MemberAccessExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class MemberAccessExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Base,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Dot,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DeclNameArguments,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  MemberAccessExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ExprSyntax> getBase();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Base` replaced.
  /// - param newChild: The new `Base` to replace the node's
  ///                   current `Base`, if present.
  MemberAccessExprSyntax
  withBase(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getDot();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Dot` replaced.
  /// - param newChild: The new `Dot` to replace the node's
  ///                   current `Dot`, if present.
  MemberAccessExprSyntax
  withDot(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  MemberAccessExprSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<DeclNameArgumentsSyntax> getDeclNameArguments();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DeclNameArguments` replaced.
  /// - param newChild: The new `DeclNameArguments` to replace the node's
  ///                   current `DeclNameArguments`, if present.
  MemberAccessExprSyntax
  withDeclNameArguments(llvm::Optional<DeclNameArgumentsSyntax> NewDeclNameArgumentsSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::MemberAccessExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IsExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class IsExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    IsTok,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TypeName,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  IsExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIsTok();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `IsTok` replaced.
  /// - param newChild: The new `IsTok` to replace the node's
  ///                   current `IsTok`, if present.
  IsExprSyntax
  withIsTok(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getTypeName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TypeName` replaced.
  /// - param newChild: The new `TypeName` to replace the node's
  ///                   current `TypeName`, if present.
  IsExprSyntax
  withTypeName(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::IsExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AsExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AsExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AsTok,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    QuestionOrExclamationMark,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TypeName,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AsExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAsTok();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AsTok` replaced.
  /// - param newChild: The new `AsTok` to replace the node's
  ///                   current `AsTok`, if present.
  AsExprSyntax
  withAsTok(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getQuestionOrExclamationMark();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `QuestionOrExclamationMark` replaced.
  /// - param newChild: The new `QuestionOrExclamationMark` to replace the node's
  ///                   current `QuestionOrExclamationMark`, if present.
  AsExprSyntax
  withQuestionOrExclamationMark(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getTypeName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TypeName` replaced.
  /// - param newChild: The new `TypeName` to replace the node's
  ///                   current `TypeName`, if present.
  AsExprSyntax
  withTypeName(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AsExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypeExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TypeExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Type,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TypeExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Type` replaced.
  /// - param newChild: The new `Type` to replace the node's
  ///                   current `Type`, if present.
  TypeExprSyntax
  withType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TypeExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClosureCaptureItemSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ClosureCaptureItemSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Specifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AssignToken,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ClosureCaptureItemSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenListSyntax> getSpecifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `SpecifierToken` to the node's `Specifier`
  /// collection.
  /// - param element: The new `SpecifierToken` to add to the node's
  ///                  `Specifier` collection.
  /// - returns: A copy of the receiver with the provided `SpecifierToken`
  ///            appended to its `Specifier` collection.
  ClosureCaptureItemSyntax addSpecifierToken(TokenSyntax SpecifierToken);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Specifier` replaced.
  /// - param newChild: The new `Specifier` to replace the node's
  ///                   current `Specifier`, if present.
  ClosureCaptureItemSyntax
  withSpecifier(llvm::Optional<TokenListSyntax> NewTokenListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  ClosureCaptureItemSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getAssignToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AssignToken` replaced.
  /// - param newChild: The new `AssignToken` to replace the node's
  ///                   current `AssignToken`, if present.
  ClosureCaptureItemSyntax
  withAssignToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  ClosureCaptureItemSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  ClosureCaptureItemSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ClosureCaptureItem;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClosureCaptureSignatureSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ClosureCaptureSignatureSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftSquare,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Items,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightSquare,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ClosureCaptureSignatureSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftSquare();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftSquare` replaced.
  /// - param newChild: The new `LeftSquare` to replace the node's
  ///                   current `LeftSquare`, if present.
  ClosureCaptureSignatureSyntax
  withLeftSquare(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ClosureCaptureItemListSyntax> getItems();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Item` to the node's `Items`
  /// collection.
  /// - param element: The new `Item` to add to the node's
  ///                  `Items` collection.
  /// - returns: A copy of the receiver with the provided `Item`
  ///            appended to its `Items` collection.
  ClosureCaptureSignatureSyntax addItem(ClosureCaptureItemSyntax Item);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Items` replaced.
  /// - param newChild: The new `Items` to replace the node's
  ///                   current `Items`, if present.
  ClosureCaptureSignatureSyntax
  withItems(llvm::Optional<ClosureCaptureItemListSyntax> NewClosureCaptureItemListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightSquare();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightSquare` replaced.
  /// - param newChild: The new `RightSquare` to replace the node's
  ///                   current `RightSquare`, if present.
  ClosureCaptureSignatureSyntax
  withRightSquare(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ClosureCaptureSignature;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClosureParamSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ClosureParamSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ClosureParamSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  ClosureParamSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  ClosureParamSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ClosureParam;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClosureSignatureSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ClosureSignatureSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Capture,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Input,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ThrowsTok,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Output,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InTok,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ClosureSignatureSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ClosureCaptureSignatureSyntax> getCapture();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Capture` replaced.
  /// - param newChild: The new `Capture` to replace the node's
  ///                   current `Capture`, if present.
  ClosureSignatureSyntax
  withCapture(llvm::Optional<ClosureCaptureSignatureSyntax> NewClosureCaptureSignatureSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<Syntax> getInput();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Input` replaced.
  /// - param newChild: The new `Input` to replace the node's
  ///                   current `Input`, if present.
  ClosureSignatureSyntax
  withInput(llvm::Optional<Syntax> NewSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getThrowsTok();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ThrowsTok` replaced.
  /// - param newChild: The new `ThrowsTok` to replace the node's
  ///                   current `ThrowsTok`, if present.
  ClosureSignatureSyntax
  withThrowsTok(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ReturnClauseSyntax> getOutput();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Output` replaced.
  /// - param newChild: The new `Output` to replace the node's
  ///                   current `Output`, if present.
  ClosureSignatureSyntax
  withOutput(llvm::Optional<ReturnClauseSyntax> NewReturnClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getInTok();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InTok` replaced.
  /// - param newChild: The new `InTok` to replace the node's
  ///                   current `InTok`, if present.
  ClosureSignatureSyntax
  withInTok(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ClosureSignature;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClosureExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ClosureExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftBrace,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Signature,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Statements,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightBrace,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ClosureExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftBrace` replaced.
  /// - param newChild: The new `LeftBrace` to replace the node's
  ///                   current `LeftBrace`, if present.
  ClosureExprSyntax
  withLeftBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ClosureSignatureSyntax> getSignature();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Signature` replaced.
  /// - param newChild: The new `Signature` to replace the node's
  ///                   current `Signature`, if present.
  ClosureExprSyntax
  withSignature(llvm::Optional<ClosureSignatureSyntax> NewClosureSignatureSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockItemListSyntax getStatements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Statement` to the node's `Statements`
  /// collection.
  /// - param element: The new `Statement` to add to the node's
  ///                  `Statements` collection.
  /// - returns: A copy of the receiver with the provided `Statement`
  ///            appended to its `Statements` collection.
  ClosureExprSyntax addStatement(CodeBlockItemSyntax Statement);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Statements` replaced.
  /// - param newChild: The new `Statements` to replace the node's
  ///                   current `Statements`, if present.
  ClosureExprSyntax
  withStatements(llvm::Optional<CodeBlockItemListSyntax> NewCodeBlockItemListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightBrace` replaced.
  /// - param newChild: The new `RightBrace` to replace the node's
  ///                   current `RightBrace`, if present.
  ClosureExprSyntax
  withRightBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ClosureExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class UnresolvedPatternExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class UnresolvedPatternExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Pattern,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  UnresolvedPatternExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternSyntax getPattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Pattern` replaced.
  /// - param newChild: The new `Pattern` to replace the node's
  ///                   current `Pattern`, if present.
  UnresolvedPatternExprSyntax
  withPattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::UnresolvedPatternExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionCallExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class FunctionCallExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CalledExpression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ArgumentList,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingClosure,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  FunctionCallExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getCalledExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CalledExpression` replaced.
  /// - param newChild: The new `CalledExpression` to replace the node's
  ///                   current `CalledExpression`, if present.
  FunctionCallExprSyntax
  withCalledExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  FunctionCallExprSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  FunctionCallArgumentListSyntax getArgumentList();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Argument` to the node's `ArgumentList`
  /// collection.
  /// - param element: The new `Argument` to add to the node's
  ///                  `ArgumentList` collection.
  /// - returns: A copy of the receiver with the provided `Argument`
  ///            appended to its `ArgumentList` collection.
  FunctionCallExprSyntax addArgument(FunctionCallArgumentSyntax Argument);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ArgumentList` replaced.
  /// - param newChild: The new `ArgumentList` to replace the node's
  ///                   current `ArgumentList`, if present.
  FunctionCallExprSyntax
  withArgumentList(llvm::Optional<FunctionCallArgumentListSyntax> NewFunctionCallArgumentListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  FunctionCallExprSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ClosureExprSyntax> getTrailingClosure();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingClosure` replaced.
  /// - param newChild: The new `TrailingClosure` to replace the node's
  ///                   current `TrailingClosure`, if present.
  FunctionCallExprSyntax
  withTrailingClosure(llvm::Optional<ClosureExprSyntax> NewClosureExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::FunctionCallExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SubscriptExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SubscriptExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CalledExpression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftBracket,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ArgumentList,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightBracket,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingClosure,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SubscriptExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getCalledExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CalledExpression` replaced.
  /// - param newChild: The new `CalledExpression` to replace the node's
  ///                   current `CalledExpression`, if present.
  SubscriptExprSyntax
  withCalledExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftBracket();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftBracket` replaced.
  /// - param newChild: The new `LeftBracket` to replace the node's
  ///                   current `LeftBracket`, if present.
  SubscriptExprSyntax
  withLeftBracket(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  FunctionCallArgumentListSyntax getArgumentList();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Argument` to the node's `ArgumentList`
  /// collection.
  /// - param element: The new `Argument` to add to the node's
  ///                  `ArgumentList` collection.
  /// - returns: A copy of the receiver with the provided `Argument`
  ///            appended to its `ArgumentList` collection.
  SubscriptExprSyntax addArgument(FunctionCallArgumentSyntax Argument);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ArgumentList` replaced.
  /// - param newChild: The new `ArgumentList` to replace the node's
  ///                   current `ArgumentList`, if present.
  SubscriptExprSyntax
  withArgumentList(llvm::Optional<FunctionCallArgumentListSyntax> NewFunctionCallArgumentListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightBracket();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightBracket` replaced.
  /// - param newChild: The new `RightBracket` to replace the node's
  ///                   current `RightBracket`, if present.
  SubscriptExprSyntax
  withRightBracket(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ClosureExprSyntax> getTrailingClosure();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingClosure` replaced.
  /// - param newChild: The new `TrailingClosure` to replace the node's
  ///                   current `TrailingClosure`, if present.
  SubscriptExprSyntax
  withTrailingClosure(llvm::Optional<ClosureExprSyntax> NewClosureExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SubscriptExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OptionalChainingExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class OptionalChainingExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    QuestionMark,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  OptionalChainingExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  OptionalChainingExprSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getQuestionMark();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `QuestionMark` replaced.
  /// - param newChild: The new `QuestionMark` to replace the node's
  ///                   current `QuestionMark`, if present.
  OptionalChainingExprSyntax
  withQuestionMark(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::OptionalChainingExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ForcedValueExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ForcedValueExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ExclamationMark,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ForcedValueExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  ForcedValueExprSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getExclamationMark();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ExclamationMark` replaced.
  /// - param newChild: The new `ExclamationMark` to replace the node's
  ///                   current `ExclamationMark`, if present.
  ForcedValueExprSyntax
  withExclamationMark(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ForcedValueExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PostfixUnaryExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PostfixUnaryExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    OperatorToken,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PostfixUnaryExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  PostfixUnaryExprSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getOperatorToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `OperatorToken` replaced.
  /// - param newChild: The new `OperatorToken` to replace the node's
  ///                   current `OperatorToken`, if present.
  PostfixUnaryExprSyntax
  withOperatorToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PostfixUnaryExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SpecializeExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SpecializeExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericArgumentClause,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SpecializeExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  SpecializeExprSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  GenericArgumentClauseSyntax getGenericArgumentClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericArgumentClause` replaced.
  /// - param newChild: The new `GenericArgumentClause` to replace the node's
  ///                   current `GenericArgumentClause`, if present.
  SpecializeExprSyntax
  withGenericArgumentClause(llvm::Optional<GenericArgumentClauseSyntax> NewGenericArgumentClauseSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SpecializeExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class StringSegmentSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class StringSegmentSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Content,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  StringSegmentSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getContent();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Content` replaced.
  /// - param newChild: The new `Content` to replace the node's
  ///                   current `Content`, if present.
  StringSegmentSyntax
  withContent(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::StringSegment;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ExpressionSegmentSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ExpressionSegmentSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Backslash,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Delimiter,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expressions,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ExpressionSegmentSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getBackslash();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Backslash` replaced.
  /// - param newChild: The new `Backslash` to replace the node's
  ///                   current `Backslash`, if present.
  ExpressionSegmentSyntax
  withBackslash(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getDelimiter();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Delimiter` replaced.
  /// - param newChild: The new `Delimiter` to replace the node's
  ///                   current `Delimiter`, if present.
  ExpressionSegmentSyntax
  withDelimiter(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  ExpressionSegmentSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  FunctionCallArgumentListSyntax getExpressions();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Expression` to the node's `Expressions`
  /// collection.
  /// - param element: The new `Expression` to add to the node's
  ///                  `Expressions` collection.
  /// - returns: A copy of the receiver with the provided `Expression`
  ///            appended to its `Expressions` collection.
  ExpressionSegmentSyntax addExpression(FunctionCallArgumentSyntax Expression);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expressions` replaced.
  /// - param newChild: The new `Expressions` to replace the node's
  ///                   current `Expressions`, if present.
  ExpressionSegmentSyntax
  withExpressions(llvm::Optional<FunctionCallArgumentListSyntax> NewFunctionCallArgumentListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  ExpressionSegmentSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ExpressionSegment;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class StringLiteralExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class StringLiteralExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    OpenDelimiter,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    OpenQuote,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Segments,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CloseQuote,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CloseDelimiter,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  StringLiteralExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getOpenDelimiter();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `OpenDelimiter` replaced.
  /// - param newChild: The new `OpenDelimiter` to replace the node's
  ///                   current `OpenDelimiter`, if present.
  StringLiteralExprSyntax
  withOpenDelimiter(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getOpenQuote();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `OpenQuote` replaced.
  /// - param newChild: The new `OpenQuote` to replace the node's
  ///                   current `OpenQuote`, if present.
  StringLiteralExprSyntax
  withOpenQuote(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  StringLiteralSegmentsSyntax getSegments();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Segment` to the node's `Segments`
  /// collection.
  /// - param element: The new `Segment` to add to the node's
  ///                  `Segments` collection.
  /// - returns: A copy of the receiver with the provided `Segment`
  ///            appended to its `Segments` collection.
  StringLiteralExprSyntax addSegment(Syntax Segment);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Segments` replaced.
  /// - param newChild: The new `Segments` to replace the node's
  ///                   current `Segments`, if present.
  StringLiteralExprSyntax
  withSegments(llvm::Optional<StringLiteralSegmentsSyntax> NewStringLiteralSegmentsSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getCloseQuote();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CloseQuote` replaced.
  /// - param newChild: The new `CloseQuote` to replace the node's
  ///                   current `CloseQuote`, if present.
  StringLiteralExprSyntax
  withCloseQuote(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getCloseDelimiter();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CloseDelimiter` replaced.
  /// - param newChild: The new `CloseDelimiter` to replace the node's
  ///                   current `CloseDelimiter`, if present.
  StringLiteralExprSyntax
  withCloseDelimiter(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::StringLiteralExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class KeyPathExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class KeyPathExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Backslash,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RootExpr,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  KeyPathExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getBackslash();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Backslash` replaced.
  /// - param newChild: The new `Backslash` to replace the node's
  ///                   current `Backslash`, if present.
  KeyPathExprSyntax
  withBackslash(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ExprSyntax> getRootExpr();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RootExpr` replaced.
  /// - param newChild: The new `RootExpr` to replace the node's
  ///                   current `RootExpr`, if present.
  KeyPathExprSyntax
  withRootExpr(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  KeyPathExprSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::KeyPathExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class KeyPathBaseExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class KeyPathBaseExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Period,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  KeyPathBaseExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPeriod();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Period` replaced.
  /// - param newChild: The new `Period` to replace the node's
  ///                   current `Period`, if present.
  KeyPathBaseExprSyntax
  withPeriod(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::KeyPathBaseExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ObjcNamePieceSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ObjcNamePieceSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Dot,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ObjcNamePieceSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  ObjcNamePieceSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getDot();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Dot` replaced.
  /// - param newChild: The new `Dot` to replace the node's
  ///                   current `Dot`, if present.
  ObjcNamePieceSyntax
  withDot(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ObjcNamePiece;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ObjcKeyPathExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ObjcKeyPathExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    KeyPath,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ObjcKeyPathExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getKeyPath();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `KeyPath` replaced.
  /// - param newChild: The new `KeyPath` to replace the node's
  ///                   current `KeyPath`, if present.
  ObjcKeyPathExprSyntax
  withKeyPath(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  ObjcKeyPathExprSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ObjcNameSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `NamePiece` to the node's `Name`
  /// collection.
  /// - param element: The new `NamePiece` to add to the node's
  ///                  `Name` collection.
  /// - returns: A copy of the receiver with the provided `NamePiece`
  ///            appended to its `Name` collection.
  ObjcKeyPathExprSyntax addNamePiece(ObjcNamePieceSyntax NamePiece);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  ObjcKeyPathExprSyntax
  withName(llvm::Optional<ObjcNameSyntax> NewObjcNameSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  ObjcKeyPathExprSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ObjcKeyPathExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ObjcSelectorExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ObjcSelectorExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundSelector,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Kind,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ObjcSelectorExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundSelector();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundSelector` replaced.
  /// - param newChild: The new `PoundSelector` to replace the node's
  ///                   current `PoundSelector`, if present.
  ObjcSelectorExprSyntax
  withPoundSelector(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  ObjcSelectorExprSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getKind();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Kind` replaced.
  /// - param newChild: The new `Kind` to replace the node's
  ///                   current `Kind`, if present.
  ObjcSelectorExprSyntax
  withKind(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  ObjcSelectorExprSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  ObjcSelectorExprSyntax
  withName(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  ObjcSelectorExprSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ObjcSelectorExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class EditorPlaceholderExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class EditorPlaceholderExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  EditorPlaceholderExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  EditorPlaceholderExprSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::EditorPlaceholderExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ObjectLiteralExprSyntax final : public ExprSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ObjectLiteralExprSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Arguments,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ObjectLiteralExprSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : ExprSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  ObjectLiteralExprSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  ObjectLiteralExprSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  FunctionCallArgumentListSyntax getArguments();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Argument` to the node's `Arguments`
  /// collection.
  /// - param element: The new `Argument` to add to the node's
  ///                  `Arguments` collection.
  /// - returns: A copy of the receiver with the provided `Argument`
  ///            appended to its `Arguments` collection.
  ObjectLiteralExprSyntax addArgument(FunctionCallArgumentSyntax Argument);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Arguments` replaced.
  /// - param newChild: The new `Arguments` to replace the node's
  ///                   current `Arguments`, if present.
  ObjectLiteralExprSyntax
  withArguments(llvm::Optional<FunctionCallArgumentListSyntax> NewFunctionCallArgumentListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  ObjectLiteralExprSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ObjectLiteralExpr;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypeInitializerClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TypeInitializerClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Equal,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Value,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TypeInitializerClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getEqual();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Equal` replaced.
  /// - param newChild: The new `Equal` to replace the node's
  ///                   current `Equal`, if present.
  TypeInitializerClauseSyntax
  withEqual(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getValue();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Value` replaced.
  /// - param newChild: The new `Value` to replace the node's
  ///                   current `Value`, if present.
  TypeInitializerClauseSyntax
  withValue(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TypeInitializerClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypealiasDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TypealiasDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TypealiasKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericParameterClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Initializer,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericWhereClause,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TypealiasDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  TypealiasDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  TypealiasDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  TypealiasDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  TypealiasDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getTypealiasKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TypealiasKeyword` replaced.
  /// - param newChild: The new `TypealiasKeyword` to replace the node's
  ///                   current `TypealiasKeyword`, if present.
  TypealiasDeclSyntax
  withTypealiasKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  TypealiasDeclSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericParameterClauseSyntax> getGenericParameterClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericParameterClause` replaced.
  /// - param newChild: The new `GenericParameterClause` to replace the node's
  ///                   current `GenericParameterClause`, if present.
  TypealiasDeclSyntax
  withGenericParameterClause(llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeInitializerClauseSyntax> getInitializer();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Initializer` replaced.
  /// - param newChild: The new `Initializer` to replace the node's
  ///                   current `Initializer`, if present.
  TypealiasDeclSyntax
  withInitializer(llvm::Optional<TypeInitializerClauseSyntax> NewTypeInitializerClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericWhereClauseSyntax> getGenericWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericWhereClause` replaced.
  /// - param newChild: The new `GenericWhereClause` to replace the node's
  ///                   current `GenericWhereClause`, if present.
  TypealiasDeclSyntax
  withGenericWhereClause(llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TypealiasDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AssociatedtypeDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AssociatedtypeDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AssociatedtypeKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InheritanceClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Initializer,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericWhereClause,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AssociatedtypeDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  AssociatedtypeDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  AssociatedtypeDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  AssociatedtypeDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  AssociatedtypeDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAssociatedtypeKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AssociatedtypeKeyword` replaced.
  /// - param newChild: The new `AssociatedtypeKeyword` to replace the node's
  ///                   current `AssociatedtypeKeyword`, if present.
  AssociatedtypeDeclSyntax
  withAssociatedtypeKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  AssociatedtypeDeclSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeInheritanceClauseSyntax> getInheritanceClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InheritanceClause` replaced.
  /// - param newChild: The new `InheritanceClause` to replace the node's
  ///                   current `InheritanceClause`, if present.
  AssociatedtypeDeclSyntax
  withInheritanceClause(llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeInitializerClauseSyntax> getInitializer();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Initializer` replaced.
  /// - param newChild: The new `Initializer` to replace the node's
  ///                   current `Initializer`, if present.
  AssociatedtypeDeclSyntax
  withInitializer(llvm::Optional<TypeInitializerClauseSyntax> NewTypeInitializerClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericWhereClauseSyntax> getGenericWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericWhereClause` replaced.
  /// - param newChild: The new `GenericWhereClause` to replace the node's
  ///                   current `GenericWhereClause`, if present.
  AssociatedtypeDeclSyntax
  withGenericWhereClause(llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AssociatedtypeDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ParameterClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ParameterClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ParameterList,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ParameterClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  ParameterClauseSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  FunctionParameterListSyntax getParameterList();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Parameter` to the node's `ParameterList`
  /// collection.
  /// - param element: The new `Parameter` to add to the node's
  ///                  `ParameterList` collection.
  /// - returns: A copy of the receiver with the provided `Parameter`
  ///            appended to its `ParameterList` collection.
  ParameterClauseSyntax addParameter(FunctionParameterSyntax Parameter);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ParameterList` replaced.
  /// - param newChild: The new `ParameterList` to replace the node's
  ///                   current `ParameterList`, if present.
  ParameterClauseSyntax
  withParameterList(llvm::Optional<FunctionParameterListSyntax> NewFunctionParameterListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  ParameterClauseSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ParameterClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ReturnClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ReturnClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Arrow,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ReturnType,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ReturnClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getArrow();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Arrow` replaced.
  /// - param newChild: The new `Arrow` to replace the node's
  ///                   current `Arrow`, if present.
  ReturnClauseSyntax
  withArrow(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getReturnType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ReturnType` replaced.
  /// - param newChild: The new `ReturnType` to replace the node's
  ///                   current `ReturnType`, if present.
  ReturnClauseSyntax
  withReturnType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ReturnClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionSignatureSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class FunctionSignatureSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Input,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ThrowsOrRethrowsKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Output,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  FunctionSignatureSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ParameterClauseSyntax getInput();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Input` replaced.
  /// - param newChild: The new `Input` to replace the node's
  ///                   current `Input`, if present.
  FunctionSignatureSyntax
  withInput(llvm::Optional<ParameterClauseSyntax> NewParameterClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getThrowsOrRethrowsKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ThrowsOrRethrowsKeyword` replaced.
  /// - param newChild: The new `ThrowsOrRethrowsKeyword` to replace the node's
  ///                   current `ThrowsOrRethrowsKeyword`, if present.
  FunctionSignatureSyntax
  withThrowsOrRethrowsKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ReturnClauseSyntax> getOutput();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Output` replaced.
  /// - param newChild: The new `Output` to replace the node's
  ///                   current `Output`, if present.
  FunctionSignatureSyntax
  withOutput(llvm::Optional<ReturnClauseSyntax> NewReturnClauseSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::FunctionSignature;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IfConfigClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class IfConfigClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Condition,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Elements,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  IfConfigClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundKeyword` replaced.
  /// - param newChild: The new `PoundKeyword` to replace the node's
  ///                   current `PoundKeyword`, if present.
  IfConfigClauseSyntax
  withPoundKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ExprSyntax> getCondition();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Condition` replaced.
  /// - param newChild: The new `Condition` to replace the node's
  ///                   current `Condition`, if present.
  IfConfigClauseSyntax
  withCondition(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getElements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Elements` replaced.
  /// - param newChild: The new `Elements` to replace the node's
  ///                   current `Elements`, if present.
  IfConfigClauseSyntax
  withElements(llvm::Optional<Syntax> NewSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::IfConfigClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IfConfigDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class IfConfigDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Clauses,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundEndif,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  IfConfigDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  IfConfigClauseListSyntax getClauses();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Clause` to the node's `Clauses`
  /// collection.
  /// - param element: The new `Clause` to add to the node's
  ///                  `Clauses` collection.
  /// - returns: A copy of the receiver with the provided `Clause`
  ///            appended to its `Clauses` collection.
  IfConfigDeclSyntax addClause(IfConfigClauseSyntax Clause);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Clauses` replaced.
  /// - param newChild: The new `Clauses` to replace the node's
  ///                   current `Clauses`, if present.
  IfConfigDeclSyntax
  withClauses(llvm::Optional<IfConfigClauseListSyntax> NewIfConfigClauseListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundEndif();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundEndif` replaced.
  /// - param newChild: The new `PoundEndif` to replace the node's
  ///                   current `PoundEndif`, if present.
  IfConfigDeclSyntax
  withPoundEndif(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::IfConfigDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundErrorDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PoundErrorDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundError,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Message,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PoundErrorDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundError();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundError` replaced.
  /// - param newChild: The new `PoundError` to replace the node's
  ///                   current `PoundError`, if present.
  PoundErrorDeclSyntax
  withPoundError(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  PoundErrorDeclSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  StringLiteralExprSyntax getMessage();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Message` replaced.
  /// - param newChild: The new `Message` to replace the node's
  ///                   current `Message`, if present.
  PoundErrorDeclSyntax
  withMessage(llvm::Optional<StringLiteralExprSyntax> NewStringLiteralExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  PoundErrorDeclSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PoundErrorDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundWarningDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PoundWarningDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundWarning,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Message,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PoundWarningDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundWarning();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundWarning` replaced.
  /// - param newChild: The new `PoundWarning` to replace the node's
  ///                   current `PoundWarning`, if present.
  PoundWarningDeclSyntax
  withPoundWarning(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  PoundWarningDeclSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  StringLiteralExprSyntax getMessage();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Message` replaced.
  /// - param newChild: The new `Message` to replace the node's
  ///                   current `Message`, if present.
  PoundWarningDeclSyntax
  withMessage(llvm::Optional<StringLiteralExprSyntax> NewStringLiteralExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  PoundWarningDeclSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PoundWarningDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundSourceLocationSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PoundSourceLocationSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundSourceLocation,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Args,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PoundSourceLocationSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundSourceLocation();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundSourceLocation` replaced.
  /// - param newChild: The new `PoundSourceLocation` to replace the node's
  ///                   current `PoundSourceLocation`, if present.
  PoundSourceLocationSyntax
  withPoundSourceLocation(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  PoundSourceLocationSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<PoundSourceLocationArgsSyntax> getArgs();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Args` replaced.
  /// - param newChild: The new `Args` to replace the node's
  ///                   current `Args`, if present.
  PoundSourceLocationSyntax
  withArgs(llvm::Optional<PoundSourceLocationArgsSyntax> NewPoundSourceLocationArgsSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  PoundSourceLocationSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PoundSourceLocation;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundSourceLocationArgsSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PoundSourceLocationArgsSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    FileArgLabel,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    FileArgColon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    FileName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Comma,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LineArgLabel,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LineArgColon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LineNumber,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PoundSourceLocationArgsSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getFileArgLabel();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `FileArgLabel` replaced.
  /// - param newChild: The new `FileArgLabel` to replace the node's
  ///                   current `FileArgLabel`, if present.
  PoundSourceLocationArgsSyntax
  withFileArgLabel(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getFileArgColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `FileArgColon` replaced.
  /// - param newChild: The new `FileArgColon` to replace the node's
  ///                   current `FileArgColon`, if present.
  PoundSourceLocationArgsSyntax
  withFileArgColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getFileName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `FileName` replaced.
  /// - param newChild: The new `FileName` to replace the node's
  ///                   current `FileName`, if present.
  PoundSourceLocationArgsSyntax
  withFileName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Comma` replaced.
  /// - param newChild: The new `Comma` to replace the node's
  ///                   current `Comma`, if present.
  PoundSourceLocationArgsSyntax
  withComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLineArgLabel();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LineArgLabel` replaced.
  /// - param newChild: The new `LineArgLabel` to replace the node's
  ///                   current `LineArgLabel`, if present.
  PoundSourceLocationArgsSyntax
  withLineArgLabel(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLineArgColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LineArgColon` replaced.
  /// - param newChild: The new `LineArgColon` to replace the node's
  ///                   current `LineArgColon`, if present.
  PoundSourceLocationArgsSyntax
  withLineArgColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLineNumber();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LineNumber` replaced.
  /// - param newChild: The new `LineNumber` to replace the node's
  ///                   current `LineNumber`, if present.
  PoundSourceLocationArgsSyntax
  withLineNumber(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PoundSourceLocationArgs;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclModifierSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DeclModifierSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DetailLeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Detail,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DetailRightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DeclModifierSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  DeclModifierSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getDetailLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DetailLeftParen` replaced.
  /// - param newChild: The new `DetailLeftParen` to replace the node's
  ///                   current `DetailLeftParen`, if present.
  DeclModifierSyntax
  withDetailLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getDetail();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Detail` replaced.
  /// - param newChild: The new `Detail` to replace the node's
  ///                   current `Detail`, if present.
  DeclModifierSyntax
  withDetail(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getDetailRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DetailRightParen` replaced.
  /// - param newChild: The new `DetailRightParen` to replace the node's
  ///                   current `DetailRightParen`, if present.
  DeclModifierSyntax
  withDetailRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DeclModifier;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class InheritedTypeSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class InheritedTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TypeName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  InheritedTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getTypeName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TypeName` replaced.
  /// - param newChild: The new `TypeName` to replace the node's
  ///                   current `TypeName`, if present.
  InheritedTypeSyntax
  withTypeName(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  InheritedTypeSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::InheritedType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypeInheritanceClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TypeInheritanceClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InheritedTypeCollection,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TypeInheritanceClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  TypeInheritanceClauseSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  InheritedTypeListSyntax getInheritedTypeCollection();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `InheritedType` to the node's `InheritedTypeCollection`
  /// collection.
  /// - param element: The new `InheritedType` to add to the node's
  ///                  `InheritedTypeCollection` collection.
  /// - returns: A copy of the receiver with the provided `InheritedType`
  ///            appended to its `InheritedTypeCollection` collection.
  TypeInheritanceClauseSyntax addInheritedType(InheritedTypeSyntax InheritedType);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InheritedTypeCollection` replaced.
  /// - param newChild: The new `InheritedTypeCollection` to replace the node's
  ///                   current `InheritedTypeCollection`, if present.
  TypeInheritanceClauseSyntax
  withInheritedTypeCollection(llvm::Optional<InheritedTypeListSyntax> NewInheritedTypeListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TypeInheritanceClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClassDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ClassDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ClassKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericParameterClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InheritanceClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericWhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Members,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ClassDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  ClassDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  ClassDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  ClassDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  ClassDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getClassKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ClassKeyword` replaced.
  /// - param newChild: The new `ClassKeyword` to replace the node's
  ///                   current `ClassKeyword`, if present.
  ClassDeclSyntax
  withClassKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  ClassDeclSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericParameterClauseSyntax> getGenericParameterClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericParameterClause` replaced.
  /// - param newChild: The new `GenericParameterClause` to replace the node's
  ///                   current `GenericParameterClause`, if present.
  ClassDeclSyntax
  withGenericParameterClause(llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeInheritanceClauseSyntax> getInheritanceClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InheritanceClause` replaced.
  /// - param newChild: The new `InheritanceClause` to replace the node's
  ///                   current `InheritanceClause`, if present.
  ClassDeclSyntax
  withInheritanceClause(llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericWhereClauseSyntax> getGenericWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericWhereClause` replaced.
  /// - param newChild: The new `GenericWhereClause` to replace the node's
  ///                   current `GenericWhereClause`, if present.
  ClassDeclSyntax
  withGenericWhereClause(llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  MemberDeclBlockSyntax getMembers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Members` replaced.
  /// - param newChild: The new `Members` to replace the node's
  ///                   current `Members`, if present.
  ClassDeclSyntax
  withMembers(llvm::Optional<MemberDeclBlockSyntax> NewMemberDeclBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ClassDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class StructDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class StructDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    StructKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericParameterClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InheritanceClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericWhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Members,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  StructDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  StructDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  StructDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  StructDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  StructDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getStructKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `StructKeyword` replaced.
  /// - param newChild: The new `StructKeyword` to replace the node's
  ///                   current `StructKeyword`, if present.
  StructDeclSyntax
  withStructKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  StructDeclSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericParameterClauseSyntax> getGenericParameterClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericParameterClause` replaced.
  /// - param newChild: The new `GenericParameterClause` to replace the node's
  ///                   current `GenericParameterClause`, if present.
  StructDeclSyntax
  withGenericParameterClause(llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeInheritanceClauseSyntax> getInheritanceClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InheritanceClause` replaced.
  /// - param newChild: The new `InheritanceClause` to replace the node's
  ///                   current `InheritanceClause`, if present.
  StructDeclSyntax
  withInheritanceClause(llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericWhereClauseSyntax> getGenericWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericWhereClause` replaced.
  /// - param newChild: The new `GenericWhereClause` to replace the node's
  ///                   current `GenericWhereClause`, if present.
  StructDeclSyntax
  withGenericWhereClause(llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  MemberDeclBlockSyntax getMembers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Members` replaced.
  /// - param newChild: The new `Members` to replace the node's
  ///                   current `Members`, if present.
  StructDeclSyntax
  withMembers(llvm::Optional<MemberDeclBlockSyntax> NewMemberDeclBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::StructDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ProtocolDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ProtocolDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ProtocolKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InheritanceClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericWhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Members,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ProtocolDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  ProtocolDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  ProtocolDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  ProtocolDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  ProtocolDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getProtocolKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ProtocolKeyword` replaced.
  /// - param newChild: The new `ProtocolKeyword` to replace the node's
  ///                   current `ProtocolKeyword`, if present.
  ProtocolDeclSyntax
  withProtocolKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  ProtocolDeclSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeInheritanceClauseSyntax> getInheritanceClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InheritanceClause` replaced.
  /// - param newChild: The new `InheritanceClause` to replace the node's
  ///                   current `InheritanceClause`, if present.
  ProtocolDeclSyntax
  withInheritanceClause(llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericWhereClauseSyntax> getGenericWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericWhereClause` replaced.
  /// - param newChild: The new `GenericWhereClause` to replace the node's
  ///                   current `GenericWhereClause`, if present.
  ProtocolDeclSyntax
  withGenericWhereClause(llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  MemberDeclBlockSyntax getMembers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Members` replaced.
  /// - param newChild: The new `Members` to replace the node's
  ///                   current `Members`, if present.
  ProtocolDeclSyntax
  withMembers(llvm::Optional<MemberDeclBlockSyntax> NewMemberDeclBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ProtocolDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ExtensionDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ExtensionDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ExtensionKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ExtendedType,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InheritanceClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericWhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Members,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ExtensionDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  ExtensionDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  ExtensionDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  ExtensionDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  ExtensionDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getExtensionKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ExtensionKeyword` replaced.
  /// - param newChild: The new `ExtensionKeyword` to replace the node's
  ///                   current `ExtensionKeyword`, if present.
  ExtensionDeclSyntax
  withExtensionKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getExtendedType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ExtendedType` replaced.
  /// - param newChild: The new `ExtendedType` to replace the node's
  ///                   current `ExtendedType`, if present.
  ExtensionDeclSyntax
  withExtendedType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeInheritanceClauseSyntax> getInheritanceClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InheritanceClause` replaced.
  /// - param newChild: The new `InheritanceClause` to replace the node's
  ///                   current `InheritanceClause`, if present.
  ExtensionDeclSyntax
  withInheritanceClause(llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericWhereClauseSyntax> getGenericWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericWhereClause` replaced.
  /// - param newChild: The new `GenericWhereClause` to replace the node's
  ///                   current `GenericWhereClause`, if present.
  ExtensionDeclSyntax
  withGenericWhereClause(llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  MemberDeclBlockSyntax getMembers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Members` replaced.
  /// - param newChild: The new `Members` to replace the node's
  ///                   current `Members`, if present.
  ExtensionDeclSyntax
  withMembers(llvm::Optional<MemberDeclBlockSyntax> NewMemberDeclBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ExtensionDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MemberDeclBlockSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class MemberDeclBlockSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftBrace,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Members,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightBrace,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  MemberDeclBlockSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftBrace` replaced.
  /// - param newChild: The new `LeftBrace` to replace the node's
  ///                   current `LeftBrace`, if present.
  MemberDeclBlockSyntax
  withLeftBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  MemberDeclListSyntax getMembers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Member` to the node's `Members`
  /// collection.
  /// - param element: The new `Member` to add to the node's
  ///                  `Members` collection.
  /// - returns: A copy of the receiver with the provided `Member`
  ///            appended to its `Members` collection.
  MemberDeclBlockSyntax addMember(MemberDeclListItemSyntax Member);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Members` replaced.
  /// - param newChild: The new `Members` to replace the node's
  ///                   current `Members`, if present.
  MemberDeclBlockSyntax
  withMembers(llvm::Optional<MemberDeclListSyntax> NewMemberDeclListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightBrace` replaced.
  /// - param newChild: The new `RightBrace` to replace the node's
  ///                   current `RightBrace`, if present.
  MemberDeclBlockSyntax
  withRightBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::MemberDeclBlock;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A member declaration of a type consisting of a declaration and an          optional semicolon;
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MemberDeclListItemSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class MemberDeclListItemSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Decl,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Semicolon,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  MemberDeclListItemSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The declaration of the type member.
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  DeclSyntax getDecl();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Decl` replaced.
  /// - param newChild: The new `Decl` to replace the node's
  ///                   current `Decl`, if present.
  MemberDeclListItemSyntax
  withDecl(llvm::Optional<DeclSyntax> NewDeclSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// An optional trailing semicolon.
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getSemicolon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Semicolon` replaced.
  /// - param newChild: The new `Semicolon` to replace the node's
  ///                   current `Semicolon`, if present.
  MemberDeclListItemSyntax
  withSemicolon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::MemberDeclListItem;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SourceFileSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SourceFileSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Statements,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    EOFToken,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SourceFileSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockItemListSyntax getStatements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Statement` to the node's `Statements`
  /// collection.
  /// - param element: The new `Statement` to add to the node's
  ///                  `Statements` collection.
  /// - returns: A copy of the receiver with the provided `Statement`
  ///            appended to its `Statements` collection.
  SourceFileSyntax addStatement(CodeBlockItemSyntax Statement);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Statements` replaced.
  /// - param newChild: The new `Statements` to replace the node's
  ///                   current `Statements`, if present.
  SourceFileSyntax
  withStatements(llvm::Optional<CodeBlockItemListSyntax> NewCodeBlockItemListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getEOFToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `EOFToken` replaced.
  /// - param newChild: The new `EOFToken` to replace the node's
  ///                   current `EOFToken`, if present.
  SourceFileSyntax
  withEOFToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SourceFile;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class InitializerClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class InitializerClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Equal,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Value,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  InitializerClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getEqual();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Equal` replaced.
  /// - param newChild: The new `Equal` to replace the node's
  ///                   current `Equal`, if present.
  InitializerClauseSyntax
  withEqual(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getValue();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Value` replaced.
  /// - param newChild: The new `Value` to replace the node's
  ///                   current `Value`, if present.
  InitializerClauseSyntax
  withValue(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::InitializerClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionParameterSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class FunctionParameterSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    FirstName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    SecondName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Type,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Ellipsis,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DefaultArgument,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  FunctionParameterSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  FunctionParameterSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  FunctionParameterSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getFirstName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `FirstName` replaced.
  /// - param newChild: The new `FirstName` to replace the node's
  ///                   current `FirstName`, if present.
  FunctionParameterSyntax
  withFirstName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getSecondName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `SecondName` replaced.
  /// - param newChild: The new `SecondName` to replace the node's
  ///                   current `SecondName`, if present.
  FunctionParameterSyntax
  withSecondName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  FunctionParameterSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeSyntax> getType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Type` replaced.
  /// - param newChild: The new `Type` to replace the node's
  ///                   current `Type`, if present.
  FunctionParameterSyntax
  withType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getEllipsis();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Ellipsis` replaced.
  /// - param newChild: The new `Ellipsis` to replace the node's
  ///                   current `Ellipsis`, if present.
  FunctionParameterSyntax
  withEllipsis(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<InitializerClauseSyntax> getDefaultArgument();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DefaultArgument` replaced.
  /// - param newChild: The new `DefaultArgument` to replace the node's
  ///                   current `DefaultArgument`, if present.
  FunctionParameterSyntax
  withDefaultArgument(llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  FunctionParameterSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::FunctionParameter;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class FunctionDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    FuncKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericParameterClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Signature,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericWhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  FunctionDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  FunctionDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  FunctionDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  FunctionDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  FunctionDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getFuncKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `FuncKeyword` replaced.
  /// - param newChild: The new `FuncKeyword` to replace the node's
  ///                   current `FuncKeyword`, if present.
  FunctionDeclSyntax
  withFuncKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  FunctionDeclSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericParameterClauseSyntax> getGenericParameterClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericParameterClause` replaced.
  /// - param newChild: The new `GenericParameterClause` to replace the node's
  ///                   current `GenericParameterClause`, if present.
  FunctionDeclSyntax
  withGenericParameterClause(llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  FunctionSignatureSyntax getSignature();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Signature` replaced.
  /// - param newChild: The new `Signature` to replace the node's
  ///                   current `Signature`, if present.
  FunctionDeclSyntax
  withSignature(llvm::Optional<FunctionSignatureSyntax> NewFunctionSignatureSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericWhereClauseSyntax> getGenericWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericWhereClause` replaced.
  /// - param newChild: The new `GenericWhereClause` to replace the node's
  ///                   current `GenericWhereClause`, if present.
  FunctionDeclSyntax
  withGenericWhereClause(llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<CodeBlockSyntax> getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  FunctionDeclSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::FunctionDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class InitializerDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class InitializerDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InitKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    OptionalMark,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericParameterClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Parameters,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ThrowsOrRethrowsKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericWhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  InitializerDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  InitializerDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  InitializerDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  InitializerDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  InitializerDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getInitKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InitKeyword` replaced.
  /// - param newChild: The new `InitKeyword` to replace the node's
  ///                   current `InitKeyword`, if present.
  InitializerDeclSyntax
  withInitKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getOptionalMark();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `OptionalMark` replaced.
  /// - param newChild: The new `OptionalMark` to replace the node's
  ///                   current `OptionalMark`, if present.
  InitializerDeclSyntax
  withOptionalMark(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericParameterClauseSyntax> getGenericParameterClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericParameterClause` replaced.
  /// - param newChild: The new `GenericParameterClause` to replace the node's
  ///                   current `GenericParameterClause`, if present.
  InitializerDeclSyntax
  withGenericParameterClause(llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ParameterClauseSyntax getParameters();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Parameters` replaced.
  /// - param newChild: The new `Parameters` to replace the node's
  ///                   current `Parameters`, if present.
  InitializerDeclSyntax
  withParameters(llvm::Optional<ParameterClauseSyntax> NewParameterClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getThrowsOrRethrowsKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ThrowsOrRethrowsKeyword` replaced.
  /// - param newChild: The new `ThrowsOrRethrowsKeyword` to replace the node's
  ///                   current `ThrowsOrRethrowsKeyword`, if present.
  InitializerDeclSyntax
  withThrowsOrRethrowsKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericWhereClauseSyntax> getGenericWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericWhereClause` replaced.
  /// - param newChild: The new `GenericWhereClause` to replace the node's
  ///                   current `GenericWhereClause`, if present.
  InitializerDeclSyntax
  withGenericWhereClause(llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<CodeBlockSyntax> getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  InitializerDeclSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::InitializerDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeinitializerDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DeinitializerDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DeinitKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DeinitializerDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  DeinitializerDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  DeinitializerDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  DeinitializerDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  DeinitializerDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getDeinitKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DeinitKeyword` replaced.
  /// - param newChild: The new `DeinitKeyword` to replace the node's
  ///                   current `DeinitKeyword`, if present.
  DeinitializerDeclSyntax
  withDeinitKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockSyntax getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  DeinitializerDeclSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DeinitializerDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SubscriptDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SubscriptDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    SubscriptKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericParameterClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Indices,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Result,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericWhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Accessor,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SubscriptDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  SubscriptDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  SubscriptDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  SubscriptDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  SubscriptDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getSubscriptKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `SubscriptKeyword` replaced.
  /// - param newChild: The new `SubscriptKeyword` to replace the node's
  ///                   current `SubscriptKeyword`, if present.
  SubscriptDeclSyntax
  withSubscriptKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericParameterClauseSyntax> getGenericParameterClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericParameterClause` replaced.
  /// - param newChild: The new `GenericParameterClause` to replace the node's
  ///                   current `GenericParameterClause`, if present.
  SubscriptDeclSyntax
  withGenericParameterClause(llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ParameterClauseSyntax getIndices();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Indices` replaced.
  /// - param newChild: The new `Indices` to replace the node's
  ///                   current `Indices`, if present.
  SubscriptDeclSyntax
  withIndices(llvm::Optional<ParameterClauseSyntax> NewParameterClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ReturnClauseSyntax getResult();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Result` replaced.
  /// - param newChild: The new `Result` to replace the node's
  ///                   current `Result`, if present.
  SubscriptDeclSyntax
  withResult(llvm::Optional<ReturnClauseSyntax> NewReturnClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericWhereClauseSyntax> getGenericWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericWhereClause` replaced.
  /// - param newChild: The new `GenericWhereClause` to replace the node's
  ///                   current `GenericWhereClause`, if present.
  SubscriptDeclSyntax
  withGenericWhereClause(llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<Syntax> getAccessor();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Accessor` replaced.
  /// - param newChild: The new `Accessor` to replace the node's
  ///                   current `Accessor`, if present.
  SubscriptDeclSyntax
  withAccessor(llvm::Optional<Syntax> NewSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SubscriptDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AccessLevelModifierSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AccessLevelModifierSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AccessLevelModifierSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  AccessLevelModifierSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  AccessLevelModifierSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getModifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifier` replaced.
  /// - param newChild: The new `Modifier` to replace the node's
  ///                   current `Modifier`, if present.
  AccessLevelModifierSyntax
  withModifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  AccessLevelModifierSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AccessLevelModifier;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AccessPathComponentSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AccessPathComponentSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingDot,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AccessPathComponentSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  AccessPathComponentSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingDot();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingDot` replaced.
  /// - param newChild: The new `TrailingDot` to replace the node's
  ///                   current `TrailingDot`, if present.
  AccessPathComponentSyntax
  withTrailingDot(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AccessPathComponent;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ImportDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ImportDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ImportTok,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ImportKind,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Path,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ImportDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  ImportDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  ImportDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  ImportDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  ImportDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getImportTok();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ImportTok` replaced.
  /// - param newChild: The new `ImportTok` to replace the node's
  ///                   current `ImportTok`, if present.
  ImportDeclSyntax
  withImportTok(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getImportKind();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ImportKind` replaced.
  /// - param newChild: The new `ImportKind` to replace the node's
  ///                   current `ImportKind`, if present.
  ImportDeclSyntax
  withImportKind(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  AccessPathSyntax getPath();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `PathComponent` to the node's `Path`
  /// collection.
  /// - param element: The new `PathComponent` to add to the node's
  ///                  `Path` collection.
  /// - returns: A copy of the receiver with the provided `PathComponent`
  ///            appended to its `Path` collection.
  ImportDeclSyntax addPathComponent(AccessPathComponentSyntax PathComponent);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Path` replaced.
  /// - param newChild: The new `Path` to replace the node's
  ///                   current `Path`, if present.
  ImportDeclSyntax
  withPath(llvm::Optional<AccessPathSyntax> NewAccessPathSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ImportDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AccessorParameterSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AccessorParameterSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AccessorParameterSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  AccessorParameterSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  AccessorParameterSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  AccessorParameterSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AccessorParameter;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AccessorDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AccessorDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AccessorKind,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Parameter,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AccessorDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  AccessorDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  AccessorDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<DeclModifierSyntax> getModifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifier` replaced.
  /// - param newChild: The new `Modifier` to replace the node's
  ///                   current `Modifier`, if present.
  AccessorDeclSyntax
  withModifier(llvm::Optional<DeclModifierSyntax> NewDeclModifierSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAccessorKind();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AccessorKind` replaced.
  /// - param newChild: The new `AccessorKind` to replace the node's
  ///                   current `AccessorKind`, if present.
  AccessorDeclSyntax
  withAccessorKind(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AccessorParameterSyntax> getParameter();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Parameter` replaced.
  /// - param newChild: The new `Parameter` to replace the node's
  ///                   current `Parameter`, if present.
  AccessorDeclSyntax
  withParameter(llvm::Optional<AccessorParameterSyntax> NewAccessorParameterSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<CodeBlockSyntax> getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  AccessorDeclSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AccessorDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AccessorBlockSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AccessorBlockSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftBrace,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Accessors,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightBrace,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AccessorBlockSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftBrace` replaced.
  /// - param newChild: The new `LeftBrace` to replace the node's
  ///                   current `LeftBrace`, if present.
  AccessorBlockSyntax
  withLeftBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  AccessorListSyntax getAccessors();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Accessor` to the node's `Accessors`
  /// collection.
  /// - param element: The new `Accessor` to add to the node's
  ///                  `Accessors` collection.
  /// - returns: A copy of the receiver with the provided `Accessor`
  ///            appended to its `Accessors` collection.
  AccessorBlockSyntax addAccessor(AccessorDeclSyntax Accessor);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Accessors` replaced.
  /// - param newChild: The new `Accessors` to replace the node's
  ///                   current `Accessors`, if present.
  AccessorBlockSyntax
  withAccessors(llvm::Optional<AccessorListSyntax> NewAccessorListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightBrace` replaced.
  /// - param newChild: The new `RightBrace` to replace the node's
  ///                   current `RightBrace`, if present.
  AccessorBlockSyntax
  withRightBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AccessorBlock;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PatternBindingSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PatternBindingSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Pattern,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TypeAnnotation,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Initializer,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Accessor,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PatternBindingSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternSyntax getPattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Pattern` replaced.
  /// - param newChild: The new `Pattern` to replace the node's
  ///                   current `Pattern`, if present.
  PatternBindingSyntax
  withPattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeAnnotationSyntax> getTypeAnnotation();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TypeAnnotation` replaced.
  /// - param newChild: The new `TypeAnnotation` to replace the node's
  ///                   current `TypeAnnotation`, if present.
  PatternBindingSyntax
  withTypeAnnotation(llvm::Optional<TypeAnnotationSyntax> NewTypeAnnotationSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<InitializerClauseSyntax> getInitializer();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Initializer` replaced.
  /// - param newChild: The new `Initializer` to replace the node's
  ///                   current `Initializer`, if present.
  PatternBindingSyntax
  withInitializer(llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<Syntax> getAccessor();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Accessor` replaced.
  /// - param newChild: The new `Accessor` to replace the node's
  ///                   current `Accessor`, if present.
  PatternBindingSyntax
  withAccessor(llvm::Optional<Syntax> NewSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  PatternBindingSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PatternBinding;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class VariableDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class VariableDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LetOrVarKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Bindings,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  VariableDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  VariableDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  VariableDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  VariableDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  VariableDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLetOrVarKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LetOrVarKeyword` replaced.
  /// - param newChild: The new `LetOrVarKeyword` to replace the node's
  ///                   current `LetOrVarKeyword`, if present.
  VariableDeclSyntax
  withLetOrVarKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternBindingListSyntax getBindings();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Binding` to the node's `Bindings`
  /// collection.
  /// - param element: The new `Binding` to add to the node's
  ///                  `Bindings` collection.
  /// - returns: A copy of the receiver with the provided `Binding`
  ///            appended to its `Bindings` collection.
  VariableDeclSyntax addBinding(PatternBindingSyntax Binding);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Bindings` replaced.
  /// - param newChild: The new `Bindings` to replace the node's
  ///                   current `Bindings`, if present.
  VariableDeclSyntax
  withBindings(llvm::Optional<PatternBindingListSyntax> NewPatternBindingListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::VariableDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// An element of an enum case, containing the name of the case and,          optionally, either associated values or an assignment to a raw value.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class EnumCaseElementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class EnumCaseElementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AssociatedValue,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RawValue,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  EnumCaseElementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The name of this case.
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  EnumCaseElementSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The set of associated values of the case.
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ParameterClauseSyntax> getAssociatedValue();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AssociatedValue` replaced.
  /// - param newChild: The new `AssociatedValue` to replace the node's
  ///                   current `AssociatedValue`, if present.
  EnumCaseElementSyntax
  withAssociatedValue(llvm::Optional<ParameterClauseSyntax> NewParameterClauseSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The raw value of this enum element, if present.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<InitializerClauseSyntax> getRawValue();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RawValue` replaced.
  /// - param newChild: The new `RawValue` to replace the node's
  ///                   current `RawValue`, if present.
  EnumCaseElementSyntax
  withRawValue(llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The trailing comma of this element, if the case has                    multiple elements.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  EnumCaseElementSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::EnumCaseElement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A `case` declaration of a Swift `enum`. It can have 1 or more          `EnumCaseElement`s inside, each declaring a different case of the
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// enum.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class EnumCaseDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class EnumCaseDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CaseKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Elements,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  EnumCaseDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The attributes applied to the case declaration.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  EnumCaseDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  EnumCaseDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The declaration modifiers applied to the case declaration.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  EnumCaseDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  EnumCaseDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The `case` keyword for this case.
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getCaseKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CaseKeyword` replaced.
  /// - param newChild: The new `CaseKeyword` to replace the node's
  ///                   current `CaseKeyword`, if present.
  EnumCaseDeclSyntax
  withCaseKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The elements this case declares.
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  EnumCaseElementListSyntax getElements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Element` to the node's `Elements`
  /// collection.
  /// - param element: The new `Element` to add to the node's
  ///                  `Elements` collection.
  /// - returns: A copy of the receiver with the provided `Element`
  ///            appended to its `Elements` collection.
  EnumCaseDeclSyntax addElement(EnumCaseElementSyntax Element);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Elements` replaced.
  /// - param newChild: The new `Elements` to replace the node's
  ///                   current `Elements`, if present.
  EnumCaseDeclSyntax
  withElements(llvm::Optional<EnumCaseElementListSyntax> NewEnumCaseElementListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::EnumCaseDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A Swift `enum` declaration.
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class EnumDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class EnumDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    EnumKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericParameters,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InheritanceClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericWhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Members,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  EnumDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The attributes applied to the enum declaration.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  EnumDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  EnumDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The declaration modifiers applied to the enum declaration.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  EnumDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  EnumDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The `enum` keyword for this declaration.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getEnumKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `EnumKeyword` replaced.
  /// - param newChild: The new `EnumKeyword` to replace the node's
  ///                   current `EnumKeyword`, if present.
  EnumDeclSyntax
  withEnumKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The name of this enum.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  EnumDeclSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The generic parameters, if any, for this enum.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericParameterClauseSyntax> getGenericParameters();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericParameters` replaced.
  /// - param newChild: The new `GenericParameters` to replace the node's
  ///                   current `GenericParameters`, if present.
  EnumDeclSyntax
  withGenericParameters(llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The inheritance clause describing conformances or raw                    values for this enum.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeInheritanceClauseSyntax> getInheritanceClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InheritanceClause` replaced.
  /// - param newChild: The new `InheritanceClause` to replace the node's
  ///                   current `InheritanceClause`, if present.
  EnumDeclSyntax
  withInheritanceClause(llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The `where` clause that applies to the generic parameters of                    this enum.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericWhereClauseSyntax> getGenericWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericWhereClause` replaced.
  /// - param newChild: The new `GenericWhereClause` to replace the node's
  ///                   current `GenericWhereClause`, if present.
  EnumDeclSyntax
  withGenericWhereClause(llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The cases and other members of this enum.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  MemberDeclBlockSyntax getMembers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Members` replaced.
  /// - param newChild: The new `Members` to replace the node's
  ///                   current `Members`, if present.
  EnumDeclSyntax
  withMembers(llvm::Optional<MemberDeclBlockSyntax> NewMemberDeclBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::EnumDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A Swift `operator` declaration.
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OperatorDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class OperatorDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    OperatorKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    OperatorPrecedenceAndTypes,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  OperatorDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The attributes applied to the 'operator' declaration.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  OperatorDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  OperatorDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The declaration modifiers applied to the 'operator'
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// declaration.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  OperatorDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  OperatorDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getOperatorKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `OperatorKeyword` replaced.
  /// - param newChild: The new `OperatorKeyword` to replace the node's
  ///                   current `OperatorKeyword`, if present.
  OperatorDeclSyntax
  withOperatorKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  OperatorDeclSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Optionally specify a precedence group and designated types.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<OperatorPrecedenceAndTypesSyntax> getOperatorPrecedenceAndTypes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `OperatorPrecedenceAndTypes` replaced.
  /// - param newChild: The new `OperatorPrecedenceAndTypes` to replace the node's
  ///                   current `OperatorPrecedenceAndTypes`, if present.
  OperatorDeclSyntax
  withOperatorPrecedenceAndTypes(llvm::Optional<OperatorPrecedenceAndTypesSyntax> NewOperatorPrecedenceAndTypesSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::OperatorDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A clause to specify precedence group in infix operator declarations, and designated types in any operator declaration.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OperatorPrecedenceAndTypesSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class OperatorPrecedenceAndTypesSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PrecedenceGroupAndDesignatedTypes,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  OperatorPrecedenceAndTypesSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  OperatorPrecedenceAndTypesSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The precedence group and designated types for this operator
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  IdentifierListSyntax getPrecedenceGroupAndDesignatedTypes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `PrecedenceGroupAndDesignatedType` to the node's `PrecedenceGroupAndDesignatedTypes`
  /// collection.
  /// - param element: The new `PrecedenceGroupAndDesignatedType` to add to the node's
  ///                  `PrecedenceGroupAndDesignatedTypes` collection.
  /// - returns: A copy of the receiver with the provided `PrecedenceGroupAndDesignatedType`
  ///            appended to its `PrecedenceGroupAndDesignatedTypes` collection.
  OperatorPrecedenceAndTypesSyntax addPrecedenceGroupAndDesignatedType(TokenSyntax PrecedenceGroupAndDesignatedType);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PrecedenceGroupAndDesignatedTypes` replaced.
  /// - param newChild: The new `PrecedenceGroupAndDesignatedTypes` to replace the node's
  ///                   current `PrecedenceGroupAndDesignatedTypes`, if present.
  OperatorPrecedenceAndTypesSyntax
  withPrecedenceGroupAndDesignatedTypes(llvm::Optional<IdentifierListSyntax> NewIdentifierListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::OperatorPrecedenceAndTypes;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A Swift `precedencegroup` declaration.
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrecedenceGroupDeclSyntax final : public DeclSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PrecedenceGroupDeclSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Modifiers,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PrecedencegroupKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftBrace,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GroupAttributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightBrace,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PrecedenceGroupDeclSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : DeclSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The attributes applied to the 'precedencegroup' declaration.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  PrecedenceGroupDeclSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  PrecedenceGroupDeclSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The declaration modifiers applied to the 'precedencegroup'
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// declaration.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ModifierListSyntax> getModifiers();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Modifier` to the node's `Modifiers`
  /// collection.
  /// - param element: The new `Modifier` to add to the node's
  ///                  `Modifiers` collection.
  /// - returns: A copy of the receiver with the provided `Modifier`
  ///            appended to its `Modifiers` collection.
  PrecedenceGroupDeclSyntax addModifier(DeclModifierSyntax Modifier);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Modifiers` replaced.
  /// - param newChild: The new `Modifiers` to replace the node's
  ///                   current `Modifiers`, if present.
  PrecedenceGroupDeclSyntax
  withModifiers(llvm::Optional<ModifierListSyntax> NewModifierListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPrecedencegroupKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PrecedencegroupKeyword` replaced.
  /// - param newChild: The new `PrecedencegroupKeyword` to replace the node's
  ///                   current `PrecedencegroupKeyword`, if present.
  PrecedenceGroupDeclSyntax
  withPrecedencegroupKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The name of this precedence group.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  PrecedenceGroupDeclSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftBrace` replaced.
  /// - param newChild: The new `LeftBrace` to replace the node's
  ///                   current `LeftBrace`, if present.
  PrecedenceGroupDeclSyntax
  withLeftBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The characteristics of this precedence group.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PrecedenceGroupAttributeListSyntax getGroupAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `GroupAttribute` to the node's `GroupAttributes`
  /// collection.
  /// - param element: The new `GroupAttribute` to add to the node's
  ///                  `GroupAttributes` collection.
  /// - returns: A copy of the receiver with the provided `GroupAttribute`
  ///            appended to its `GroupAttributes` collection.
  PrecedenceGroupDeclSyntax addGroupAttribute(Syntax GroupAttribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GroupAttributes` replaced.
  /// - param newChild: The new `GroupAttributes` to replace the node's
  ///                   current `GroupAttributes`, if present.
  PrecedenceGroupDeclSyntax
  withGroupAttributes(llvm::Optional<PrecedenceGroupAttributeListSyntax> NewPrecedenceGroupAttributeListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightBrace` replaced.
  /// - param newChild: The new `RightBrace` to replace the node's
  ///                   current `RightBrace`, if present.
  PrecedenceGroupDeclSyntax
  withRightBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PrecedenceGroupDecl;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// Specify the new precedence group's relation to existing precedence
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// groups.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrecedenceGroupRelationSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PrecedenceGroupRelationSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    HigherThanOrLowerThan,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    OtherNames,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PrecedenceGroupRelationSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The relation to specified other precedence groups.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getHigherThanOrLowerThan();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `HigherThanOrLowerThan` replaced.
  /// - param newChild: The new `HigherThanOrLowerThan` to replace the node's
  ///                   current `HigherThanOrLowerThan`, if present.
  PrecedenceGroupRelationSyntax
  withHigherThanOrLowerThan(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  PrecedenceGroupRelationSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The name of other precedence group to which this precedence
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// group relates.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PrecedenceGroupNameListSyntax getOtherNames();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `OtherName` to the node's `OtherNames`
  /// collection.
  /// - param element: The new `OtherName` to add to the node's
  ///                  `OtherNames` collection.
  /// - returns: A copy of the receiver with the provided `OtherName`
  ///            appended to its `OtherNames` collection.
  PrecedenceGroupRelationSyntax addOtherName(PrecedenceGroupNameElementSyntax OtherName);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `OtherNames` replaced.
  /// - param newChild: The new `OtherNames` to replace the node's
  ///                   current `OtherNames`, if present.
  PrecedenceGroupRelationSyntax
  withOtherNames(llvm::Optional<PrecedenceGroupNameListSyntax> NewPrecedenceGroupNameListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PrecedenceGroupRelation;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrecedenceGroupNameElementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PrecedenceGroupNameElementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PrecedenceGroupNameElementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  PrecedenceGroupNameElementSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  PrecedenceGroupNameElementSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PrecedenceGroupNameElement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// Specifies the precedence of an operator when used in an operation
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// that includes optional chaining.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrecedenceGroupAssignmentSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PrecedenceGroupAssignmentSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AssignmentKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Flag,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PrecedenceGroupAssignmentSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAssignmentKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AssignmentKeyword` replaced.
  /// - param newChild: The new `AssignmentKeyword` to replace the node's
  ///                   current `AssignmentKeyword`, if present.
  PrecedenceGroupAssignmentSyntax
  withAssignmentKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  PrecedenceGroupAssignmentSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// When true, an operator in the corresponding precedence group
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// uses the same grouping rules during optional chaining as the
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// assignment operators from the standard library. Otherwise,
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// operators in the precedence group follows the same optional
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// chaining rules as operators that don't perform assignment.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getFlag();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Flag` replaced.
  /// - param newChild: The new `Flag` to replace the node's
  ///                   current `Flag`, if present.
  PrecedenceGroupAssignmentSyntax
  withFlag(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PrecedenceGroupAssignment;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// Specifies how a sequence of operators with the same precedence level
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// are grouped together in the absence of grouping parentheses.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PrecedenceGroupAssociativitySyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PrecedenceGroupAssociativitySyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AssociativityKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Value,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PrecedenceGroupAssociativitySyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAssociativityKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AssociativityKeyword` replaced.
  /// - param newChild: The new `AssociativityKeyword` to replace the node's
  ///                   current `AssociativityKeyword`, if present.
  PrecedenceGroupAssociativitySyntax
  withAssociativityKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  PrecedenceGroupAssociativitySyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Operators that are `left`-associative group left-to-right.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Operators that are `right`-associative group right-to-left.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Operators that are specified with an associativity of `none`
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// don't associate at all
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getValue();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Value` replaced.
  /// - param newChild: The new `Value` to replace the node's
  ///                   current `Value`, if present.
  PrecedenceGroupAssociativitySyntax
  withValue(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PrecedenceGroupAssociativity;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A custom `@` attribute.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CustomAttributeSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class CustomAttributeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AtSignToken,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AttributeName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ArgumentList,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  CustomAttributeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The `@` sign.
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAtSignToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AtSignToken` replaced.
  /// - param newChild: The new `AtSignToken` to replace the node's
  ///                   current `AtSignToken`, if present.
  CustomAttributeSyntax
  withAtSignToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The name of the attribute.
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getAttributeName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AttributeName` replaced.
  /// - param newChild: The new `AttributeName` to replace the node's
  ///                   current `AttributeName`, if present.
  CustomAttributeSyntax
  withAttributeName(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  CustomAttributeSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<FunctionCallArgumentListSyntax> getArgumentList();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Argument` to the node's `ArgumentList`
  /// collection.
  /// - param element: The new `Argument` to add to the node's
  ///                  `ArgumentList` collection.
  /// - returns: A copy of the receiver with the provided `Argument`
  ///            appended to its `ArgumentList` collection.
  CustomAttributeSyntax addArgument(FunctionCallArgumentSyntax Argument);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ArgumentList` replaced.
  /// - param newChild: The new `ArgumentList` to replace the node's
  ///                   current `ArgumentList`, if present.
  CustomAttributeSyntax
  withArgumentList(llvm::Optional<FunctionCallArgumentListSyntax> NewFunctionCallArgumentListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  CustomAttributeSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::CustomAttribute;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// An `@` attribute.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AttributeSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AttributeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AtSignToken,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AttributeName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Argument,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TokenList,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AttributeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The `@` sign.
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAtSignToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AtSignToken` replaced.
  /// - param newChild: The new `AtSignToken` to replace the node's
  ///                   current `AtSignToken`, if present.
  AttributeSyntax
  withAtSignToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The name of the attribute.
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAttributeName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AttributeName` replaced.
  /// - param newChild: The new `AttributeName` to replace the node's
  ///                   current `AttributeName`, if present.
  AttributeSyntax
  withAttributeName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// If the attribute takes arguments, the opening parenthesis.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  AttributeSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The arguments of the attribute. In case the attribute                     takes multiple arguments, they are gather in the                    appropriate takes first.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<Syntax> getArgument();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Argument` replaced.
  /// - param newChild: The new `Argument` to replace the node's
  ///                   current `Argument`, if present.
  AttributeSyntax
  withArgument(llvm::Optional<Syntax> NewSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// If the attribute takes arguments, the closing parenthesis.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  AttributeSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenListSyntax> getTokenList();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Token` to the node's `TokenList`
  /// collection.
  /// - param element: The new `Token` to add to the node's
  ///                  `TokenList` collection.
  /// - returns: A copy of the receiver with the provided `Token`
  ///            appended to its `TokenList` collection.
  AttributeSyntax addToken(TokenSyntax Token);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TokenList` replaced.
  /// - param newChild: The new `TokenList` to replace the node's
  ///                   current `TokenList`, if present.
  AttributeSyntax
  withTokenList(llvm::Optional<TokenListSyntax> NewTokenListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::Attribute;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A labeled argument for the `@_specialize` attribute like          `exported: true`
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class LabeledSpecializeEntrySyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class LabeledSpecializeEntrySyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Label,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Value,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  LabeledSpecializeEntrySyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The label of the argument
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLabel();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Label` replaced.
  /// - param newChild: The new `Label` to replace the node's
  ///                   current `Label`, if present.
  LabeledSpecializeEntrySyntax
  withLabel(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The colon separating the label and the value
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  LabeledSpecializeEntrySyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The value for this argument
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getValue();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Value` replaced.
  /// - param newChild: The new `Value` to replace the node's
  ///                   current `Value`, if present.
  LabeledSpecializeEntrySyntax
  withValue(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// A trailing comma if this argument is followed by another one
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  LabeledSpecializeEntrySyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::LabeledSpecializeEntry;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// The argument for the `@_dynamic_replacement` or `@_private`          attribute of the form `for: "function()"` or `sourceFile:          "Src.swift"`
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class NamedAttributeStringArgumentSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class NamedAttributeStringArgumentSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    NameTok,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    StringOrDeclname,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  NamedAttributeStringArgumentSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The label of the argument
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getNameTok();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `NameTok` replaced.
  /// - param newChild: The new `NameTok` to replace the node's
  ///                   current `NameTok`, if present.
  NamedAttributeStringArgumentSyntax
  withNameTok(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The colon separating the label and the value
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  NamedAttributeStringArgumentSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getStringOrDeclname();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `StringOrDeclname` replaced.
  /// - param newChild: The new `StringOrDeclname` to replace the node's
  ///                   current `StringOrDeclname`, if present.
  NamedAttributeStringArgumentSyntax
  withStringOrDeclname(llvm::Optional<Syntax> NewSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::NamedAttributeStringArgument;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclNameSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DeclNameSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DeclBaseName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DeclNameArguments,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DeclNameSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The base name of the protocol's requirement.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getDeclBaseName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DeclBaseName` replaced.
  /// - param newChild: The new `DeclBaseName` to replace the node's
  ///                   current `DeclBaseName`, if present.
  DeclNameSyntax
  withDeclBaseName(llvm::Optional<Syntax> NewSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The argument labels of the protocol's requirement if it                is a function requirement.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<DeclNameArgumentsSyntax> getDeclNameArguments();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DeclNameArguments` replaced.
  /// - param newChild: The new `DeclNameArguments` to replace the node's
  ///                   current `DeclNameArguments`, if present.
  DeclNameSyntax
  withDeclNameArguments(llvm::Optional<DeclNameArgumentsSyntax> NewDeclNameArgumentsSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DeclName;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// The arguments for the `@_implements` attribute of the form          `Type, methodName(arg1Label:arg2Label:)`
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ImplementsAttributeArgumentsSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ImplementsAttributeArgumentsSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Type,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Comma,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DeclBaseName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DeclNameArguments,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ImplementsAttributeArgumentsSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The type for which the method with this attribute                    implements a requirement.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  SimpleTypeIdentifierSyntax getType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Type` replaced.
  /// - param newChild: The new `Type` to replace the node's
  ///                   current `Type`, if present.
  ImplementsAttributeArgumentsSyntax
  withType(llvm::Optional<SimpleTypeIdentifierSyntax> NewSimpleTypeIdentifierSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The comma separating the type and method name
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Comma` replaced.
  /// - param newChild: The new `Comma` to replace the node's
  ///                   current `Comma`, if present.
  ImplementsAttributeArgumentsSyntax
  withComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The base name of the protocol's requirement.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getDeclBaseName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DeclBaseName` replaced.
  /// - param newChild: The new `DeclBaseName` to replace the node's
  ///                   current `DeclBaseName`, if present.
  ImplementsAttributeArgumentsSyntax
  withDeclBaseName(llvm::Optional<Syntax> NewSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The argument labels of the protocol's requirement if it                    is a function requirement.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<DeclNameArgumentsSyntax> getDeclNameArguments();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DeclNameArguments` replaced.
  /// - param newChild: The new `DeclNameArguments` to replace the node's
  ///                   current `DeclNameArguments`, if present.
  ImplementsAttributeArgumentsSyntax
  withDeclNameArguments(llvm::Optional<DeclNameArgumentsSyntax> NewDeclNameArgumentsSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ImplementsAttributeArguments;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A piece of an Objective-C selector. Either consisiting of just an          identifier for a nullary selector, an identifier and a colon for a          labeled argument or just a colon for an unlabeled argument
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ObjCSelectorPieceSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ObjCSelectorPieceSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ObjCSelectorPieceSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  ObjCSelectorPieceSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  ObjCSelectorPieceSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ObjCSelectorPiece;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ContinueStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ContinueStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ContinueKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Label,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ContinueStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getContinueKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ContinueKeyword` replaced.
  /// - param newChild: The new `ContinueKeyword` to replace the node's
  ///                   current `ContinueKeyword`, if present.
  ContinueStmtSyntax
  withContinueKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabel();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Label` replaced.
  /// - param newChild: The new `Label` to replace the node's
  ///                   current `Label`, if present.
  ContinueStmtSyntax
  withLabel(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ContinueStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class WhileStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class WhileStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelColon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    WhileKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Conditions,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  WhileStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelName` replaced.
  /// - param newChild: The new `LabelName` to replace the node's
  ///                   current `LabelName`, if present.
  WhileStmtSyntax
  withLabelName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelColon` replaced.
  /// - param newChild: The new `LabelColon` to replace the node's
  ///                   current `LabelColon`, if present.
  WhileStmtSyntax
  withLabelColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getWhileKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `WhileKeyword` replaced.
  /// - param newChild: The new `WhileKeyword` to replace the node's
  ///                   current `WhileKeyword`, if present.
  WhileStmtSyntax
  withWhileKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ConditionElementListSyntax getConditions();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Condition` to the node's `Conditions`
  /// collection.
  /// - param element: The new `Condition` to add to the node's
  ///                  `Conditions` collection.
  /// - returns: A copy of the receiver with the provided `Condition`
  ///            appended to its `Conditions` collection.
  WhileStmtSyntax addCondition(ConditionElementSyntax Condition);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Conditions` replaced.
  /// - param newChild: The new `Conditions` to replace the node's
  ///                   current `Conditions`, if present.
  WhileStmtSyntax
  withConditions(llvm::Optional<ConditionElementListSyntax> NewConditionElementListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockSyntax getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  WhileStmtSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::WhileStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeferStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DeferStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DeferKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DeferStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getDeferKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DeferKeyword` replaced.
  /// - param newChild: The new `DeferKeyword` to replace the node's
  ///                   current `DeferKeyword`, if present.
  DeferStmtSyntax
  withDeferKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockSyntax getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  DeferStmtSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DeferStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ExpressionStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ExpressionStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ExpressionStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  ExpressionStmtSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ExpressionStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class RepeatWhileStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class RepeatWhileStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelColon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RepeatKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    WhileKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Condition,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  RepeatWhileStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelName` replaced.
  /// - param newChild: The new `LabelName` to replace the node's
  ///                   current `LabelName`, if present.
  RepeatWhileStmtSyntax
  withLabelName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelColon` replaced.
  /// - param newChild: The new `LabelColon` to replace the node's
  ///                   current `LabelColon`, if present.
  RepeatWhileStmtSyntax
  withLabelColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRepeatKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RepeatKeyword` replaced.
  /// - param newChild: The new `RepeatKeyword` to replace the node's
  ///                   current `RepeatKeyword`, if present.
  RepeatWhileStmtSyntax
  withRepeatKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockSyntax getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  RepeatWhileStmtSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getWhileKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `WhileKeyword` replaced.
  /// - param newChild: The new `WhileKeyword` to replace the node's
  ///                   current `WhileKeyword`, if present.
  RepeatWhileStmtSyntax
  withWhileKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getCondition();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Condition` replaced.
  /// - param newChild: The new `Condition` to replace the node's
  ///                   current `Condition`, if present.
  RepeatWhileStmtSyntax
  withCondition(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::RepeatWhileStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GuardStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class GuardStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GuardKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Conditions,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ElseKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  GuardStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getGuardKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GuardKeyword` replaced.
  /// - param newChild: The new `GuardKeyword` to replace the node's
  ///                   current `GuardKeyword`, if present.
  GuardStmtSyntax
  withGuardKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ConditionElementListSyntax getConditions();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Condition` to the node's `Conditions`
  /// collection.
  /// - param element: The new `Condition` to add to the node's
  ///                  `Conditions` collection.
  /// - returns: A copy of the receiver with the provided `Condition`
  ///            appended to its `Conditions` collection.
  GuardStmtSyntax addCondition(ConditionElementSyntax Condition);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Conditions` replaced.
  /// - param newChild: The new `Conditions` to replace the node's
  ///                   current `Conditions`, if present.
  GuardStmtSyntax
  withConditions(llvm::Optional<ConditionElementListSyntax> NewConditionElementListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getElseKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ElseKeyword` replaced.
  /// - param newChild: The new `ElseKeyword` to replace the node's
  ///                   current `ElseKeyword`, if present.
  GuardStmtSyntax
  withElseKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockSyntax getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  GuardStmtSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::GuardStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class WhereClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class WhereClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    WhereKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GuardResult,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  WhereClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getWhereKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `WhereKeyword` replaced.
  /// - param newChild: The new `WhereKeyword` to replace the node's
  ///                   current `WhereKeyword`, if present.
  WhereClauseSyntax
  withWhereKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getGuardResult();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GuardResult` replaced.
  /// - param newChild: The new `GuardResult` to replace the node's
  ///                   current `GuardResult`, if present.
  WhereClauseSyntax
  withGuardResult(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::WhereClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ForInStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ForInStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelColon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ForKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CaseKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Pattern,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TypeAnnotation,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    SequenceExpr,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    WhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ForInStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelName` replaced.
  /// - param newChild: The new `LabelName` to replace the node's
  ///                   current `LabelName`, if present.
  ForInStmtSyntax
  withLabelName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelColon` replaced.
  /// - param newChild: The new `LabelColon` to replace the node's
  ///                   current `LabelColon`, if present.
  ForInStmtSyntax
  withLabelColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getForKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ForKeyword` replaced.
  /// - param newChild: The new `ForKeyword` to replace the node's
  ///                   current `ForKeyword`, if present.
  ForInStmtSyntax
  withForKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getCaseKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CaseKeyword` replaced.
  /// - param newChild: The new `CaseKeyword` to replace the node's
  ///                   current `CaseKeyword`, if present.
  ForInStmtSyntax
  withCaseKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternSyntax getPattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Pattern` replaced.
  /// - param newChild: The new `Pattern` to replace the node's
  ///                   current `Pattern`, if present.
  ForInStmtSyntax
  withPattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeAnnotationSyntax> getTypeAnnotation();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TypeAnnotation` replaced.
  /// - param newChild: The new `TypeAnnotation` to replace the node's
  ///                   current `TypeAnnotation`, if present.
  ForInStmtSyntax
  withTypeAnnotation(llvm::Optional<TypeAnnotationSyntax> NewTypeAnnotationSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getInKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InKeyword` replaced.
  /// - param newChild: The new `InKeyword` to replace the node's
  ///                   current `InKeyword`, if present.
  ForInStmtSyntax
  withInKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getSequenceExpr();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `SequenceExpr` replaced.
  /// - param newChild: The new `SequenceExpr` to replace the node's
  ///                   current `SequenceExpr`, if present.
  ForInStmtSyntax
  withSequenceExpr(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<WhereClauseSyntax> getWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `WhereClause` replaced.
  /// - param newChild: The new `WhereClause` to replace the node's
  ///                   current `WhereClause`, if present.
  ForInStmtSyntax
  withWhereClause(llvm::Optional<WhereClauseSyntax> NewWhereClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockSyntax getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  ForInStmtSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ForInStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SwitchStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SwitchStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelColon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    SwitchKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftBrace,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Cases,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightBrace,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SwitchStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelName` replaced.
  /// - param newChild: The new `LabelName` to replace the node's
  ///                   current `LabelName`, if present.
  SwitchStmtSyntax
  withLabelName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelColon` replaced.
  /// - param newChild: The new `LabelColon` to replace the node's
  ///                   current `LabelColon`, if present.
  SwitchStmtSyntax
  withLabelColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getSwitchKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `SwitchKeyword` replaced.
  /// - param newChild: The new `SwitchKeyword` to replace the node's
  ///                   current `SwitchKeyword`, if present.
  SwitchStmtSyntax
  withSwitchKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  SwitchStmtSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftBrace` replaced.
  /// - param newChild: The new `LeftBrace` to replace the node's
  ///                   current `LeftBrace`, if present.
  SwitchStmtSyntax
  withLeftBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  SwitchCaseListSyntax getCases();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Case` to the node's `Cases`
  /// collection.
  /// - param element: The new `Case` to add to the node's
  ///                  `Cases` collection.
  /// - returns: A copy of the receiver with the provided `Case`
  ///            appended to its `Cases` collection.
  SwitchStmtSyntax addCase(Syntax Case);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Cases` replaced.
  /// - param newChild: The new `Cases` to replace the node's
  ///                   current `Cases`, if present.
  SwitchStmtSyntax
  withCases(llvm::Optional<SwitchCaseListSyntax> NewSwitchCaseListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightBrace();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightBrace` replaced.
  /// - param newChild: The new `RightBrace` to replace the node's
  ///                   current `RightBrace`, if present.
  SwitchStmtSyntax
  withRightBrace(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SwitchStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DoStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DoStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelColon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DoKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CatchClauses,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DoStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelName` replaced.
  /// - param newChild: The new `LabelName` to replace the node's
  ///                   current `LabelName`, if present.
  DoStmtSyntax
  withLabelName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelColon` replaced.
  /// - param newChild: The new `LabelColon` to replace the node's
  ///                   current `LabelColon`, if present.
  DoStmtSyntax
  withLabelColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getDoKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DoKeyword` replaced.
  /// - param newChild: The new `DoKeyword` to replace the node's
  ///                   current `DoKeyword`, if present.
  DoStmtSyntax
  withDoKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockSyntax getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  DoStmtSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<CatchClauseListSyntax> getCatchClauses();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `CatchClause` to the node's `CatchClauses`
  /// collection.
  /// - param element: The new `CatchClause` to add to the node's
  ///                  `CatchClauses` collection.
  /// - returns: A copy of the receiver with the provided `CatchClause`
  ///            appended to its `CatchClauses` collection.
  DoStmtSyntax addCatchClause(CatchClauseSyntax CatchClause);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CatchClauses` replaced.
  /// - param newChild: The new `CatchClauses` to replace the node's
  ///                   current `CatchClauses`, if present.
  DoStmtSyntax
  withCatchClauses(llvm::Optional<CatchClauseListSyntax> NewCatchClauseListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DoStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ReturnStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ReturnStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ReturnKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ReturnStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getReturnKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ReturnKeyword` replaced.
  /// - param newChild: The new `ReturnKeyword` to replace the node's
  ///                   current `ReturnKeyword`, if present.
  ReturnStmtSyntax
  withReturnKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<ExprSyntax> getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  ReturnStmtSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ReturnStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class YieldStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class YieldStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    YieldKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Yields,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  YieldStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getYieldKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `YieldKeyword` replaced.
  /// - param newChild: The new `YieldKeyword` to replace the node's
  ///                   current `YieldKeyword`, if present.
  YieldStmtSyntax
  withYieldKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getYields();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Yields` replaced.
  /// - param newChild: The new `Yields` to replace the node's
  ///                   current `Yields`, if present.
  YieldStmtSyntax
  withYields(llvm::Optional<Syntax> NewSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::YieldStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class YieldListSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class YieldListSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ElementList,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  YieldListSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  YieldListSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprListSyntax getElementList();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Element` to the node's `ElementList`
  /// collection.
  /// - param element: The new `Element` to add to the node's
  ///                  `ElementList` collection.
  /// - returns: A copy of the receiver with the provided `Element`
  ///            appended to its `ElementList` collection.
  YieldListSyntax addElement(ExprSyntax Element);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ElementList` replaced.
  /// - param newChild: The new `ElementList` to replace the node's
  ///                   current `ElementList`, if present.
  YieldListSyntax
  withElementList(llvm::Optional<ExprListSyntax> NewExprListSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  YieldListSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  YieldListSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::YieldList;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FallthroughStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class FallthroughStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    FallthroughKeyword,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  FallthroughStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getFallthroughKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `FallthroughKeyword` replaced.
  /// - param newChild: The new `FallthroughKeyword` to replace the node's
  ///                   current `FallthroughKeyword`, if present.
  FallthroughStmtSyntax
  withFallthroughKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::FallthroughStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class BreakStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class BreakStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    BreakKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Label,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  BreakStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getBreakKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `BreakKeyword` replaced.
  /// - param newChild: The new `BreakKeyword` to replace the node's
  ///                   current `BreakKeyword`, if present.
  BreakStmtSyntax
  withBreakKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabel();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Label` replaced.
  /// - param newChild: The new `Label` to replace the node's
  ///                   current `Label`, if present.
  BreakStmtSyntax
  withLabel(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::BreakStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ConditionElementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ConditionElementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Condition,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ConditionElementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getCondition();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Condition` replaced.
  /// - param newChild: The new `Condition` to replace the node's
  ///                   current `Condition`, if present.
  ConditionElementSyntax
  withCondition(llvm::Optional<Syntax> NewSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  ConditionElementSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ConditionElement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AvailabilityConditionSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AvailabilityConditionSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundAvailableKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AvailabilitySpec,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AvailabilityConditionSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundAvailableKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundAvailableKeyword` replaced.
  /// - param newChild: The new `PoundAvailableKeyword` to replace the node's
  ///                   current `PoundAvailableKeyword`, if present.
  AvailabilityConditionSyntax
  withPoundAvailableKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  AvailabilityConditionSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  AvailabilitySpecListSyntax getAvailabilitySpec();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `AvailabilityArgument` to the node's `AvailabilitySpec`
  /// collection.
  /// - param element: The new `AvailabilityArgument` to add to the node's
  ///                  `AvailabilitySpec` collection.
  /// - returns: A copy of the receiver with the provided `AvailabilityArgument`
  ///            appended to its `AvailabilitySpec` collection.
  AvailabilityConditionSyntax addAvailabilityArgument(AvailabilityArgumentSyntax AvailabilityArgument);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AvailabilitySpec` replaced.
  /// - param newChild: The new `AvailabilitySpec` to replace the node's
  ///                   current `AvailabilitySpec`, if present.
  AvailabilityConditionSyntax
  withAvailabilitySpec(llvm::Optional<AvailabilitySpecListSyntax> NewAvailabilitySpecListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  AvailabilityConditionSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AvailabilityCondition;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MatchingPatternConditionSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class MatchingPatternConditionSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CaseKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Pattern,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TypeAnnotation,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Initializer,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  MatchingPatternConditionSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getCaseKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CaseKeyword` replaced.
  /// - param newChild: The new `CaseKeyword` to replace the node's
  ///                   current `CaseKeyword`, if present.
  MatchingPatternConditionSyntax
  withCaseKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternSyntax getPattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Pattern` replaced.
  /// - param newChild: The new `Pattern` to replace the node's
  ///                   current `Pattern`, if present.
  MatchingPatternConditionSyntax
  withPattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeAnnotationSyntax> getTypeAnnotation();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TypeAnnotation` replaced.
  /// - param newChild: The new `TypeAnnotation` to replace the node's
  ///                   current `TypeAnnotation`, if present.
  MatchingPatternConditionSyntax
  withTypeAnnotation(llvm::Optional<TypeAnnotationSyntax> NewTypeAnnotationSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  InitializerClauseSyntax getInitializer();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Initializer` replaced.
  /// - param newChild: The new `Initializer` to replace the node's
  ///                   current `Initializer`, if present.
  MatchingPatternConditionSyntax
  withInitializer(llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::MatchingPatternCondition;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OptionalBindingConditionSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class OptionalBindingConditionSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LetOrVarKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Pattern,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TypeAnnotation,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Initializer,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  OptionalBindingConditionSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLetOrVarKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LetOrVarKeyword` replaced.
  /// - param newChild: The new `LetOrVarKeyword` to replace the node's
  ///                   current `LetOrVarKeyword`, if present.
  OptionalBindingConditionSyntax
  withLetOrVarKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternSyntax getPattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Pattern` replaced.
  /// - param newChild: The new `Pattern` to replace the node's
  ///                   current `Pattern`, if present.
  OptionalBindingConditionSyntax
  withPattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeAnnotationSyntax> getTypeAnnotation();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TypeAnnotation` replaced.
  /// - param newChild: The new `TypeAnnotation` to replace the node's
  ///                   current `TypeAnnotation`, if present.
  OptionalBindingConditionSyntax
  withTypeAnnotation(llvm::Optional<TypeAnnotationSyntax> NewTypeAnnotationSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  InitializerClauseSyntax getInitializer();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Initializer` replaced.
  /// - param newChild: The new `Initializer` to replace the node's
  ///                   current `Initializer`, if present.
  OptionalBindingConditionSyntax
  withInitializer(llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::OptionalBindingCondition;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DeclarationStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DeclarationStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Declaration,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DeclarationStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  DeclSyntax getDeclaration();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Declaration` replaced.
  /// - param newChild: The new `Declaration` to replace the node's
  ///                   current `Declaration`, if present.
  DeclarationStmtSyntax
  withDeclaration(llvm::Optional<DeclSyntax> NewDeclSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DeclarationStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ThrowStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ThrowStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ThrowKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ThrowStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getThrowKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ThrowKeyword` replaced.
  /// - param newChild: The new `ThrowKeyword` to replace the node's
  ///                   current `ThrowKeyword`, if present.
  ThrowStmtSyntax
  withThrowKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  ThrowStmtSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ThrowStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IfStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class IfStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelColon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    IfKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Conditions,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ElseKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ElseBody,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  IfStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelName` replaced.
  /// - param newChild: The new `LabelName` to replace the node's
  ///                   current `LabelName`, if present.
  IfStmtSyntax
  withLabelName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelColon` replaced.
  /// - param newChild: The new `LabelColon` to replace the node's
  ///                   current `LabelColon`, if present.
  IfStmtSyntax
  withLabelColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIfKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `IfKeyword` replaced.
  /// - param newChild: The new `IfKeyword` to replace the node's
  ///                   current `IfKeyword`, if present.
  IfStmtSyntax
  withIfKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ConditionElementListSyntax getConditions();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Condition` to the node's `Conditions`
  /// collection.
  /// - param element: The new `Condition` to add to the node's
  ///                  `Conditions` collection.
  /// - returns: A copy of the receiver with the provided `Condition`
  ///            appended to its `Conditions` collection.
  IfStmtSyntax addCondition(ConditionElementSyntax Condition);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Conditions` replaced.
  /// - param newChild: The new `Conditions` to replace the node's
  ///                   current `Conditions`, if present.
  IfStmtSyntax
  withConditions(llvm::Optional<ConditionElementListSyntax> NewConditionElementListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockSyntax getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  IfStmtSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getElseKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ElseKeyword` replaced.
  /// - param newChild: The new `ElseKeyword` to replace the node's
  ///                   current `ElseKeyword`, if present.
  IfStmtSyntax
  withElseKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<Syntax> getElseBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ElseBody` replaced.
  /// - param newChild: The new `ElseBody` to replace the node's
  ///                   current `ElseBody`, if present.
  IfStmtSyntax
  withElseBody(llvm::Optional<Syntax> NewSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::IfStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ElseIfContinuationSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ElseIfContinuationSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    IfStatement,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ElseIfContinuationSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  IfStmtSyntax getIfStatement();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `IfStatement` replaced.
  /// - param newChild: The new `IfStatement` to replace the node's
  ///                   current `IfStatement`, if present.
  ElseIfContinuationSyntax
  withIfStatement(llvm::Optional<IfStmtSyntax> NewIfStmtSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ElseIfContinuation;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ElseBlockSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ElseBlockSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ElseKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ElseBlockSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getElseKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ElseKeyword` replaced.
  /// - param newChild: The new `ElseKeyword` to replace the node's
  ///                   current `ElseKeyword`, if present.
  ElseBlockSyntax
  withElseKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockSyntax getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  ElseBlockSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ElseBlock;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SwitchCaseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SwitchCaseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    UnknownAttr,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Label,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Statements,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SwitchCaseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeSyntax> getUnknownAttr();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `UnknownAttr` replaced.
  /// - param newChild: The new `UnknownAttr` to replace the node's
  ///                   current `UnknownAttr`, if present.
  SwitchCaseSyntax
  withUnknownAttr(llvm::Optional<AttributeSyntax> NewAttributeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getLabel();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Label` replaced.
  /// - param newChild: The new `Label` to replace the node's
  ///                   current `Label`, if present.
  SwitchCaseSyntax
  withLabel(llvm::Optional<Syntax> NewSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockItemListSyntax getStatements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Statement` to the node's `Statements`
  /// collection.
  /// - param element: The new `Statement` to add to the node's
  ///                  `Statements` collection.
  /// - returns: A copy of the receiver with the provided `Statement`
  ///            appended to its `Statements` collection.
  SwitchCaseSyntax addStatement(CodeBlockItemSyntax Statement);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Statements` replaced.
  /// - param newChild: The new `Statements` to replace the node's
  ///                   current `Statements`, if present.
  SwitchCaseSyntax
  withStatements(llvm::Optional<CodeBlockItemListSyntax> NewCodeBlockItemListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SwitchCase;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SwitchDefaultLabelSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SwitchDefaultLabelSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    DefaultKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SwitchDefaultLabelSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getDefaultKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `DefaultKeyword` replaced.
  /// - param newChild: The new `DefaultKeyword` to replace the node's
  ///                   current `DefaultKeyword`, if present.
  SwitchDefaultLabelSyntax
  withDefaultKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  SwitchDefaultLabelSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SwitchDefaultLabel;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CaseItemSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class CaseItemSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Pattern,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    WhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  CaseItemSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternSyntax getPattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Pattern` replaced.
  /// - param newChild: The new `Pattern` to replace the node's
  ///                   current `Pattern`, if present.
  CaseItemSyntax
  withPattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<WhereClauseSyntax> getWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `WhereClause` replaced.
  /// - param newChild: The new `WhereClause` to replace the node's
  ///                   current `WhereClause`, if present.
  CaseItemSyntax
  withWhereClause(llvm::Optional<WhereClauseSyntax> NewWhereClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  CaseItemSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::CaseItem;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SwitchCaseLabelSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SwitchCaseLabelSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CaseKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CaseItems,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SwitchCaseLabelSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getCaseKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CaseKeyword` replaced.
  /// - param newChild: The new `CaseKeyword` to replace the node's
  ///                   current `CaseKeyword`, if present.
  SwitchCaseLabelSyntax
  withCaseKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CaseItemListSyntax getCaseItems();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `CaseItem` to the node's `CaseItems`
  /// collection.
  /// - param element: The new `CaseItem` to add to the node's
  ///                  `CaseItems` collection.
  /// - returns: A copy of the receiver with the provided `CaseItem`
  ///            appended to its `CaseItems` collection.
  SwitchCaseLabelSyntax addCaseItem(CaseItemSyntax CaseItem);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CaseItems` replaced.
  /// - param newChild: The new `CaseItems` to replace the node's
  ///                   current `CaseItems`, if present.
  SwitchCaseLabelSyntax
  withCaseItems(llvm::Optional<CaseItemListSyntax> NewCaseItemListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  SwitchCaseLabelSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SwitchCaseLabel;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CatchClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class CatchClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CatchKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Pattern,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    WhereClause,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Body,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  CatchClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getCatchKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CatchKeyword` replaced.
  /// - param newChild: The new `CatchKeyword` to replace the node's
  ///                   current `CatchKeyword`, if present.
  CatchClauseSyntax
  withCatchKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<PatternSyntax> getPattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Pattern` replaced.
  /// - param newChild: The new `Pattern` to replace the node's
  ///                   current `Pattern`, if present.
  CatchClauseSyntax
  withPattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<WhereClauseSyntax> getWhereClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `WhereClause` replaced.
  /// - param newChild: The new `WhereClause` to replace the node's
  ///                   current `WhereClause`, if present.
  CatchClauseSyntax
  withWhereClause(llvm::Optional<WhereClauseSyntax> NewWhereClauseSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CodeBlockSyntax getBody();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Body` replaced.
  /// - param newChild: The new `Body` to replace the node's
  ///                   current `Body`, if present.
  CatchClauseSyntax
  withBody(llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::CatchClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class PoundAssertStmtSyntax final : public StmtSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class PoundAssertStmtSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PoundAssert,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Condition,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Comma,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Message,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  PoundAssertStmtSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : StmtSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPoundAssert();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PoundAssert` replaced.
  /// - param newChild: The new `PoundAssert` to replace the node's
  ///                   current `PoundAssert`, if present.
  PoundAssertStmtSyntax
  withPoundAssert(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  PoundAssertStmtSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The assertion condition.
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getCondition();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Condition` replaced.
  /// - param newChild: The new `Condition` to replace the node's
  ///                   current `Condition`, if present.
  PoundAssertStmtSyntax
  withCondition(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The comma after the assertion condition.
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Comma` replaced.
  /// - param newChild: The new `Comma` to replace the node's
  ///                   current `Comma`, if present.
  PoundAssertStmtSyntax
  withComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The assertion message.
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getMessage();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Message` replaced.
  /// - param newChild: The new `Message` to replace the node's
  ///                   current `Message`, if present.
  PoundAssertStmtSyntax
  withMessage(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  PoundAssertStmtSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::PoundAssertStmt;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GenericWhereClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class GenericWhereClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    WhereKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RequirementList,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  GenericWhereClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getWhereKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `WhereKeyword` replaced.
  /// - param newChild: The new `WhereKeyword` to replace the node's
  ///                   current `WhereKeyword`, if present.
  GenericWhereClauseSyntax
  withWhereKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  GenericRequirementListSyntax getRequirementList();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Requirement` to the node's `RequirementList`
  /// collection.
  /// - param element: The new `Requirement` to add to the node's
  ///                  `RequirementList` collection.
  /// - returns: A copy of the receiver with the provided `Requirement`
  ///            appended to its `RequirementList` collection.
  GenericWhereClauseSyntax addRequirement(Syntax Requirement);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RequirementList` replaced.
  /// - param newChild: The new `RequirementList` to replace the node's
  ///                   current `RequirementList`, if present.
  GenericWhereClauseSyntax
  withRequirementList(llvm::Optional<GenericRequirementListSyntax> NewGenericRequirementListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::GenericWhereClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SameTypeRequirementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SameTypeRequirementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftTypeIdentifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    EqualityToken,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightTypeIdentifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SameTypeRequirementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getLeftTypeIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftTypeIdentifier` replaced.
  /// - param newChild: The new `LeftTypeIdentifier` to replace the node's
  ///                   current `LeftTypeIdentifier`, if present.
  SameTypeRequirementSyntax
  withLeftTypeIdentifier(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getEqualityToken();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `EqualityToken` replaced.
  /// - param newChild: The new `EqualityToken` to replace the node's
  ///                   current `EqualityToken`, if present.
  SameTypeRequirementSyntax
  withEqualityToken(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getRightTypeIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightTypeIdentifier` replaced.
  /// - param newChild: The new `RightTypeIdentifier` to replace the node's
  ///                   current `RightTypeIdentifier`, if present.
  SameTypeRequirementSyntax
  withRightTypeIdentifier(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  SameTypeRequirementSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SameTypeRequirement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GenericParameterSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class GenericParameterSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InheritedType,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  GenericParameterSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  GenericParameterSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  GenericParameterSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  GenericParameterSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  GenericParameterSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeSyntax> getInheritedType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InheritedType` replaced.
  /// - param newChild: The new `InheritedType` to replace the node's
  ///                   current `InheritedType`, if present.
  GenericParameterSyntax
  withInheritedType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  GenericParameterSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::GenericParameter;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GenericParameterClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class GenericParameterClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftAngleBracket,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericParameterList,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightAngleBracket,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  GenericParameterClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftAngleBracket();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftAngleBracket` replaced.
  /// - param newChild: The new `LeftAngleBracket` to replace the node's
  ///                   current `LeftAngleBracket`, if present.
  GenericParameterClauseSyntax
  withLeftAngleBracket(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  GenericParameterListSyntax getGenericParameterList();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `GenericParameter` to the node's `GenericParameterList`
  /// collection.
  /// - param element: The new `GenericParameter` to add to the node's
  ///                  `GenericParameterList` collection.
  /// - returns: A copy of the receiver with the provided `GenericParameter`
  ///            appended to its `GenericParameterList` collection.
  GenericParameterClauseSyntax addGenericParameter(GenericParameterSyntax GenericParameter);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericParameterList` replaced.
  /// - param newChild: The new `GenericParameterList` to replace the node's
  ///                   current `GenericParameterList`, if present.
  GenericParameterClauseSyntax
  withGenericParameterList(llvm::Optional<GenericParameterListSyntax> NewGenericParameterListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightAngleBracket();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightAngleBracket` replaced.
  /// - param newChild: The new `RightAngleBracket` to replace the node's
  ///                   current `RightAngleBracket`, if present.
  GenericParameterClauseSyntax
  withRightAngleBracket(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::GenericParameterClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ConformanceRequirementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ConformanceRequirementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftTypeIdentifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightTypeIdentifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ConformanceRequirementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getLeftTypeIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftTypeIdentifier` replaced.
  /// - param newChild: The new `LeftTypeIdentifier` to replace the node's
  ///                   current `LeftTypeIdentifier`, if present.
  ConformanceRequirementSyntax
  withLeftTypeIdentifier(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  ConformanceRequirementSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getRightTypeIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightTypeIdentifier` replaced.
  /// - param newChild: The new `RightTypeIdentifier` to replace the node's
  ///                   current `RightTypeIdentifier`, if present.
  ConformanceRequirementSyntax
  withRightTypeIdentifier(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  ConformanceRequirementSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ConformanceRequirement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SimpleTypeIdentifierSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SimpleTypeIdentifierSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericArgumentClause,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SimpleTypeIdentifierSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  SimpleTypeIdentifierSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericArgumentClauseSyntax> getGenericArgumentClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericArgumentClause` replaced.
  /// - param newChild: The new `GenericArgumentClause` to replace the node's
  ///                   current `GenericArgumentClause`, if present.
  SimpleTypeIdentifierSyntax
  withGenericArgumentClause(llvm::Optional<GenericArgumentClauseSyntax> NewGenericArgumentClauseSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SimpleTypeIdentifier;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MemberTypeIdentifierSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class MemberTypeIdentifierSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    BaseType,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Period,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    GenericArgumentClause,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  MemberTypeIdentifierSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getBaseType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `BaseType` replaced.
  /// - param newChild: The new `BaseType` to replace the node's
  ///                   current `BaseType`, if present.
  MemberTypeIdentifierSyntax
  withBaseType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPeriod();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Period` replaced.
  /// - param newChild: The new `Period` to replace the node's
  ///                   current `Period`, if present.
  MemberTypeIdentifierSyntax
  withPeriod(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  MemberTypeIdentifierSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<GenericArgumentClauseSyntax> getGenericArgumentClause();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `GenericArgumentClause` replaced.
  /// - param newChild: The new `GenericArgumentClause` to replace the node's
  ///                   current `GenericArgumentClause`, if present.
  MemberTypeIdentifierSyntax
  withGenericArgumentClause(llvm::Optional<GenericArgumentClauseSyntax> NewGenericArgumentClauseSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::MemberTypeIdentifier;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ClassRestrictionTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ClassRestrictionTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ClassKeyword,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ClassRestrictionTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getClassKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ClassKeyword` replaced.
  /// - param newChild: The new `ClassKeyword` to replace the node's
  ///                   current `ClassKeyword`, if present.
  ClassRestrictionTypeSyntax
  withClassKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ClassRestrictionType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ArrayTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ArrayTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftSquareBracket,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ElementType,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightSquareBracket,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ArrayTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftSquareBracket();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftSquareBracket` replaced.
  /// - param newChild: The new `LeftSquareBracket` to replace the node's
  ///                   current `LeftSquareBracket`, if present.
  ArrayTypeSyntax
  withLeftSquareBracket(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getElementType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ElementType` replaced.
  /// - param newChild: The new `ElementType` to replace the node's
  ///                   current `ElementType`, if present.
  ArrayTypeSyntax
  withElementType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightSquareBracket();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightSquareBracket` replaced.
  /// - param newChild: The new `RightSquareBracket` to replace the node's
  ///                   current `RightSquareBracket`, if present.
  ArrayTypeSyntax
  withRightSquareBracket(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ArrayType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class DictionaryTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class DictionaryTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftSquareBracket,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    KeyType,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ValueType,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightSquareBracket,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  DictionaryTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftSquareBracket();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftSquareBracket` replaced.
  /// - param newChild: The new `LeftSquareBracket` to replace the node's
  ///                   current `LeftSquareBracket`, if present.
  DictionaryTypeSyntax
  withLeftSquareBracket(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getKeyType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `KeyType` replaced.
  /// - param newChild: The new `KeyType` to replace the node's
  ///                   current `KeyType`, if present.
  DictionaryTypeSyntax
  withKeyType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  DictionaryTypeSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getValueType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ValueType` replaced.
  /// - param newChild: The new `ValueType` to replace the node's
  ///                   current `ValueType`, if present.
  DictionaryTypeSyntax
  withValueType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightSquareBracket();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightSquareBracket` replaced.
  /// - param newChild: The new `RightSquareBracket` to replace the node's
  ///                   current `RightSquareBracket`, if present.
  DictionaryTypeSyntax
  withRightSquareBracket(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::DictionaryType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class MetatypeTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class MetatypeTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    BaseType,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Period,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TypeOrProtocol,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  MetatypeTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getBaseType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `BaseType` replaced.
  /// - param newChild: The new `BaseType` to replace the node's
  ///                   current `BaseType`, if present.
  MetatypeTypeSyntax
  withBaseType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPeriod();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Period` replaced.
  /// - param newChild: The new `Period` to replace the node's
  ///                   current `Period`, if present.
  MetatypeTypeSyntax
  withPeriod(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getTypeOrProtocol();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TypeOrProtocol` replaced.
  /// - param newChild: The new `TypeOrProtocol` to replace the node's
  ///                   current `TypeOrProtocol`, if present.
  MetatypeTypeSyntax
  withTypeOrProtocol(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::MetatypeType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OptionalTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class OptionalTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    WrappedType,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    QuestionMark,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  OptionalTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getWrappedType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `WrappedType` replaced.
  /// - param newChild: The new `WrappedType` to replace the node's
  ///                   current `WrappedType`, if present.
  OptionalTypeSyntax
  withWrappedType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getQuestionMark();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `QuestionMark` replaced.
  /// - param newChild: The new `QuestionMark` to replace the node's
  ///                   current `QuestionMark`, if present.
  OptionalTypeSyntax
  withQuestionMark(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::OptionalType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class SomeTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class SomeTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    SomeSpecifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    BaseType,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  SomeTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getSomeSpecifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `SomeSpecifier` replaced.
  /// - param newChild: The new `SomeSpecifier` to replace the node's
  ///                   current `SomeSpecifier`, if present.
  SomeTypeSyntax
  withSomeSpecifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getBaseType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `BaseType` replaced.
  /// - param newChild: The new `BaseType` to replace the node's
  ///                   current `BaseType`, if present.
  SomeTypeSyntax
  withBaseType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::SomeType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ImplicitlyUnwrappedOptionalTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ImplicitlyUnwrappedOptionalTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    WrappedType,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ExclamationMark,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ImplicitlyUnwrappedOptionalTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getWrappedType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `WrappedType` replaced.
  /// - param newChild: The new `WrappedType` to replace the node's
  ///                   current `WrappedType`, if present.
  ImplicitlyUnwrappedOptionalTypeSyntax
  withWrappedType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getExclamationMark();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ExclamationMark` replaced.
  /// - param newChild: The new `ExclamationMark` to replace the node's
  ///                   current `ExclamationMark`, if present.
  ImplicitlyUnwrappedOptionalTypeSyntax
  withExclamationMark(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ImplicitlyUnwrappedOptionalType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CompositionTypeElementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class CompositionTypeElementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Type,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Ampersand,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  CompositionTypeElementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Type` replaced.
  /// - param newChild: The new `Type` to replace the node's
  ///                   current `Type`, if present.
  CompositionTypeElementSyntax
  withType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getAmpersand();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Ampersand` replaced.
  /// - param newChild: The new `Ampersand` to replace the node's
  ///                   current `Ampersand`, if present.
  CompositionTypeElementSyntax
  withAmpersand(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::CompositionTypeElement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class CompositionTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class CompositionTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Elements,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  CompositionTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  CompositionTypeElementListSyntax getElements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Element` to the node's `Elements`
  /// collection.
  /// - param element: The new `Element` to add to the node's
  ///                  `Elements` collection.
  /// - returns: A copy of the receiver with the provided `Element`
  ///            appended to its `Elements` collection.
  CompositionTypeSyntax addElement(CompositionTypeElementSyntax Element);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Elements` replaced.
  /// - param newChild: The new `Elements` to replace the node's
  ///                   current `Elements`, if present.
  CompositionTypeSyntax
  withElements(llvm::Optional<CompositionTypeElementListSyntax> NewCompositionTypeElementListSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::CompositionType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TupleTypeElementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TupleTypeElementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    InOut,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Name,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    SecondName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Type,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Ellipsis,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Initializer,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TupleTypeElementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getInOut();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `InOut` replaced.
  /// - param newChild: The new `InOut` to replace the node's
  ///                   current `InOut`, if present.
  TupleTypeElementSyntax
  withInOut(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Name` replaced.
  /// - param newChild: The new `Name` to replace the node's
  ///                   current `Name`, if present.
  TupleTypeElementSyntax
  withName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getSecondName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `SecondName` replaced.
  /// - param newChild: The new `SecondName` to replace the node's
  ///                   current `SecondName`, if present.
  TupleTypeElementSyntax
  withSecondName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  TupleTypeElementSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Type` replaced.
  /// - param newChild: The new `Type` to replace the node's
  ///                   current `Type`, if present.
  TupleTypeElementSyntax
  withType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getEllipsis();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Ellipsis` replaced.
  /// - param newChild: The new `Ellipsis` to replace the node's
  ///                   current `Ellipsis`, if present.
  TupleTypeElementSyntax
  withEllipsis(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<InitializerClauseSyntax> getInitializer();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Initializer` replaced.
  /// - param newChild: The new `Initializer` to replace the node's
  ///                   current `Initializer`, if present.
  TupleTypeElementSyntax
  withInitializer(llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  TupleTypeElementSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TupleTypeElement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TupleTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TupleTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Elements,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TupleTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  TupleTypeSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TupleTypeElementListSyntax getElements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Element` to the node's `Elements`
  /// collection.
  /// - param element: The new `Element` to add to the node's
  ///                  `Elements` collection.
  /// - returns: A copy of the receiver with the provided `Element`
  ///            appended to its `Elements` collection.
  TupleTypeSyntax addElement(TupleTypeElementSyntax Element);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Elements` replaced.
  /// - param newChild: The new `Elements` to replace the node's
  ///                   current `Elements`, if present.
  TupleTypeSyntax
  withElements(llvm::Optional<TupleTypeElementListSyntax> NewTupleTypeElementListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  TupleTypeSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TupleType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class FunctionTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class FunctionTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Arguments,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ThrowsOrRethrowsKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Arrow,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ReturnType,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  FunctionTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  FunctionTypeSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TupleTypeElementListSyntax getArguments();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Argument` to the node's `Arguments`
  /// collection.
  /// - param element: The new `Argument` to add to the node's
  ///                  `Arguments` collection.
  /// - returns: A copy of the receiver with the provided `Argument`
  ///            appended to its `Arguments` collection.
  FunctionTypeSyntax addArgument(TupleTypeElementSyntax Argument);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Arguments` replaced.
  /// - param newChild: The new `Arguments` to replace the node's
  ///                   current `Arguments`, if present.
  FunctionTypeSyntax
  withArguments(llvm::Optional<TupleTypeElementListSyntax> NewTupleTypeElementListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  FunctionTypeSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getThrowsOrRethrowsKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ThrowsOrRethrowsKeyword` replaced.
  /// - param newChild: The new `ThrowsOrRethrowsKeyword` to replace the node's
  ///                   current `ThrowsOrRethrowsKeyword`, if present.
  FunctionTypeSyntax
  withThrowsOrRethrowsKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getArrow();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Arrow` replaced.
  /// - param newChild: The new `Arrow` to replace the node's
  ///                   current `Arrow`, if present.
  FunctionTypeSyntax
  withArrow(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getReturnType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ReturnType` replaced.
  /// - param newChild: The new `ReturnType` to replace the node's
  ///                   current `ReturnType`, if present.
  FunctionTypeSyntax
  withReturnType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::FunctionType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AttributedTypeSyntax final : public TypeSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AttributedTypeSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Specifier,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Attributes,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    BaseType,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AttributedTypeSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : TypeSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getSpecifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Specifier` replaced.
  /// - param newChild: The new `Specifier` to replace the node's
  ///                   current `Specifier`, if present.
  AttributedTypeSyntax
  withSpecifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<AttributeListSyntax> getAttributes();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Attribute` to the node's `Attributes`
  /// collection.
  /// - param element: The new `Attribute` to add to the node's
  ///                  `Attributes` collection.
  /// - returns: A copy of the receiver with the provided `Attribute`
  ///            appended to its `Attributes` collection.
  AttributedTypeSyntax addAttribute(Syntax Attribute);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Attributes` replaced.
  /// - param newChild: The new `Attributes` to replace the node's
  ///                   current `Attributes`, if present.
  AttributedTypeSyntax
  withAttributes(llvm::Optional<AttributeListSyntax> NewAttributeListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getBaseType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `BaseType` replaced.
  /// - param newChild: The new `BaseType` to replace the node's
  ///                   current `BaseType`, if present.
  AttributedTypeSyntax
  withBaseType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AttributedType;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GenericArgumentSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class GenericArgumentSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ArgumentType,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  GenericArgumentSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getArgumentType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ArgumentType` replaced.
  /// - param newChild: The new `ArgumentType` to replace the node's
  ///                   current `ArgumentType`, if present.
  GenericArgumentSyntax
  withArgumentType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  GenericArgumentSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::GenericArgument;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class GenericArgumentClauseSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class GenericArgumentClauseSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftAngleBracket,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Arguments,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightAngleBracket,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  GenericArgumentClauseSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftAngleBracket();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftAngleBracket` replaced.
  /// - param newChild: The new `LeftAngleBracket` to replace the node's
  ///                   current `LeftAngleBracket`, if present.
  GenericArgumentClauseSyntax
  withLeftAngleBracket(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  GenericArgumentListSyntax getArguments();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Argument` to the node's `Arguments`
  /// collection.
  /// - param element: The new `Argument` to add to the node's
  ///                  `Arguments` collection.
  /// - returns: A copy of the receiver with the provided `Argument`
  ///            appended to its `Arguments` collection.
  GenericArgumentClauseSyntax addArgument(GenericArgumentSyntax Argument);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Arguments` replaced.
  /// - param newChild: The new `Arguments` to replace the node's
  ///                   current `Arguments`, if present.
  GenericArgumentClauseSyntax
  withArguments(llvm::Optional<GenericArgumentListSyntax> NewGenericArgumentListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightAngleBracket();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightAngleBracket` replaced.
  /// - param newChild: The new `RightAngleBracket` to replace the node's
  ///                   current `RightAngleBracket`, if present.
  GenericArgumentClauseSyntax
  withRightAngleBracket(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::GenericArgumentClause;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TypeAnnotationSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TypeAnnotationSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Type,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TypeAnnotationSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  TypeAnnotationSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Type` replaced.
  /// - param newChild: The new `Type` to replace the node's
  ///                   current `Type`, if present.
  TypeAnnotationSyntax
  withType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TypeAnnotation;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class EnumCasePatternSyntax final : public PatternSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class EnumCasePatternSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Type,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Period,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    CaseName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AssociatedTuple,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  EnumCasePatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : PatternSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeSyntax> getType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Type` replaced.
  /// - param newChild: The new `Type` to replace the node's
  ///                   current `Type`, if present.
  EnumCasePatternSyntax
  withType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPeriod();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Period` replaced.
  /// - param newChild: The new `Period` to replace the node's
  ///                   current `Period`, if present.
  EnumCasePatternSyntax
  withPeriod(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getCaseName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `CaseName` replaced.
  /// - param newChild: The new `CaseName` to replace the node's
  ///                   current `CaseName`, if present.
  EnumCasePatternSyntax
  withCaseName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TuplePatternSyntax> getAssociatedTuple();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AssociatedTuple` replaced.
  /// - param newChild: The new `AssociatedTuple` to replace the node's
  ///                   current `AssociatedTuple`, if present.
  EnumCasePatternSyntax
  withAssociatedTuple(llvm::Optional<TuplePatternSyntax> NewTuplePatternSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::EnumCasePattern;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IsTypePatternSyntax final : public PatternSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class IsTypePatternSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    IsKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Type,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  IsTypePatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : PatternSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIsKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `IsKeyword` replaced.
  /// - param newChild: The new `IsKeyword` to replace the node's
  ///                   current `IsKeyword`, if present.
  IsTypePatternSyntax
  withIsKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Type` replaced.
  /// - param newChild: The new `Type` to replace the node's
  ///                   current `Type`, if present.
  IsTypePatternSyntax
  withType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::IsTypePattern;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class OptionalPatternSyntax final : public PatternSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class OptionalPatternSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    SubPattern,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    QuestionMark,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  OptionalPatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : PatternSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternSyntax getSubPattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `SubPattern` replaced.
  /// - param newChild: The new `SubPattern` to replace the node's
  ///                   current `SubPattern`, if present.
  OptionalPatternSyntax
  withSubPattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getQuestionMark();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `QuestionMark` replaced.
  /// - param newChild: The new `QuestionMark` to replace the node's
  ///                   current `QuestionMark`, if present.
  OptionalPatternSyntax
  withQuestionMark(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::OptionalPattern;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class IdentifierPatternSyntax final : public PatternSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class IdentifierPatternSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Identifier,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  IdentifierPatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : PatternSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getIdentifier();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Identifier` replaced.
  /// - param newChild: The new `Identifier` to replace the node's
  ///                   current `Identifier`, if present.
  IdentifierPatternSyntax
  withIdentifier(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::IdentifierPattern;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AsTypePatternSyntax final : public PatternSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AsTypePatternSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Pattern,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    AsKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Type,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AsTypePatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : PatternSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternSyntax getPattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Pattern` replaced.
  /// - param newChild: The new `Pattern` to replace the node's
  ///                   current `Pattern`, if present.
  AsTypePatternSyntax
  withPattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getAsKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `AsKeyword` replaced.
  /// - param newChild: The new `AsKeyword` to replace the node's
  ///                   current `AsKeyword`, if present.
  AsTypePatternSyntax
  withAsKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TypeSyntax getType();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Type` replaced.
  /// - param newChild: The new `Type` to replace the node's
  ///                   current `Type`, if present.
  AsTypePatternSyntax
  withType(llvm::Optional<TypeSyntax> NewTypeSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AsTypePattern;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TuplePatternSyntax final : public PatternSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TuplePatternSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LeftParen,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Elements,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    RightParen,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TuplePatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : PatternSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLeftParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LeftParen` replaced.
  /// - param newChild: The new `LeftParen` to replace the node's
  ///                   current `LeftParen`, if present.
  TuplePatternSyntax
  withLeftParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TuplePatternElementListSyntax getElements();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 96 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// Adds the provided `Element` to the node's `Elements`
  /// collection.
  /// - param element: The new `Element` to add to the node's
  ///                  `Elements` collection.
  /// - returns: A copy of the receiver with the provided `Element`
  ///            appended to its `Elements` collection.
  TuplePatternSyntax addElement(TuplePatternElementSyntax Element);
#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Elements` replaced.
  /// - param newChild: The new `Elements` to replace the node's
  ///                   current `Elements`, if present.
  TuplePatternSyntax
  withElements(llvm::Optional<TuplePatternElementListSyntax> NewTuplePatternElementListSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getRightParen();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `RightParen` replaced.
  /// - param newChild: The new `RightParen` to replace the node's
  ///                   current `RightParen`, if present.
  TuplePatternSyntax
  withRightParen(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TuplePattern;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class WildcardPatternSyntax final : public PatternSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class WildcardPatternSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Wildcard,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TypeAnnotation,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  WildcardPatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : PatternSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getWildcard();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Wildcard` replaced.
  /// - param newChild: The new `Wildcard` to replace the node's
  ///                   current `Wildcard`, if present.
  WildcardPatternSyntax
  withWildcard(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TypeAnnotationSyntax> getTypeAnnotation();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TypeAnnotation` replaced.
  /// - param newChild: The new `TypeAnnotation` to replace the node's
  ///                   current `TypeAnnotation`, if present.
  WildcardPatternSyntax
  withTypeAnnotation(llvm::Optional<TypeAnnotationSyntax> NewTypeAnnotationSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::WildcardPattern;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class TuplePatternElementSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class TuplePatternElementSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelName,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LabelColon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Pattern,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  TuplePatternElementSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelName();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelName` replaced.
  /// - param newChild: The new `LabelName` to replace the node's
  ///                   current `LabelName`, if present.
  TuplePatternElementSyntax
  withLabelName(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getLabelColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LabelColon` replaced.
  /// - param newChild: The new `LabelColon` to replace the node's
  ///                   current `LabelColon`, if present.
  TuplePatternElementSyntax
  withLabelColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternSyntax getPattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Pattern` replaced.
  /// - param newChild: The new `Pattern` to replace the node's
  ///                   current `Pattern`, if present.
  TuplePatternElementSyntax
  withPattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  TuplePatternElementSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::TuplePatternElement;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ExpressionPatternSyntax final : public PatternSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ExpressionPatternSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Expression,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ExpressionPatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : PatternSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  ExprSyntax getExpression();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Expression` replaced.
  /// - param newChild: The new `Expression` to replace the node's
  ///                   current `Expression`, if present.
  ExpressionPatternSyntax
  withExpression(llvm::Optional<ExprSyntax> NewExprSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ExpressionPattern;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class ValueBindingPatternSyntax final : public PatternSyntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class ValueBindingPatternSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    LetOrVarKeyword,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    ValuePattern,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  ValueBindingPatternSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : PatternSyntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLetOrVarKeyword();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `LetOrVarKeyword` replaced.
  /// - param newChild: The new `LetOrVarKeyword` to replace the node's
  ///                   current `LetOrVarKeyword`, if present.
  ValueBindingPatternSyntax
  withLetOrVarKeyword(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  PatternSyntax getValuePattern();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `ValuePattern` replaced.
  /// - param newChild: The new `ValuePattern` to replace the node's
  ///                   current `ValuePattern`, if present.
  ValueBindingPatternSyntax
  withValuePattern(llvm::Optional<PatternSyntax> NewPatternSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::ValueBindingPattern;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A single argument to an `@available` argument like `*`, `iOS 10.1`,          or `message: "This has been deprecated"`.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AvailabilityArgumentSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AvailabilityArgumentSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Entry,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    TrailingComma,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AvailabilityArgumentSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The actual argument
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getEntry();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Entry` replaced.
  /// - param newChild: The new `Entry` to replace the node's
  ///                   current `Entry`, if present.
  AvailabilityArgumentSyntax
  withEntry(llvm::Optional<Syntax> NewSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// A trailing comma if the argument is followed by another                    argument
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getTrailingComma();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `TrailingComma` replaced.
  /// - param newChild: The new `TrailingComma` to replace the node's
  ///                   current `TrailingComma`, if present.
  AvailabilityArgumentSyntax
  withTrailingComma(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AvailabilityArgument;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A argument to an `@available` attribute that consists of a label and          a value, e.g. `message: "This has been deprecated"`.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AvailabilityLabeledArgumentSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AvailabilityLabeledArgumentSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Label,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Colon,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Value,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AvailabilityLabeledArgumentSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The label of the argument
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getLabel();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Label` replaced.
  /// - param newChild: The new `Label` to replace the node's
  ///                   current `Label`, if present.
  AvailabilityLabeledArgumentSyntax
  withLabel(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The colon separating label and value
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getColon();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Colon` replaced.
  /// - param newChild: The new `Colon` to replace the node's
  ///                   current `Colon`, if present.
  AvailabilityLabeledArgumentSyntax
  withColon(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The value of this labeled argument
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getValue();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Value` replaced.
  /// - param newChild: The new `Value` to replace the node's
  ///                   current `Value`, if present.
  AvailabilityLabeledArgumentSyntax
  withValue(llvm::Optional<Syntax> NewSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AvailabilityLabeledArgument;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// An argument to `@available` that restricts the availability on a          certain platform to a version, e.g. `iOS 10` or `swift 3.4`.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class AvailabilityVersionRestrictionSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class AvailabilityVersionRestrictionSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Platform,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    Version,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  AvailabilityVersionRestrictionSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The name of the OS on which the availability should be                    restricted or 'swift' if the availability should be                    restricted based on a Swift version.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  TokenSyntax getPlatform();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Platform` replaced.
  /// - param newChild: The new `Platform` to replace the node's
  ///                   current `Platform`, if present.
  AvailabilityVersionRestrictionSyntax
  withPlatform(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  VersionTupleSyntax getVersion();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `Version` replaced.
  /// - param newChild: The new `Version` to replace the node's
  ///                   current `Version`, if present.
  AvailabilityVersionRestrictionSyntax
  withVersion(llvm::Optional<VersionTupleSyntax> NewVersionTupleSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::AvailabilityVersionRestriction;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// A version number of the form major.minor.patch in which the minor          and patch part may be ommited.
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
/// 
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
class VersionTupleSyntax final : public Syntax {
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      friend class VersionTupleSyntaxBuilder;
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  void validate() const;
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

public:
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  enum Cursor : uint32_t {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    MajorMinor,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PatchPeriod,
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    PatchVersion,
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  };
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  VersionTupleSyntax(const RC<SyntaxData> Root, const SyntaxData *Data)
    : Syntax(Root, Data) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
      this->validate();
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    }

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// In case the version consists only of the major version, an                    integer literal that specifies the major version. In case                    the version consists of major and minor version number, a                    floating literal in which the decimal part is interpreted                    as the minor version.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  Syntax getMajorMinor();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `MajorMinor` replaced.
  /// - param newChild: The new `MajorMinor` to replace the node's
  ///                   current `MajorMinor`, if present.
  VersionTupleSyntax
  withMajorMinor(llvm::Optional<Syntax> NewSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// If the version contains a patch number, the period                    separating the minor from the patch number.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getPatchPeriod();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PatchPeriod` replaced.
  /// - param newChild: The new `PatchPeriod` to replace the node's
  ///                   current `PatchPeriod`, if present.
  VersionTupleSyntax
  withPatchPeriod(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// The patch version if specified.
#line 81 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  /// 
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  llvm::Optional<TokenSyntax> getPatchVersion();
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

#line 104 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  /// Returns a copy of the receiver with its `PatchVersion` replaced.
  /// - param newChild: The new `PatchVersion` to replace the node's
  ///                   current `PatchVersion`, if present.
  VersionTupleSyntax
  withPatchVersion(llvm::Optional<TokenSyntax> NewTokenSyntax);

#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

  static bool kindof(SyntaxKind Kind) {
#line 117 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
    return Kind == SyntaxKind::VersionTuple;
#line 119 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"
  }

  static bool classof(const Syntax *S) {
    return kindof(S->getKind());
  }
};

#line 128 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxNodes.h.gyb"

/// Calculating an identifier for all syntax nodes' structures for verification
/// purposes.
const char* getSyntaxStructureVersioningIdentifier();
}
}

#endif // SWIFT_SYNTAX_NODES_H
