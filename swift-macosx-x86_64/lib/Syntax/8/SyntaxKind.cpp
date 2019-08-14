#line 6 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
//// Automatically Generated From SyntaxKind.cpp.gyb.
//// Do Not Edit Directly!
//===-------------- SyntaxKind.cpp - Syntax Kind definitions --------------===//
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

#include "swift/Syntax/SyntaxKind.h"
#include "swift/Syntax/TokenKinds.h"
#include "llvm/Support/raw_ostream.h"

namespace swift {

static StringRef getTokenTextInternal(tok kind) {
  switch(kind) {
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_associatedtype: return "associatedtype";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_class: return "class";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_deinit: return "deinit";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_enum: return "enum";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_extension: return "extension";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_func: return "func";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_import: return "import";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_init: return "init";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_inout: return "inout";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_let: return "let";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_operator: return "operator";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_precedencegroup: return "precedencegroup";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_protocol: return "protocol";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_struct: return "struct";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_subscript: return "subscript";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_typealias: return "typealias";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_var: return "var";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_fileprivate: return "fileprivate";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_internal: return "internal";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_private: return "private";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_public: return "public";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_static: return "static";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_defer: return "defer";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_if: return "if";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_guard: return "guard";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_do: return "do";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_repeat: return "repeat";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_else: return "else";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_for: return "for";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_in: return "in";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_while: return "while";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_return: return "return";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_break: return "break";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_continue: return "continue";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_fallthrough: return "fallthrough";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_switch: return "switch";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_case: return "case";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_default: return "default";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_where: return "where";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_catch: return "catch";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_throw: return "throw";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_as: return "as";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_Any: return "Any";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_false: return "false";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_is: return "is";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_nil: return "nil";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_rethrows: return "rethrows";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_super: return "super";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_self: return "self";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_Self: return "Self";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_true: return "true";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_try: return "try";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_throws: return "throws";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw___FILE__: return "__FILE__";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw___LINE__: return "__LINE__";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw___COLUMN__: return "__COLUMN__";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw___FUNCTION__: return "__FUNCTION__";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw___DSO_HANDLE__: return "__DSO_HANDLE__";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw__: return "_";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::l_paren: return "(";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::r_paren: return ")";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::l_brace: return "{";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::r_brace: return "}";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::l_square: return "[";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::r_square: return "]";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::l_angle: return "<";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::r_angle: return ">";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::period: return ".";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::period_prefix: return ".";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::comma: return ",";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::ellipsis: return "...";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::colon: return ":";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::semi: return ";";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::equal: return "=";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::at_sign: return "@";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound: return "#";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::amp_prefix: return "&";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::arrow: return "->";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::backtick: return "`";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::backslash: return "\\";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::exclaim_postfix: return "!";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::question_postfix: return "?";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::question_infix: return "?";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::string_quote: return "\"";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::single_quote: return "\'";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::multiline_string_quote: return "\"\"\"";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_keyPath: return "#keyPath";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_line: return "#line";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_selector: return "#selector";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_file: return "#file";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_column: return "#column";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_function: return "#function";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_dsohandle: return "#dsohandle";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_assert: return "#assert";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_sourceLocation: return "#sourceLocation";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_warning: return "#warning";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_error: return "#error";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_if: return "#if";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_else: return "#else";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_elseif: return "#elseif";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_endif: return "#endif";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_available: return "#available";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_fileLiteral: return "#fileLiteral";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_imageLiteral: return "#imageLiteral";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::pound_colorLiteral: return "#colorLiteral";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::string_interpolation_anchor: return ")";
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case tok::kw_yield: return "yield";
#line 33 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  default: return StringRef();
  }
}

bool isTokenTextDetermined(tok kind) {
  return !getTokenTextInternal(kind).empty();
}

StringRef getTokenText(tok kind) {
  return getTokenTextInternal(kind);
}

bool parserShallOmitWhenNoChildren(syntax::SyntaxKind Kind) {
  switch(Kind) {
#line 49 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case syntax::SyntaxKind::CodeBlockItem:
#line 49 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case syntax::SyntaxKind::MemberDeclListItem:
#line 49 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case syntax::SyntaxKind::NonEmptyTokenList:
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    return true;
  default:
    return false;
  }
}

namespace syntax {

void dumpSyntaxKind(llvm::raw_ostream &os, const SyntaxKind kind) {
  switch (kind) {
  case SyntaxKind::Token:
    os << "Token";
    break;
  case SyntaxKind::Unknown:
    os << "Unknown";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::Decl:
    os << "Decl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::Expr:
    os << "Expr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::Stmt:
    os << "Stmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::Type:
    os << "Type";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::Pattern:
    os << "Pattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::UnknownDecl:
    os << "UnknownDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::UnknownExpr:
    os << "UnknownExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::UnknownStmt:
    os << "UnknownStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::UnknownType:
    os << "UnknownType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::UnknownPattern:
    os << "UnknownPattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CodeBlockItem:
    os << "CodeBlockItem";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CodeBlockItemList:
    os << "CodeBlockItemList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CodeBlock:
    os << "CodeBlock";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::InOutExpr:
    os << "InOutExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PoundColumnExpr:
    os << "PoundColumnExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FunctionCallArgumentList:
    os << "FunctionCallArgumentList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TupleElementList:
    os << "TupleElementList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ArrayElementList:
    os << "ArrayElementList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DictionaryElementList:
    os << "DictionaryElementList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::StringLiteralSegments:
    os << "StringLiteralSegments";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TryExpr:
    os << "TryExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DeclNameArgument:
    os << "DeclNameArgument";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DeclNameArgumentList:
    os << "DeclNameArgumentList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DeclNameArguments:
    os << "DeclNameArguments";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IdentifierExpr:
    os << "IdentifierExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SuperRefExpr:
    os << "SuperRefExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::NilLiteralExpr:
    os << "NilLiteralExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DiscardAssignmentExpr:
    os << "DiscardAssignmentExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AssignmentExpr:
    os << "AssignmentExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SequenceExpr:
    os << "SequenceExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ExprList:
    os << "ExprList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PoundLineExpr:
    os << "PoundLineExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PoundFileExpr:
    os << "PoundFileExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PoundFunctionExpr:
    os << "PoundFunctionExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PoundDsohandleExpr:
    os << "PoundDsohandleExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SymbolicReferenceExpr:
    os << "SymbolicReferenceExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PrefixOperatorExpr:
    os << "PrefixOperatorExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::BinaryOperatorExpr:
    os << "BinaryOperatorExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ArrowExpr:
    os << "ArrowExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FloatLiteralExpr:
    os << "FloatLiteralExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TupleExpr:
    os << "TupleExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ArrayExpr:
    os << "ArrayExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DictionaryExpr:
    os << "DictionaryExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FunctionCallArgument:
    os << "FunctionCallArgument";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TupleElement:
    os << "TupleElement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ArrayElement:
    os << "ArrayElement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DictionaryElement:
    os << "DictionaryElement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IntegerLiteralExpr:
    os << "IntegerLiteralExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::BooleanLiteralExpr:
    os << "BooleanLiteralExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TernaryExpr:
    os << "TernaryExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::MemberAccessExpr:
    os << "MemberAccessExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IsExpr:
    os << "IsExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AsExpr:
    os << "AsExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TypeExpr:
    os << "TypeExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClosureCaptureItem:
    os << "ClosureCaptureItem";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClosureCaptureItemList:
    os << "ClosureCaptureItemList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClosureCaptureSignature:
    os << "ClosureCaptureSignature";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClosureParam:
    os << "ClosureParam";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClosureParamList:
    os << "ClosureParamList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClosureSignature:
    os << "ClosureSignature";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClosureExpr:
    os << "ClosureExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::UnresolvedPatternExpr:
    os << "UnresolvedPatternExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FunctionCallExpr:
    os << "FunctionCallExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SubscriptExpr:
    os << "SubscriptExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::OptionalChainingExpr:
    os << "OptionalChainingExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ForcedValueExpr:
    os << "ForcedValueExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PostfixUnaryExpr:
    os << "PostfixUnaryExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SpecializeExpr:
    os << "SpecializeExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::StringSegment:
    os << "StringSegment";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ExpressionSegment:
    os << "ExpressionSegment";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::StringLiteralExpr:
    os << "StringLiteralExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::KeyPathExpr:
    os << "KeyPathExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::KeyPathBaseExpr:
    os << "KeyPathBaseExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ObjcNamePiece:
    os << "ObjcNamePiece";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ObjcName:
    os << "ObjcName";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ObjcKeyPathExpr:
    os << "ObjcKeyPathExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ObjcSelectorExpr:
    os << "ObjcSelectorExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::EditorPlaceholderExpr:
    os << "EditorPlaceholderExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ObjectLiteralExpr:
    os << "ObjectLiteralExpr";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TypeInitializerClause:
    os << "TypeInitializerClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TypealiasDecl:
    os << "TypealiasDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AssociatedtypeDecl:
    os << "AssociatedtypeDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FunctionParameterList:
    os << "FunctionParameterList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ParameterClause:
    os << "ParameterClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ReturnClause:
    os << "ReturnClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FunctionSignature:
    os << "FunctionSignature";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IfConfigClause:
    os << "IfConfigClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IfConfigClauseList:
    os << "IfConfigClauseList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IfConfigDecl:
    os << "IfConfigDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PoundErrorDecl:
    os << "PoundErrorDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PoundWarningDecl:
    os << "PoundWarningDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PoundSourceLocation:
    os << "PoundSourceLocation";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PoundSourceLocationArgs:
    os << "PoundSourceLocationArgs";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DeclModifier:
    os << "DeclModifier";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::InheritedType:
    os << "InheritedType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::InheritedTypeList:
    os << "InheritedTypeList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TypeInheritanceClause:
    os << "TypeInheritanceClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClassDecl:
    os << "ClassDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::StructDecl:
    os << "StructDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ProtocolDecl:
    os << "ProtocolDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ExtensionDecl:
    os << "ExtensionDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::MemberDeclBlock:
    os << "MemberDeclBlock";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::MemberDeclList:
    os << "MemberDeclList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::MemberDeclListItem:
    os << "MemberDeclListItem";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SourceFile:
    os << "SourceFile";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::InitializerClause:
    os << "InitializerClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FunctionParameter:
    os << "FunctionParameter";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ModifierList:
    os << "ModifierList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FunctionDecl:
    os << "FunctionDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::InitializerDecl:
    os << "InitializerDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DeinitializerDecl:
    os << "DeinitializerDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SubscriptDecl:
    os << "SubscriptDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AccessLevelModifier:
    os << "AccessLevelModifier";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AccessPathComponent:
    os << "AccessPathComponent";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AccessPath:
    os << "AccessPath";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ImportDecl:
    os << "ImportDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AccessorParameter:
    os << "AccessorParameter";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AccessorDecl:
    os << "AccessorDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AccessorList:
    os << "AccessorList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AccessorBlock:
    os << "AccessorBlock";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PatternBinding:
    os << "PatternBinding";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PatternBindingList:
    os << "PatternBindingList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::VariableDecl:
    os << "VariableDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::EnumCaseElement:
    os << "EnumCaseElement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::EnumCaseElementList:
    os << "EnumCaseElementList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::EnumCaseDecl:
    os << "EnumCaseDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::EnumDecl:
    os << "EnumDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::OperatorDecl:
    os << "OperatorDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IdentifierList:
    os << "IdentifierList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::OperatorPrecedenceAndTypes:
    os << "OperatorPrecedenceAndTypes";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PrecedenceGroupDecl:
    os << "PrecedenceGroupDecl";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PrecedenceGroupAttributeList:
    os << "PrecedenceGroupAttributeList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PrecedenceGroupRelation:
    os << "PrecedenceGroupRelation";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PrecedenceGroupNameList:
    os << "PrecedenceGroupNameList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PrecedenceGroupNameElement:
    os << "PrecedenceGroupNameElement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PrecedenceGroupAssignment:
    os << "PrecedenceGroupAssignment";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PrecedenceGroupAssociativity:
    os << "PrecedenceGroupAssociativity";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TokenList:
    os << "TokenList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::NonEmptyTokenList:
    os << "NonEmptyTokenList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CustomAttribute:
    os << "CustomAttribute";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::Attribute:
    os << "Attribute";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AttributeList:
    os << "AttributeList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SpecializeAttributeSpecList:
    os << "SpecializeAttributeSpecList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::LabeledSpecializeEntry:
    os << "LabeledSpecializeEntry";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::NamedAttributeStringArgument:
    os << "NamedAttributeStringArgument";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DeclName:
    os << "DeclName";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ImplementsAttributeArguments:
    os << "ImplementsAttributeArguments";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ObjCSelectorPiece:
    os << "ObjCSelectorPiece";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ObjCSelector:
    os << "ObjCSelector";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ContinueStmt:
    os << "ContinueStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::WhileStmt:
    os << "WhileStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DeferStmt:
    os << "DeferStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ExpressionStmt:
    os << "ExpressionStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SwitchCaseList:
    os << "SwitchCaseList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::RepeatWhileStmt:
    os << "RepeatWhileStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GuardStmt:
    os << "GuardStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::WhereClause:
    os << "WhereClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ForInStmt:
    os << "ForInStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SwitchStmt:
    os << "SwitchStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CatchClauseList:
    os << "CatchClauseList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DoStmt:
    os << "DoStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ReturnStmt:
    os << "ReturnStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::YieldStmt:
    os << "YieldStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::YieldList:
    os << "YieldList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FallthroughStmt:
    os << "FallthroughStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::BreakStmt:
    os << "BreakStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CaseItemList:
    os << "CaseItemList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ConditionElement:
    os << "ConditionElement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AvailabilityCondition:
    os << "AvailabilityCondition";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::MatchingPatternCondition:
    os << "MatchingPatternCondition";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::OptionalBindingCondition:
    os << "OptionalBindingCondition";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ConditionElementList:
    os << "ConditionElementList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DeclarationStmt:
    os << "DeclarationStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ThrowStmt:
    os << "ThrowStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IfStmt:
    os << "IfStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ElseIfContinuation:
    os << "ElseIfContinuation";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ElseBlock:
    os << "ElseBlock";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SwitchCase:
    os << "SwitchCase";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SwitchDefaultLabel:
    os << "SwitchDefaultLabel";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CaseItem:
    os << "CaseItem";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SwitchCaseLabel:
    os << "SwitchCaseLabel";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CatchClause:
    os << "CatchClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PoundAssertStmt:
    os << "PoundAssertStmt";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericWhereClause:
    os << "GenericWhereClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericRequirementList:
    os << "GenericRequirementList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SameTypeRequirement:
    os << "SameTypeRequirement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericParameterList:
    os << "GenericParameterList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericParameter:
    os << "GenericParameter";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericParameterClause:
    os << "GenericParameterClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ConformanceRequirement:
    os << "ConformanceRequirement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SimpleTypeIdentifier:
    os << "SimpleTypeIdentifier";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::MemberTypeIdentifier:
    os << "MemberTypeIdentifier";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClassRestrictionType:
    os << "ClassRestrictionType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ArrayType:
    os << "ArrayType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DictionaryType:
    os << "DictionaryType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::MetatypeType:
    os << "MetatypeType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::OptionalType:
    os << "OptionalType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SomeType:
    os << "SomeType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ImplicitlyUnwrappedOptionalType:
    os << "ImplicitlyUnwrappedOptionalType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CompositionTypeElement:
    os << "CompositionTypeElement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CompositionTypeElementList:
    os << "CompositionTypeElementList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CompositionType:
    os << "CompositionType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TupleTypeElement:
    os << "TupleTypeElement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TupleTypeElementList:
    os << "TupleTypeElementList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TupleType:
    os << "TupleType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FunctionType:
    os << "FunctionType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AttributedType:
    os << "AttributedType";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericArgumentList:
    os << "GenericArgumentList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericArgument:
    os << "GenericArgument";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericArgumentClause:
    os << "GenericArgumentClause";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TypeAnnotation:
    os << "TypeAnnotation";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::EnumCasePattern:
    os << "EnumCasePattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IsTypePattern:
    os << "IsTypePattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::OptionalPattern:
    os << "OptionalPattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IdentifierPattern:
    os << "IdentifierPattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AsTypePattern:
    os << "AsTypePattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TuplePattern:
    os << "TuplePattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::WildcardPattern:
    os << "WildcardPattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TuplePatternElement:
    os << "TuplePatternElement";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ExpressionPattern:
    os << "ExpressionPattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TuplePatternElementList:
    os << "TuplePatternElementList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ValueBindingPattern:
    os << "ValueBindingPattern";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AvailabilitySpecList:
    os << "AvailabilitySpecList";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AvailabilityArgument:
    os << "AvailabilityArgument";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AvailabilityLabeledArgument:
    os << "AvailabilityLabeledArgument";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AvailabilityVersionRestriction:
    os << "AvailabilityVersionRestriction";
    break;
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::VersionTuple:
    os << "VersionTuple";
    break;
#line 73 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  }
}

bool isCollectionKind(SyntaxKind Kind) {
  switch(Kind) {
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CodeBlockItemList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FunctionCallArgumentList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TupleElementList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ArrayElementList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DictionaryElementList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::StringLiteralSegments:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::DeclNameArgumentList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ExprList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClosureCaptureItemList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ClosureParamList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ObjcName:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::FunctionParameterList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IfConfigClauseList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::InheritedTypeList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::MemberDeclList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ModifierList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AccessPath:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AccessorList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PatternBindingList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::EnumCaseElementList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::IdentifierList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PrecedenceGroupAttributeList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::PrecedenceGroupNameList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TokenList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::NonEmptyTokenList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AttributeList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SpecializeAttributeSpecList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ObjCSelector:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::SwitchCaseList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CatchClauseList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CaseItemList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::ConditionElementList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericRequirementList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericParameterList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::CompositionTypeElementList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TupleTypeElementList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::GenericArgumentList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::TuplePatternElementList:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
  case SyntaxKind::AvailabilitySpecList:
#line 83 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    return true;
  default:
    return false;
  }
}

bool isDeclKind(SyntaxKind Kind) {
  return Kind >= SyntaxKind::First_Decl && Kind <= SyntaxKind::Last_Decl;
}

bool isTypeKind(SyntaxKind Kind) {
  return Kind >= SyntaxKind::First_Type && Kind <= SyntaxKind::Last_Type;
}

bool isStmtKind(SyntaxKind Kind) {
  return Kind >= SyntaxKind::First_Stmt && Kind <= SyntaxKind::Last_Stmt;
}

bool isExprKind(SyntaxKind Kind) {
  return Kind >= SyntaxKind::First_Expr && Kind <= SyntaxKind::Last_Expr;
}

bool isPatternKind(SyntaxKind Kind) {
  return Kind >= SyntaxKind::First_Pattern &&
         Kind <= SyntaxKind::Last_Pattern;
}

bool isTokenKind(SyntaxKind Kind) {
  return Kind == SyntaxKind::Token;
}

bool isUnknownKind(SyntaxKind Kind) {
  return Kind == SyntaxKind::Unknown ||
         Kind == SyntaxKind::UnknownDecl ||
         Kind == SyntaxKind::UnknownExpr ||
         Kind == SyntaxKind::UnknownStmt ||
         Kind == SyntaxKind::UnknownType ||
         Kind == SyntaxKind::UnknownPattern;
}

SyntaxKind getUnknownKind(SyntaxKind Kind) {
  if (isExprKind(Kind))
    return SyntaxKind::UnknownExpr;
  if (isStmtKind(Kind))
    return SyntaxKind::UnknownStmt;
  if (isDeclKind(Kind))
    return SyntaxKind::UnknownDecl;
  if (isTypeKind(Kind))
    return SyntaxKind::UnknownType;
  if (isPatternKind(Kind))
    return SyntaxKind::UnknownPattern;
  return SyntaxKind::Unknown;
}
} // end namespace syntax
} // end namespace swift

llvm::raw_ostream &llvm::operator<<(llvm::raw_ostream &OS,
                                    swift::syntax::SyntaxKind Kind) {
  switch (Kind) {
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::Decl:
    OS << "Decl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::Expr:
    OS << "Expr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::Stmt:
    OS << "Stmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::Type:
    OS << "Type";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::Pattern:
    OS << "Pattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::UnknownDecl:
    OS << "UnknownDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::UnknownExpr:
    OS << "UnknownExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::UnknownStmt:
    OS << "UnknownStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::UnknownType:
    OS << "UnknownType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::UnknownPattern:
    OS << "UnknownPattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CodeBlockItem:
    OS << "CodeBlockItem";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CodeBlockItemList:
    OS << "CodeBlockItemList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CodeBlock:
    OS << "CodeBlock";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::InOutExpr:
    OS << "InOutExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PoundColumnExpr:
    OS << "PoundColumnExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::FunctionCallArgumentList:
    OS << "FunctionCallArgumentList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TupleElementList:
    OS << "TupleElementList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ArrayElementList:
    OS << "ArrayElementList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DictionaryElementList:
    OS << "DictionaryElementList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::StringLiteralSegments:
    OS << "StringLiteralSegments";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TryExpr:
    OS << "TryExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DeclNameArgument:
    OS << "DeclNameArgument";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DeclNameArgumentList:
    OS << "DeclNameArgumentList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DeclNameArguments:
    OS << "DeclNameArguments";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::IdentifierExpr:
    OS << "IdentifierExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SuperRefExpr:
    OS << "SuperRefExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::NilLiteralExpr:
    OS << "NilLiteralExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DiscardAssignmentExpr:
    OS << "DiscardAssignmentExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AssignmentExpr:
    OS << "AssignmentExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SequenceExpr:
    OS << "SequenceExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ExprList:
    OS << "ExprList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PoundLineExpr:
    OS << "PoundLineExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PoundFileExpr:
    OS << "PoundFileExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PoundFunctionExpr:
    OS << "PoundFunctionExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PoundDsohandleExpr:
    OS << "PoundDsohandleExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SymbolicReferenceExpr:
    OS << "SymbolicReferenceExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PrefixOperatorExpr:
    OS << "PrefixOperatorExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::BinaryOperatorExpr:
    OS << "BinaryOperatorExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ArrowExpr:
    OS << "ArrowExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::FloatLiteralExpr:
    OS << "FloatLiteralExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TupleExpr:
    OS << "TupleExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ArrayExpr:
    OS << "ArrayExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DictionaryExpr:
    OS << "DictionaryExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::FunctionCallArgument:
    OS << "FunctionCallArgument";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TupleElement:
    OS << "TupleElement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ArrayElement:
    OS << "ArrayElement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DictionaryElement:
    OS << "DictionaryElement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::IntegerLiteralExpr:
    OS << "IntegerLiteralExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::BooleanLiteralExpr:
    OS << "BooleanLiteralExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TernaryExpr:
    OS << "TernaryExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::MemberAccessExpr:
    OS << "MemberAccessExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::IsExpr:
    OS << "IsExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AsExpr:
    OS << "AsExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TypeExpr:
    OS << "TypeExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ClosureCaptureItem:
    OS << "ClosureCaptureItem";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ClosureCaptureItemList:
    OS << "ClosureCaptureItemList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ClosureCaptureSignature:
    OS << "ClosureCaptureSignature";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ClosureParam:
    OS << "ClosureParam";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ClosureParamList:
    OS << "ClosureParamList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ClosureSignature:
    OS << "ClosureSignature";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ClosureExpr:
    OS << "ClosureExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::UnresolvedPatternExpr:
    OS << "UnresolvedPatternExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::FunctionCallExpr:
    OS << "FunctionCallExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SubscriptExpr:
    OS << "SubscriptExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::OptionalChainingExpr:
    OS << "OptionalChainingExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ForcedValueExpr:
    OS << "ForcedValueExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PostfixUnaryExpr:
    OS << "PostfixUnaryExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SpecializeExpr:
    OS << "SpecializeExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::StringSegment:
    OS << "StringSegment";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ExpressionSegment:
    OS << "ExpressionSegment";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::StringLiteralExpr:
    OS << "StringLiteralExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::KeyPathExpr:
    OS << "KeyPathExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::KeyPathBaseExpr:
    OS << "KeyPathBaseExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ObjcNamePiece:
    OS << "ObjcNamePiece";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ObjcName:
    OS << "ObjcName";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ObjcKeyPathExpr:
    OS << "ObjcKeyPathExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ObjcSelectorExpr:
    OS << "ObjcSelectorExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::EditorPlaceholderExpr:
    OS << "EditorPlaceholderExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ObjectLiteralExpr:
    OS << "ObjectLiteralExpr";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TypeInitializerClause:
    OS << "TypeInitializerClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TypealiasDecl:
    OS << "TypealiasDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AssociatedtypeDecl:
    OS << "AssociatedtypeDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::FunctionParameterList:
    OS << "FunctionParameterList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ParameterClause:
    OS << "ParameterClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ReturnClause:
    OS << "ReturnClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::FunctionSignature:
    OS << "FunctionSignature";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::IfConfigClause:
    OS << "IfConfigClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::IfConfigClauseList:
    OS << "IfConfigClauseList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::IfConfigDecl:
    OS << "IfConfigDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PoundErrorDecl:
    OS << "PoundErrorDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PoundWarningDecl:
    OS << "PoundWarningDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PoundSourceLocation:
    OS << "PoundSourceLocation";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PoundSourceLocationArgs:
    OS << "PoundSourceLocationArgs";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DeclModifier:
    OS << "DeclModifier";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::InheritedType:
    OS << "InheritedType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::InheritedTypeList:
    OS << "InheritedTypeList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TypeInheritanceClause:
    OS << "TypeInheritanceClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ClassDecl:
    OS << "ClassDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::StructDecl:
    OS << "StructDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ProtocolDecl:
    OS << "ProtocolDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ExtensionDecl:
    OS << "ExtensionDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::MemberDeclBlock:
    OS << "MemberDeclBlock";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::MemberDeclList:
    OS << "MemberDeclList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::MemberDeclListItem:
    OS << "MemberDeclListItem";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SourceFile:
    OS << "SourceFile";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::InitializerClause:
    OS << "InitializerClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::FunctionParameter:
    OS << "FunctionParameter";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ModifierList:
    OS << "ModifierList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::FunctionDecl:
    OS << "FunctionDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::InitializerDecl:
    OS << "InitializerDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DeinitializerDecl:
    OS << "DeinitializerDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SubscriptDecl:
    OS << "SubscriptDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AccessLevelModifier:
    OS << "AccessLevelModifier";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AccessPathComponent:
    OS << "AccessPathComponent";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AccessPath:
    OS << "AccessPath";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ImportDecl:
    OS << "ImportDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AccessorParameter:
    OS << "AccessorParameter";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AccessorDecl:
    OS << "AccessorDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AccessorList:
    OS << "AccessorList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AccessorBlock:
    OS << "AccessorBlock";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PatternBinding:
    OS << "PatternBinding";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PatternBindingList:
    OS << "PatternBindingList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::VariableDecl:
    OS << "VariableDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::EnumCaseElement:
    OS << "EnumCaseElement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::EnumCaseElementList:
    OS << "EnumCaseElementList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::EnumCaseDecl:
    OS << "EnumCaseDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::EnumDecl:
    OS << "EnumDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::OperatorDecl:
    OS << "OperatorDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::IdentifierList:
    OS << "IdentifierList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::OperatorPrecedenceAndTypes:
    OS << "OperatorPrecedenceAndTypes";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PrecedenceGroupDecl:
    OS << "PrecedenceGroupDecl";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PrecedenceGroupAttributeList:
    OS << "PrecedenceGroupAttributeList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PrecedenceGroupRelation:
    OS << "PrecedenceGroupRelation";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PrecedenceGroupNameList:
    OS << "PrecedenceGroupNameList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PrecedenceGroupNameElement:
    OS << "PrecedenceGroupNameElement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PrecedenceGroupAssignment:
    OS << "PrecedenceGroupAssignment";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PrecedenceGroupAssociativity:
    OS << "PrecedenceGroupAssociativity";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TokenList:
    OS << "TokenList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::NonEmptyTokenList:
    OS << "NonEmptyTokenList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CustomAttribute:
    OS << "CustomAttribute";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::Attribute:
    OS << "Attribute";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AttributeList:
    OS << "AttributeList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SpecializeAttributeSpecList:
    OS << "SpecializeAttributeSpecList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::LabeledSpecializeEntry:
    OS << "LabeledSpecializeEntry";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::NamedAttributeStringArgument:
    OS << "NamedAttributeStringArgument";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DeclName:
    OS << "DeclName";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ImplementsAttributeArguments:
    OS << "ImplementsAttributeArguments";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ObjCSelectorPiece:
    OS << "ObjCSelectorPiece";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ObjCSelector:
    OS << "ObjCSelector";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ContinueStmt:
    OS << "ContinueStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::WhileStmt:
    OS << "WhileStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DeferStmt:
    OS << "DeferStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ExpressionStmt:
    OS << "ExpressionStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SwitchCaseList:
    OS << "SwitchCaseList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::RepeatWhileStmt:
    OS << "RepeatWhileStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::GuardStmt:
    OS << "GuardStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::WhereClause:
    OS << "WhereClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ForInStmt:
    OS << "ForInStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SwitchStmt:
    OS << "SwitchStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CatchClauseList:
    OS << "CatchClauseList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DoStmt:
    OS << "DoStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ReturnStmt:
    OS << "ReturnStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::YieldStmt:
    OS << "YieldStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::YieldList:
    OS << "YieldList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::FallthroughStmt:
    OS << "FallthroughStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::BreakStmt:
    OS << "BreakStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CaseItemList:
    OS << "CaseItemList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ConditionElement:
    OS << "ConditionElement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AvailabilityCondition:
    OS << "AvailabilityCondition";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::MatchingPatternCondition:
    OS << "MatchingPatternCondition";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::OptionalBindingCondition:
    OS << "OptionalBindingCondition";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ConditionElementList:
    OS << "ConditionElementList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DeclarationStmt:
    OS << "DeclarationStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ThrowStmt:
    OS << "ThrowStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::IfStmt:
    OS << "IfStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ElseIfContinuation:
    OS << "ElseIfContinuation";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ElseBlock:
    OS << "ElseBlock";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SwitchCase:
    OS << "SwitchCase";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SwitchDefaultLabel:
    OS << "SwitchDefaultLabel";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CaseItem:
    OS << "CaseItem";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SwitchCaseLabel:
    OS << "SwitchCaseLabel";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CatchClause:
    OS << "CatchClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::PoundAssertStmt:
    OS << "PoundAssertStmt";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::GenericWhereClause:
    OS << "GenericWhereClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::GenericRequirementList:
    OS << "GenericRequirementList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SameTypeRequirement:
    OS << "SameTypeRequirement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::GenericParameterList:
    OS << "GenericParameterList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::GenericParameter:
    OS << "GenericParameter";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::GenericParameterClause:
    OS << "GenericParameterClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ConformanceRequirement:
    OS << "ConformanceRequirement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SimpleTypeIdentifier:
    OS << "SimpleTypeIdentifier";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::MemberTypeIdentifier:
    OS << "MemberTypeIdentifier";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ClassRestrictionType:
    OS << "ClassRestrictionType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ArrayType:
    OS << "ArrayType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::DictionaryType:
    OS << "DictionaryType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::MetatypeType:
    OS << "MetatypeType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::OptionalType:
    OS << "OptionalType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::SomeType:
    OS << "SomeType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ImplicitlyUnwrappedOptionalType:
    OS << "ImplicitlyUnwrappedOptionalType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CompositionTypeElement:
    OS << "CompositionTypeElement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CompositionTypeElementList:
    OS << "CompositionTypeElementList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::CompositionType:
    OS << "CompositionType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TupleTypeElement:
    OS << "TupleTypeElement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TupleTypeElementList:
    OS << "TupleTypeElementList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TupleType:
    OS << "TupleType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::FunctionType:
    OS << "FunctionType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AttributedType:
    OS << "AttributedType";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::GenericArgumentList:
    OS << "GenericArgumentList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::GenericArgument:
    OS << "GenericArgument";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::GenericArgumentClause:
    OS << "GenericArgumentClause";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TypeAnnotation:
    OS << "TypeAnnotation";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::EnumCasePattern:
    OS << "EnumCasePattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::IsTypePattern:
    OS << "IsTypePattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::OptionalPattern:
    OS << "OptionalPattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::IdentifierPattern:
    OS << "IdentifierPattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AsTypePattern:
    OS << "AsTypePattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TuplePattern:
    OS << "TuplePattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::WildcardPattern:
    OS << "WildcardPattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TuplePatternElement:
    OS << "TuplePatternElement";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ExpressionPattern:
    OS << "ExpressionPattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::TuplePatternElementList:
    OS << "TuplePatternElementList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::ValueBindingPattern:
    OS << "ValueBindingPattern";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AvailabilitySpecList:
    OS << "AvailabilitySpecList";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AvailabilityArgument:
    OS << "AvailabilityArgument";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AvailabilityLabeledArgument:
    OS << "AvailabilityLabeledArgument";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::AvailabilityVersionRestriction:
    OS << "AvailabilityVersionRestriction";
    break;
#line 143 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::VersionTuple:
    OS << "VersionTuple";
    break;
#line 147 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxKind.cpp.gyb"
    case swift::syntax::SyntaxKind::Token:
    OS << "TokenSyntax";
    break;
    case swift::syntax::SyntaxKind::Unknown:
    OS << "UnknownSyntax";
    break;
  }
  return OS;
}
