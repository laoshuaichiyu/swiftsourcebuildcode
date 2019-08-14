#line 6 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
//// Automatically Generated From ParsedSyntaxNodes.h.gyb.
//// Do Not Edit Directly!
//===--- ParsedSyntaxNodes.h - Parsed Syntax Node definitions -------------===//
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

#ifndef SWIFT_PARSE_PARSEDSYNTAXNODES_H
#define SWIFT_PARSE_PARSEDSYNTAXNODES_H

#include "swift/Parse/ParsedSyntax.h"
#include "swift/Syntax/SyntaxKind.h"

namespace swift {

#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnknownDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnknownExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnknownStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnknownTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnknownPatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCodeBlockItemSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCodeBlockSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedInOutExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundColumnExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTryExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclNameArgumentSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclNameArgumentsSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIdentifierExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSuperRefExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedNilLiteralExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDiscardAssignmentExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAssignmentExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSequenceExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundLineExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundFileExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundFunctionExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundDsohandleExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSymbolicReferenceExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrefixOperatorExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedBinaryOperatorExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedArrowExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFloatLiteralExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTupleExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedArrayExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDictionaryExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionCallArgumentSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTupleElementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedArrayElementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDictionaryElementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIntegerLiteralExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedBooleanLiteralExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTernaryExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMemberAccessExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIsExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAsExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypeExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClosureCaptureItemSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClosureCaptureSignatureSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClosureParamSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClosureSignatureSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClosureExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnresolvedPatternExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionCallExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSubscriptExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOptionalChainingExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedForcedValueExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPostfixUnaryExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSpecializeExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedStringSegmentSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedExpressionSegmentSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedStringLiteralExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedKeyPathExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedKeyPathBaseExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedObjcNamePieceSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedObjcKeyPathExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedObjcSelectorExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedEditorPlaceholderExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedObjectLiteralExprSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypeInitializerClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypealiasDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAssociatedtypeDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedParameterClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedReturnClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionSignatureSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIfConfigClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIfConfigDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundErrorDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundWarningDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundSourceLocationSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundSourceLocationArgsSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclModifierSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedInheritedTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypeInheritanceClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClassDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedStructDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedProtocolDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedExtensionDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMemberDeclBlockSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMemberDeclListItemSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSourceFileSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedInitializerClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionParameterSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedInitializerDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeinitializerDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSubscriptDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAccessLevelModifierSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAccessPathComponentSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedImportDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAccessorParameterSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAccessorDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAccessorBlockSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPatternBindingSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedVariableDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedEnumCaseElementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedEnumCaseDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedEnumDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOperatorDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOperatorPrecedenceAndTypesSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrecedenceGroupDeclSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrecedenceGroupRelationSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrecedenceGroupNameElementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrecedenceGroupAssignmentSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrecedenceGroupAssociativitySyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCustomAttributeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAttributeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedLabeledSpecializeEntrySyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedNamedAttributeStringArgumentSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclNameSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedImplementsAttributeArgumentsSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedObjCSelectorPieceSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedContinueStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedWhileStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeferStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedExpressionStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedRepeatWhileStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGuardStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedWhereClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedForInStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSwitchStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDoStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedReturnStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedYieldStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedYieldListSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFallthroughStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedBreakStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedConditionElementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAvailabilityConditionSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMatchingPatternConditionSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOptionalBindingConditionSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclarationStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedThrowStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIfStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedElseIfContinuationSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedElseBlockSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSwitchCaseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSwitchDefaultLabelSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCaseItemSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSwitchCaseLabelSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCatchClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundAssertStmtSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGenericWhereClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSameTypeRequirementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGenericParameterSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGenericParameterClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedConformanceRequirementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSimpleTypeIdentifierSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMemberTypeIdentifierSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClassRestrictionTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedArrayTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDictionaryTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMetatypeTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOptionalTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSomeTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedImplicitlyUnwrappedOptionalTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCompositionTypeElementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCompositionTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTupleTypeElementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTupleTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAttributedTypeSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGenericArgumentSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGenericArgumentClauseSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypeAnnotationSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedEnumCasePatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIsTypePatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOptionalPatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIdentifierPatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAsTypePatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTuplePatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedWildcardPatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTuplePatternElementSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedExpressionPatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedValueBindingPatternSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAvailabilityArgumentSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAvailabilityLabeledArgumentSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAvailabilityVersionRestrictionSyntax;
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedVersionTupleSyntax;
#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedCodeBlockItemListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::CodeBlockItemList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedFunctionCallArgumentListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::FunctionCallArgumentList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedTupleElementListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::TupleElementList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedArrayElementListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::ArrayElementList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedDictionaryElementListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::DictionaryElementList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedStringLiteralSegmentsSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::StringLiteralSegments>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedDeclNameArgumentListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::DeclNameArgumentList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedExprListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::ExprList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedClosureCaptureItemListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::ClosureCaptureItemList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedClosureParamListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::ClosureParamList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedObjcNameSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::ObjcName>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedFunctionParameterListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::FunctionParameterList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedIfConfigClauseListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::IfConfigClauseList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedInheritedTypeListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::InheritedTypeList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedMemberDeclListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::MemberDeclList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedModifierListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::ModifierList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedAccessPathSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::AccessPath>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedAccessorListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::AccessorList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedPatternBindingListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::PatternBindingList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedEnumCaseElementListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::EnumCaseElementList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedIdentifierListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::IdentifierList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedPrecedenceGroupAttributeListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::PrecedenceGroupAttributeList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedPrecedenceGroupNameListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::PrecedenceGroupNameList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedTokenListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::TokenList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedNonEmptyTokenListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::NonEmptyTokenList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedAttributeListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::AttributeList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedSpecializeAttributeSpecListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::SpecializeAttributeSpecList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedObjCSelectorSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::ObjCSelector>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedSwitchCaseListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::SwitchCaseList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedCatchClauseListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::CatchClauseList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedCaseItemListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::CaseItemList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedConditionElementListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::ConditionElementList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedGenericRequirementListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::GenericRequirementList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedGenericParameterListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::GenericParameterList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedCompositionTypeElementListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::CompositionTypeElementList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedTupleTypeElementListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::TupleTypeElementList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedGenericArgumentListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::GenericArgumentList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedTuplePatternElementListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::TuplePatternElementList>;
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
using ParsedAvailabilitySpecListSyntax =
  ParsedSyntaxCollection<syntax::SyntaxKind::AvailabilitySpecList>;
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclSyntax  : public ParsedSyntax {
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 73 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return isDeclKind(Kind);
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedExprSyntax  : public ParsedSyntax {
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 73 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return isExprKind(Kind);
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedStmtSyntax  : public ParsedSyntax {
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 73 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return isStmtKind(Kind);
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypeSyntax  : public ParsedSyntax {
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 73 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return isTypeKind(Kind);
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPatternSyntax  : public ParsedSyntax {
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 73 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return isPatternKind(Kind);
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnknownDeclSyntax final : public ParsedDeclSyntax {
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedUnknownDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::UnknownDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnknownExprSyntax final : public ParsedExprSyntax {
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedUnknownExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::UnknownExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnknownStmtSyntax final : public ParsedStmtSyntax {
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedUnknownStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::UnknownStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnknownTypeSyntax final : public ParsedTypeSyntax {
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedUnknownTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::UnknownType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnknownPatternSyntax final : public ParsedPatternSyntax {
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedUnknownPatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedPatternSyntax(std::move(rawNode)) {
  }

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::UnknownPattern;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A CodeBlockItem is any Syntax node that appears on its own line inside
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// a CodeBlock.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCodeBlockItemSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedCodeBlockItemSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedCodeBlockItemSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The underlying node inside the code block.
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredItem();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// If present, the trailing semicolon at the end of the item.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredSemicolon();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedSyntax> getDeferredErrorTokens();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::CodeBlockItem;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCodeBlockSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedCodeBlockSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedCodeBlockSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftBrace();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockItemListSyntax getDeferredStatements();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightBrace();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::CodeBlock;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedInOutExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedInOutExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedInOutExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAmpersand();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::InOutExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundColumnExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPoundColumnExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPoundColumnExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundColumn();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PoundColumnExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTryExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTryExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTryExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredTryKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredQuestionOrExclamationMark();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TryExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclNameArgumentSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDeclNameArgumentSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDeclNameArgumentSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DeclNameArgument;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclNameArgumentsSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDeclNameArgumentsSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDeclNameArgumentsSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedDeclNameArgumentListSyntax getDeferredArguments();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DeclNameArguments;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIdentifierExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedIdentifierExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedIdentifierExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedDeclNameArgumentsSyntax> getDeferredDeclNameArguments();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::IdentifierExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSuperRefExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSuperRefExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSuperRefExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredSuperKeyword();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SuperRefExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedNilLiteralExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedNilLiteralExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedNilLiteralExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredNilKeyword();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::NilLiteralExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDiscardAssignmentExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDiscardAssignmentExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDiscardAssignmentExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredWildcard();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DiscardAssignmentExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAssignmentExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAssignmentExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAssignmentExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAssignToken();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AssignmentExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSequenceExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSequenceExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSequenceExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprListSyntax getDeferredElements();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SequenceExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundLineExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPoundLineExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPoundLineExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundLine();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PoundLineExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundFileExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPoundFileExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPoundFileExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundFile();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PoundFileExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundFunctionExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPoundFunctionExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPoundFunctionExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundFunction();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PoundFunctionExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundDsohandleExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPoundDsohandleExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPoundDsohandleExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundDsohandle();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PoundDsohandleExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSymbolicReferenceExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSymbolicReferenceExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSymbolicReferenceExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericArgumentClauseSyntax> getDeferredGenericArgumentClause();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SymbolicReferenceExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrefixOperatorExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPrefixOperatorExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPrefixOperatorExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredOperatorToken();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredPostfixExpression();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PrefixOperatorExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedBinaryOperatorExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedBinaryOperatorExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedBinaryOperatorExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredOperatorToken();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::BinaryOperatorExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedArrowExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedArrowExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedArrowExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredThrowsToken();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredArrowToken();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ArrowExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFloatLiteralExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedFloatLiteralExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedFloatLiteralExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredFloatingDigits();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::FloatLiteralExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTupleExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTupleExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTupleExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTupleElementListSyntax getDeferredElementList();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TupleExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedArrayExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedArrayExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedArrayExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftSquare();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedArrayElementListSyntax getDeferredElements();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightSquare();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ArrayExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDictionaryExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDictionaryExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDictionaryExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftSquare();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredContent();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightSquare();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DictionaryExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionCallArgumentSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedFunctionCallArgumentSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedFunctionCallArgumentSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabel();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::FunctionCallArgument;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTupleElementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTupleElementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTupleElementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabel();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TupleElement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedArrayElementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedArrayElementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedArrayElementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ArrayElement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDictionaryElementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDictionaryElementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDictionaryElementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredKeyExpression();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredValueExpression();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DictionaryElement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIntegerLiteralExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedIntegerLiteralExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedIntegerLiteralExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredDigits();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::IntegerLiteralExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedBooleanLiteralExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedBooleanLiteralExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedBooleanLiteralExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredBooleanLiteral();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::BooleanLiteralExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTernaryExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTernaryExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTernaryExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredConditionExpression();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredQuestionMark();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredFirstChoice();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColonMark();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredSecondChoice();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TernaryExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMemberAccessExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedMemberAccessExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedMemberAccessExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedExprSyntax> getDeferredBase();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredDot();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedDeclNameArgumentsSyntax> getDeferredDeclNameArguments();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::MemberAccessExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIsExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedIsExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedIsExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIsTok();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredTypeName();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::IsExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAsExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAsExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAsExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAsTok();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredQuestionOrExclamationMark();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredTypeName();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AsExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypeExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTypeExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTypeExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredType();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TypeExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClosureCaptureItemSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedClosureCaptureItemSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedClosureCaptureItemSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenListSyntax> getDeferredSpecifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredAssignToken();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ClosureCaptureItem;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClosureCaptureSignatureSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedClosureCaptureSignatureSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedClosureCaptureSignatureSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftSquare();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedClosureCaptureItemListSyntax> getDeferredItems();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightSquare();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ClosureCaptureSignature;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClosureParamSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedClosureParamSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedClosureParamSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ClosureParam;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClosureSignatureSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedClosureSignatureSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedClosureSignatureSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedClosureCaptureSignatureSyntax> getDeferredCapture();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedSyntax> getDeferredInput();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredThrowsTok();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedReturnClauseSyntax> getDeferredOutput();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredInTok();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ClosureSignature;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClosureExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedClosureExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedClosureExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftBrace();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedClosureSignatureSyntax> getDeferredSignature();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockItemListSyntax getDeferredStatements();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightBrace();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ClosureExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedUnresolvedPatternExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedUnresolvedPatternExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedUnresolvedPatternExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternSyntax getDeferredPattern();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::UnresolvedPatternExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionCallExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedFunctionCallExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedFunctionCallExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredCalledExpression();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedFunctionCallArgumentListSyntax getDeferredArgumentList();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredRightParen();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedClosureExprSyntax> getDeferredTrailingClosure();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::FunctionCallExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSubscriptExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSubscriptExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSubscriptExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredCalledExpression();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftBracket();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedFunctionCallArgumentListSyntax getDeferredArgumentList();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightBracket();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedClosureExprSyntax> getDeferredTrailingClosure();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SubscriptExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOptionalChainingExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedOptionalChainingExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedOptionalChainingExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredQuestionMark();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::OptionalChainingExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedForcedValueExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedForcedValueExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedForcedValueExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredExclamationMark();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ForcedValueExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPostfixUnaryExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPostfixUnaryExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPostfixUnaryExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredOperatorToken();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PostfixUnaryExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSpecializeExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSpecializeExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSpecializeExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedGenericArgumentClauseSyntax getDeferredGenericArgumentClause();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SpecializeExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedStringSegmentSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedStringSegmentSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedStringSegmentSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredContent();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::StringSegment;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedExpressionSegmentSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedExpressionSegmentSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedExpressionSegmentSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredBackslash();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredDelimiter();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedFunctionCallArgumentListSyntax getDeferredExpressions();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ExpressionSegment;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedStringLiteralExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedStringLiteralExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedStringLiteralExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredOpenDelimiter();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredOpenQuote();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedStringLiteralSegmentsSyntax getDeferredSegments();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredCloseQuote();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredCloseDelimiter();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::StringLiteralExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedKeyPathExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedKeyPathExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedKeyPathExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredBackslash();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedExprSyntax> getDeferredRootExpr();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::KeyPathExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedKeyPathBaseExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedKeyPathBaseExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedKeyPathBaseExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPeriod();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::KeyPathBaseExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedObjcNamePieceSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedObjcNamePieceSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedObjcNamePieceSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredDot();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ObjcNamePiece;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedObjcKeyPathExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedObjcKeyPathExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedObjcKeyPathExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredKeyPath();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedObjcNameSyntax getDeferredName();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ObjcKeyPathExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedObjcSelectorExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedObjcSelectorExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedObjcSelectorExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundSelector();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredKind();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredName();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ObjcSelectorExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedEditorPlaceholderExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedEditorPlaceholderExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedEditorPlaceholderExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::EditorPlaceholderExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedObjectLiteralExprSyntax final : public ParsedExprSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedObjectLiteralExprSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedObjectLiteralExprSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedExprSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedFunctionCallArgumentListSyntax getDeferredArguments();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ObjectLiteralExpr;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypeInitializerClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTypeInitializerClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTypeInitializerClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredEqual();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredValue();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TypeInitializerClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypealiasDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTypealiasDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTypealiasDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredTypealiasKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericParameterClauseSyntax> getDeferredGenericParameterClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeInitializerClauseSyntax> getDeferredInitializer();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericWhereClauseSyntax> getDeferredGenericWhereClause();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TypealiasDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAssociatedtypeDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAssociatedtypeDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAssociatedtypeDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAssociatedtypeKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeInheritanceClauseSyntax> getDeferredInheritanceClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeInitializerClauseSyntax> getDeferredInitializer();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericWhereClauseSyntax> getDeferredGenericWhereClause();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AssociatedtypeDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedParameterClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedParameterClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedParameterClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedFunctionParameterListSyntax getDeferredParameterList();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ParameterClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedReturnClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedReturnClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedReturnClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredArrow();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredReturnType();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ReturnClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionSignatureSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedFunctionSignatureSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedFunctionSignatureSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedParameterClauseSyntax getDeferredInput();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredThrowsOrRethrowsKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedReturnClauseSyntax> getDeferredOutput();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::FunctionSignature;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIfConfigClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedIfConfigClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedIfConfigClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedExprSyntax> getDeferredCondition();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredElements();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::IfConfigClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIfConfigDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedIfConfigDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedIfConfigDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedIfConfigClauseListSyntax getDeferredClauses();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundEndif();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::IfConfigDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundErrorDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPoundErrorDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPoundErrorDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundError();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedStringLiteralExprSyntax getDeferredMessage();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PoundErrorDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundWarningDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPoundWarningDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPoundWarningDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundWarning();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedStringLiteralExprSyntax getDeferredMessage();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PoundWarningDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundSourceLocationSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPoundSourceLocationSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPoundSourceLocationSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundSourceLocation();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedPoundSourceLocationArgsSyntax> getDeferredArgs();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PoundSourceLocation;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundSourceLocationArgsSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPoundSourceLocationArgsSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPoundSourceLocationArgsSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredFileArgLabel();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredFileArgColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredFileName();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredComma();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLineArgLabel();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLineArgColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLineNumber();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PoundSourceLocationArgs;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclModifierSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDeclModifierSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDeclModifierSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredDetailLeftParen();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredDetail();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredDetailRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DeclModifier;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedInheritedTypeSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedInheritedTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedInheritedTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredTypeName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::InheritedType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypeInheritanceClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTypeInheritanceClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTypeInheritanceClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedInheritedTypeListSyntax getDeferredInheritedTypeCollection();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TypeInheritanceClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClassDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedClassDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedClassDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredClassKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericParameterClauseSyntax> getDeferredGenericParameterClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeInheritanceClauseSyntax> getDeferredInheritanceClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericWhereClauseSyntax> getDeferredGenericWhereClause();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedMemberDeclBlockSyntax getDeferredMembers();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ClassDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedStructDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedStructDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedStructDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredStructKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericParameterClauseSyntax> getDeferredGenericParameterClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeInheritanceClauseSyntax> getDeferredInheritanceClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericWhereClauseSyntax> getDeferredGenericWhereClause();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedMemberDeclBlockSyntax getDeferredMembers();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::StructDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedProtocolDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedProtocolDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedProtocolDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredProtocolKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeInheritanceClauseSyntax> getDeferredInheritanceClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericWhereClauseSyntax> getDeferredGenericWhereClause();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedMemberDeclBlockSyntax getDeferredMembers();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ProtocolDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedExtensionDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedExtensionDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedExtensionDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredExtensionKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredExtendedType();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeInheritanceClauseSyntax> getDeferredInheritanceClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericWhereClauseSyntax> getDeferredGenericWhereClause();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedMemberDeclBlockSyntax getDeferredMembers();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ExtensionDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMemberDeclBlockSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedMemberDeclBlockSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedMemberDeclBlockSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftBrace();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedMemberDeclListSyntax getDeferredMembers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightBrace();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::MemberDeclBlock;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A member declaration of a type consisting of a declaration and an          optional semicolon;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMemberDeclListItemSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedMemberDeclListItemSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedMemberDeclListItemSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The declaration of the type member.
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedDeclSyntax getDeferredDecl();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// An optional trailing semicolon.
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredSemicolon();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::MemberDeclListItem;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSourceFileSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSourceFileSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSourceFileSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockItemListSyntax getDeferredStatements();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredEOFToken();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SourceFile;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedInitializerClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedInitializerClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedInitializerClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredEqual();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredValue();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::InitializerClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionParameterSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedFunctionParameterSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedFunctionParameterSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredFirstName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredSecondName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredColon();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeSyntax> getDeferredType();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredEllipsis();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedInitializerClauseSyntax> getDeferredDefaultArgument();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::FunctionParameter;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedFunctionDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedFunctionDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredFuncKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericParameterClauseSyntax> getDeferredGenericParameterClause();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedFunctionSignatureSyntax getDeferredSignature();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericWhereClauseSyntax> getDeferredGenericWhereClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedCodeBlockSyntax> getDeferredBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::FunctionDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedInitializerDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedInitializerDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedInitializerDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredInitKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredOptionalMark();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericParameterClauseSyntax> getDeferredGenericParameterClause();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedParameterClauseSyntax getDeferredParameters();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredThrowsOrRethrowsKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericWhereClauseSyntax> getDeferredGenericWhereClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedCodeBlockSyntax> getDeferredBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::InitializerDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeinitializerDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDeinitializerDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDeinitializerDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredDeinitKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockSyntax getDeferredBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DeinitializerDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSubscriptDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSubscriptDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSubscriptDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredSubscriptKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericParameterClauseSyntax> getDeferredGenericParameterClause();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedParameterClauseSyntax getDeferredIndices();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedReturnClauseSyntax getDeferredResult();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericWhereClauseSyntax> getDeferredGenericWhereClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedSyntax> getDeferredAccessor();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SubscriptDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAccessLevelModifierSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAccessLevelModifierSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAccessLevelModifierSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLeftParen();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredModifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AccessLevelModifier;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAccessPathComponentSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAccessPathComponentSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAccessPathComponentSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingDot();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AccessPathComponent;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedImportDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedImportDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedImportDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredImportTok();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredImportKind();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedAccessPathSyntax getDeferredPath();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ImportDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAccessorParameterSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAccessorParameterSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAccessorParameterSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AccessorParameter;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAccessorDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAccessorDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAccessorDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedDeclModifierSyntax> getDeferredModifier();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAccessorKind();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAccessorParameterSyntax> getDeferredParameter();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedCodeBlockSyntax> getDeferredBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AccessorDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAccessorBlockSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAccessorBlockSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAccessorBlockSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftBrace();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedAccessorListSyntax getDeferredAccessors();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightBrace();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AccessorBlock;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPatternBindingSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPatternBindingSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPatternBindingSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternSyntax getDeferredPattern();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeAnnotationSyntax> getDeferredTypeAnnotation();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedInitializerClauseSyntax> getDeferredInitializer();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedSyntax> getDeferredAccessor();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PatternBinding;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedVariableDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedVariableDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedVariableDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLetOrVarKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternBindingListSyntax getDeferredBindings();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::VariableDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// An element of an enum case, containing the name of the case and,          optionally, either associated values or an assignment to a raw value.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedEnumCaseElementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedEnumCaseElementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedEnumCaseElementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The name of this case.
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The set of associated values of the case.
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedParameterClauseSyntax> getDeferredAssociatedValue();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The raw value of this enum element, if present.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedInitializerClauseSyntax> getDeferredRawValue();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The trailing comma of this element, if the case has                    multiple elements.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::EnumCaseElement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A `case` declaration of a Swift `enum`. It can have 1 or more          `EnumCaseElement`s inside, each declaring a different case of the
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// enum.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedEnumCaseDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedEnumCaseDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedEnumCaseDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The attributes applied to the case declaration.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The declaration modifiers applied to the case declaration.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The `case` keyword for this case.
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredCaseKeyword();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The elements this case declares.
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedEnumCaseElementListSyntax getDeferredElements();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::EnumCaseDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A Swift `enum` declaration.
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedEnumDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedEnumDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedEnumDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The attributes applied to the enum declaration.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The declaration modifiers applied to the enum declaration.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The `enum` keyword for this declaration.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredEnumKeyword();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The name of this enum.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The generic parameters, if any, for this enum.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericParameterClauseSyntax> getDeferredGenericParameters();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The inheritance clause describing conformances or raw                    values for this enum.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeInheritanceClauseSyntax> getDeferredInheritanceClause();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The `where` clause that applies to the generic parameters of                    this enum.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericWhereClauseSyntax> getDeferredGenericWhereClause();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The cases and other members of this enum.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedMemberDeclBlockSyntax getDeferredMembers();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::EnumDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A Swift `operator` declaration.
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOperatorDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedOperatorDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedOperatorDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The attributes applied to the 'operator' declaration.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The declaration modifiers applied to the 'operator'
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// declaration.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredOperatorKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// Optionally specify a precedence group and designated types.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedOperatorPrecedenceAndTypesSyntax> getDeferredOperatorPrecedenceAndTypes();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::OperatorDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A clause to specify precedence group in infix operator declarations, and designated types in any operator declaration.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOperatorPrecedenceAndTypesSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedOperatorPrecedenceAndTypesSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedOperatorPrecedenceAndTypesSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The precedence group and designated types for this operator
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedIdentifierListSyntax getDeferredPrecedenceGroupAndDesignatedTypes();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::OperatorPrecedenceAndTypes;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A Swift `precedencegroup` declaration.
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrecedenceGroupDeclSyntax final : public ParsedDeclSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPrecedenceGroupDeclSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPrecedenceGroupDeclSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedDeclSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The attributes applied to the 'precedencegroup' declaration.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The declaration modifiers applied to the 'precedencegroup'
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// declaration.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedModifierListSyntax> getDeferredModifiers();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPrecedencegroupKeyword();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The name of this precedence group.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftBrace();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The characteristics of this precedence group.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPrecedenceGroupAttributeListSyntax getDeferredGroupAttributes();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightBrace();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PrecedenceGroupDecl;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// Specify the new precedence group's relation to existing precedence
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// groups.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrecedenceGroupRelationSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPrecedenceGroupRelationSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPrecedenceGroupRelationSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The relation to specified other precedence groups.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredHigherThanOrLowerThan();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The name of other precedence group to which this precedence
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// group relates.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPrecedenceGroupNameListSyntax getDeferredOtherNames();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PrecedenceGroupRelation;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrecedenceGroupNameElementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPrecedenceGroupNameElementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPrecedenceGroupNameElementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PrecedenceGroupNameElement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// Specifies the precedence of an operator when used in an operation
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// that includes optional chaining.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrecedenceGroupAssignmentSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPrecedenceGroupAssignmentSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPrecedenceGroupAssignmentSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAssignmentKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// When true, an operator in the corresponding precedence group
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// uses the same grouping rules during optional chaining as the
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// assignment operators from the standard library. Otherwise,
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// operators in the precedence group follows the same optional
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// chaining rules as operators that don't perform assignment.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredFlag();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PrecedenceGroupAssignment;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// Specifies how a sequence of operators with the same precedence level
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// are grouped together in the absence of grouping parentheses.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPrecedenceGroupAssociativitySyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPrecedenceGroupAssociativitySyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPrecedenceGroupAssociativitySyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAssociativityKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// Operators that are `left`-associative group left-to-right.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// Operators that are `right`-associative group right-to-left.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// Operators that are specified with an associativity of `none`
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// don't associate at all
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredValue();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PrecedenceGroupAssociativity;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A custom `@` attribute.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCustomAttributeSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedCustomAttributeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedCustomAttributeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The `@` sign.
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAtSignToken();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The name of the attribute.
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredAttributeName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLeftParen();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedFunctionCallArgumentListSyntax> getDeferredArgumentList();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::CustomAttribute;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// An `@` attribute.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAttributeSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAttributeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAttributeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The `@` sign.
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAtSignToken();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The name of the attribute.
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAttributeName();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// If the attribute takes arguments, the opening parenthesis.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLeftParen();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The arguments of the attribute. In case the attribute                     takes multiple arguments, they are gather in the                    appropriate takes first.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedSyntax> getDeferredArgument();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// If the attribute takes arguments, the closing parenthesis.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredRightParen();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenListSyntax> getDeferredTokenList();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::Attribute;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A labeled argument for the `@_specialize` attribute like          `exported: true`
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedLabeledSpecializeEntrySyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedLabeledSpecializeEntrySyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedLabeledSpecializeEntrySyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The label of the argument
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLabel();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The colon separating the label and the value
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The value for this argument
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredValue();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// A trailing comma if this argument is followed by another one
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::LabeledSpecializeEntry;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// The argument for the `@_dynamic_replacement` or `@_private`          attribute of the form `for: "function()"` or `sourceFile:          "Src.swift"`
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedNamedAttributeStringArgumentSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedNamedAttributeStringArgumentSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedNamedAttributeStringArgumentSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The label of the argument
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredNameTok();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The colon separating the label and the value
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredStringOrDeclname();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::NamedAttributeStringArgument;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclNameSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDeclNameSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDeclNameSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The base name of the protocol's requirement.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredDeclBaseName();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The argument labels of the protocol's requirement if it                is a function requirement.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedDeclNameArgumentsSyntax> getDeferredDeclNameArguments();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DeclName;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// The arguments for the `@_implements` attribute of the form          `Type, methodName(arg1Label:arg2Label:)`
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedImplementsAttributeArgumentsSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedImplementsAttributeArgumentsSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedImplementsAttributeArgumentsSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The type for which the method with this attribute                    implements a requirement.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSimpleTypeIdentifierSyntax getDeferredType();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The comma separating the type and method name
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredComma();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The base name of the protocol's requirement.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredDeclBaseName();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The argument labels of the protocol's requirement if it                    is a function requirement.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedDeclNameArgumentsSyntax> getDeferredDeclNameArguments();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ImplementsAttributeArguments;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A piece of an Objective-C selector. Either consisiting of just an          identifier for a nullary selector, an identifier and a colon for a          labeled argument or just a colon for an unlabeled argument
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedObjCSelectorPieceSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedObjCSelectorPieceSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedObjCSelectorPieceSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredColon();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ObjCSelectorPiece;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedContinueStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedContinueStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedContinueStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredContinueKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabel();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ContinueStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedWhileStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedWhileStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedWhileStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredWhileKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedConditionElementListSyntax getDeferredConditions();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockSyntax getDeferredBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::WhileStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeferStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDeferStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDeferStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredDeferKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockSyntax getDeferredBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DeferStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedExpressionStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedExpressionStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedExpressionStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ExpressionStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedRepeatWhileStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedRepeatWhileStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedRepeatWhileStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRepeatKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockSyntax getDeferredBody();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredWhileKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredCondition();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::RepeatWhileStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGuardStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedGuardStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedGuardStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredGuardKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedConditionElementListSyntax getDeferredConditions();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredElseKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockSyntax getDeferredBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::GuardStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedWhereClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedWhereClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedWhereClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredWhereKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredGuardResult();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::WhereClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedForInStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedForInStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedForInStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredForKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredCaseKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternSyntax getDeferredPattern();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeAnnotationSyntax> getDeferredTypeAnnotation();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredInKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredSequenceExpr();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedWhereClauseSyntax> getDeferredWhereClause();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockSyntax getDeferredBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ForInStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSwitchStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSwitchStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSwitchStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredSwitchKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftBrace();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSwitchCaseListSyntax getDeferredCases();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightBrace();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SwitchStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDoStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDoStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDoStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredDoKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockSyntax getDeferredBody();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedCatchClauseListSyntax> getDeferredCatchClauses();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DoStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedReturnStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedReturnStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedReturnStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredReturnKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedExprSyntax> getDeferredExpression();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ReturnStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedYieldStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedYieldStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedYieldStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredYieldKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredYields();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::YieldStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedYieldListSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedYieldListSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedYieldListSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprListSyntax getDeferredElementList();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::YieldList;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFallthroughStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedFallthroughStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedFallthroughStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredFallthroughKeyword();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::FallthroughStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedBreakStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedBreakStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedBreakStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredBreakKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabel();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::BreakStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedConditionElementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedConditionElementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedConditionElementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredCondition();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ConditionElement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAvailabilityConditionSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAvailabilityConditionSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAvailabilityConditionSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundAvailableKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedAvailabilitySpecListSyntax getDeferredAvailabilitySpec();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AvailabilityCondition;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMatchingPatternConditionSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedMatchingPatternConditionSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedMatchingPatternConditionSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredCaseKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternSyntax getDeferredPattern();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeAnnotationSyntax> getDeferredTypeAnnotation();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedInitializerClauseSyntax getDeferredInitializer();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::MatchingPatternCondition;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOptionalBindingConditionSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedOptionalBindingConditionSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedOptionalBindingConditionSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLetOrVarKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternSyntax getDeferredPattern();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeAnnotationSyntax> getDeferredTypeAnnotation();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedInitializerClauseSyntax getDeferredInitializer();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::OptionalBindingCondition;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDeclarationStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDeclarationStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDeclarationStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedDeclSyntax getDeferredDeclaration();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DeclarationStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedThrowStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedThrowStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedThrowStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredThrowKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ThrowStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIfStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedIfStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedIfStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIfKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedConditionElementListSyntax getDeferredConditions();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockSyntax getDeferredBody();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredElseKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedSyntax> getDeferredElseBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::IfStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedElseIfContinuationSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedElseIfContinuationSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedElseIfContinuationSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedIfStmtSyntax getDeferredIfStatement();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ElseIfContinuation;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedElseBlockSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedElseBlockSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedElseBlockSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredElseKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockSyntax getDeferredBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ElseBlock;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSwitchCaseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSwitchCaseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSwitchCaseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeSyntax> getDeferredUnknownAttr();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredLabel();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockItemListSyntax getDeferredStatements();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SwitchCase;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSwitchDefaultLabelSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSwitchDefaultLabelSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSwitchDefaultLabelSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredDefaultKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SwitchDefaultLabel;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCaseItemSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedCaseItemSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedCaseItemSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternSyntax getDeferredPattern();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedWhereClauseSyntax> getDeferredWhereClause();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::CaseItem;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSwitchCaseLabelSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSwitchCaseLabelSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSwitchCaseLabelSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredCaseKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCaseItemListSyntax getDeferredCaseItems();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SwitchCaseLabel;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCatchClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedCatchClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedCatchClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredCatchKeyword();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedPatternSyntax> getDeferredPattern();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedWhereClauseSyntax> getDeferredWhereClause();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCodeBlockSyntax getDeferredBody();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::CatchClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedPoundAssertStmtSyntax final : public ParsedStmtSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedPoundAssertStmtSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedPoundAssertStmtSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedStmtSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPoundAssert();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The assertion condition.
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredCondition();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The comma after the assertion condition.
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredComma();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The assertion message.
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredMessage();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::PoundAssertStmt;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGenericWhereClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedGenericWhereClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedGenericWhereClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredWhereKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedGenericRequirementListSyntax getDeferredRequirementList();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::GenericWhereClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSameTypeRequirementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSameTypeRequirementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSameTypeRequirementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredLeftTypeIdentifier();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredEqualityToken();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredRightTypeIdentifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SameTypeRequirement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGenericParameterSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedGenericParameterSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedGenericParameterSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredColon();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeSyntax> getDeferredInheritedType();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::GenericParameter;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGenericParameterClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedGenericParameterClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedGenericParameterClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftAngleBracket();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedGenericParameterListSyntax getDeferredGenericParameterList();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightAngleBracket();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::GenericParameterClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedConformanceRequirementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedConformanceRequirementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedConformanceRequirementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredLeftTypeIdentifier();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredRightTypeIdentifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ConformanceRequirement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSimpleTypeIdentifierSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSimpleTypeIdentifierSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSimpleTypeIdentifierSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericArgumentClauseSyntax> getDeferredGenericArgumentClause();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SimpleTypeIdentifier;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMemberTypeIdentifierSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedMemberTypeIdentifierSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedMemberTypeIdentifierSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredBaseType();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPeriod();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedGenericArgumentClauseSyntax> getDeferredGenericArgumentClause();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::MemberTypeIdentifier;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedClassRestrictionTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedClassRestrictionTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedClassRestrictionTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredClassKeyword();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ClassRestrictionType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedArrayTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedArrayTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedArrayTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftSquareBracket();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredElementType();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightSquareBracket();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ArrayType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedDictionaryTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedDictionaryTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedDictionaryTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftSquareBracket();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredKeyType();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredValueType();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightSquareBracket();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::DictionaryType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedMetatypeTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedMetatypeTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedMetatypeTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredBaseType();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPeriod();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredTypeOrProtocol();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::MetatypeType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOptionalTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedOptionalTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedOptionalTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredWrappedType();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredQuestionMark();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::OptionalType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedSomeTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedSomeTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedSomeTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredSomeSpecifier();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredBaseType();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::SomeType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedImplicitlyUnwrappedOptionalTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedImplicitlyUnwrappedOptionalTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredWrappedType();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredExclamationMark();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ImplicitlyUnwrappedOptionalType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCompositionTypeElementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedCompositionTypeElementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedCompositionTypeElementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredType();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredAmpersand();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::CompositionTypeElement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedCompositionTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedCompositionTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedCompositionTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedCompositionTypeElementListSyntax getDeferredElements();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::CompositionType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTupleTypeElementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTupleTypeElementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTupleTypeElementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredInOut();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredSecondName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredType();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredEllipsis();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedInitializerClauseSyntax> getDeferredInitializer();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TupleTypeElement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTupleTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTupleTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTupleTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTupleTypeElementListSyntax getDeferredElements();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TupleType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedFunctionTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedFunctionTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedFunctionTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTupleTypeElementListSyntax getDeferredArguments();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredThrowsOrRethrowsKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredArrow();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredReturnType();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::FunctionType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAttributedTypeSyntax final : public ParsedTypeSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAttributedTypeSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAttributedTypeSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedTypeSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredSpecifier();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedAttributeListSyntax> getDeferredAttributes();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredBaseType();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AttributedType;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGenericArgumentSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedGenericArgumentSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedGenericArgumentSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredArgumentType();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::GenericArgument;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedGenericArgumentClauseSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedGenericArgumentClauseSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedGenericArgumentClauseSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftAngleBracket();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedGenericArgumentListSyntax getDeferredArguments();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightAngleBracket();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::GenericArgumentClause;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTypeAnnotationSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTypeAnnotationSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTypeAnnotationSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredType();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TypeAnnotation;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedEnumCasePatternSyntax final : public ParsedPatternSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedEnumCasePatternSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedEnumCasePatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedPatternSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeSyntax> getDeferredType();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPeriod();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredCaseName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTuplePatternSyntax> getDeferredAssociatedTuple();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::EnumCasePattern;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIsTypePatternSyntax final : public ParsedPatternSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedIsTypePatternSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedIsTypePatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedPatternSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIsKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredType();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::IsTypePattern;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedOptionalPatternSyntax final : public ParsedPatternSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedOptionalPatternSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedOptionalPatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedPatternSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternSyntax getDeferredSubPattern();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredQuestionMark();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::OptionalPattern;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedIdentifierPatternSyntax final : public ParsedPatternSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedIdentifierPatternSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedIdentifierPatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedPatternSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredIdentifier();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::IdentifierPattern;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAsTypePatternSyntax final : public ParsedPatternSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAsTypePatternSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAsTypePatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedPatternSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternSyntax getDeferredPattern();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredAsKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTypeSyntax getDeferredType();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AsTypePattern;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTuplePatternSyntax final : public ParsedPatternSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTuplePatternSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTuplePatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedPatternSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLeftParen();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTuplePatternElementListSyntax getDeferredElements();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredRightParen();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TuplePattern;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedWildcardPatternSyntax final : public ParsedPatternSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedWildcardPatternSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedWildcardPatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedPatternSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredWildcard();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTypeAnnotationSyntax> getDeferredTypeAnnotation();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::WildcardPattern;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedTuplePatternElementSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedTuplePatternElementSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedTuplePatternElementSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelName();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredLabelColon();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternSyntax getDeferredPattern();
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::TuplePatternElement;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedExpressionPatternSyntax final : public ParsedPatternSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedExpressionPatternSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedExpressionPatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedPatternSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedExprSyntax getDeferredExpression();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ExpressionPattern;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedValueBindingPatternSyntax final : public ParsedPatternSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedValueBindingPatternSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedValueBindingPatternSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedPatternSyntax(std::move(rawNode)) {
  }

#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLetOrVarKeyword();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedPatternSyntax getDeferredValuePattern();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::ValueBindingPattern;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A single argument to an `@available` argument like `*`, `iOS 10.1`,          or `message: "This has been deprecated"`.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAvailabilityArgumentSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAvailabilityArgumentSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAvailabilityArgumentSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The actual argument
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredEntry();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// A trailing comma if the argument is followed by another                    argument
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredTrailingComma();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AvailabilityArgument;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A argument to an `@available` attribute that consists of a label and          a value, e.g. `message: "This has been deprecated"`.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAvailabilityLabeledArgumentSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAvailabilityLabeledArgumentSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAvailabilityLabeledArgumentSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The label of the argument
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredLabel();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The colon separating label and value
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredColon();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The value of this labeled argument
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredValue();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AvailabilityLabeledArgument;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// An argument to `@available` that restricts the availability on a          certain platform to a version, e.g. `iOS 10` or `swift 3.4`.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedAvailabilityVersionRestrictionSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedAvailabilityVersionRestrictionSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedAvailabilityVersionRestrictionSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The name of the OS on which the availability should be                    restricted or 'swift' if the availability should be                    restricted based on a Swift version.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedTokenSyntax getDeferredPlatform();
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedVersionTupleSyntax getDeferredVersion();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::AvailabilityVersionRestriction;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// A version number of the form major.minor.patch in which the minor          and patch part may be ommited.
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
/// 
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
class ParsedVersionTupleSyntax final : public ParsedSyntax {
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
      friend class ParsedVersionTupleSyntaxBuilder;
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

public:
  explicit ParsedVersionTupleSyntax(ParsedRawSyntaxNode rawNode)
    : ParsedSyntax(std::move(rawNode)) {
  }

#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// In case the version consists only of the major version, an                    integer literal that specifies the major version. In case                    the version consists of major and minor version number, a                    floating literal in which the decimal part is interpreted                    as the minor version.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  ParsedSyntax getDeferredMajorMinor();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// If the version contains a patch number, the period                    separating the minor from the patch number.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredPatchPeriod();
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// The patch version if specified.
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  /// 
#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  llvm::Optional<ParsedTokenSyntax> getDeferredPatchVersion();
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"

  static bool kindof(syntax::SyntaxKind Kind) {
#line 75 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
    return Kind == syntax::SyntaxKind::VersionTuple;
#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
  }

  static bool classof(const ParsedSyntax *S) {
    return kindof(S->getKind());
  }
};

#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxNodes.h.gyb"
}

#endif // SWIFT_PARSE_PARSEDSYNTAXNODES_H
