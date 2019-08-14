#line 5 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
//// Automatically Generated From SyntaxSerialization.cpp.gyb.
//// Do Not Edit Directly!
//===---------------------- SytnaxSerialization.cpp -----------------------===//
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

#include "swift/Syntax/Serialization/SyntaxSerialization.h"

namespace swift {
namespace byteTree {
void ObjectTraits<ArrayRef<RC<syntax::RawSyntax>>>::write(
    ByteTreeWriter &Writer, const ArrayRef<RC<syntax::RawSyntax>> &Layout,
    UserInfoMap &UserInfo) {
  for (unsigned I = 0, E = Layout.size(); I < E; ++I) {
    if (Layout[I]) {
      Writer.write(*Layout[I], /*Index=*/I);
    } else {
      Writer.write(llvm::None, /*Index=*/I);
    }
  }
}

uint8_t WrapperTypeTraits<tok>::numericValue(const tok &Value) {
  switch (Value) {
    case tok::eof: return 0;

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_associatedtype: return 1;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_class: return 2;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_deinit: return 3;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_enum: return 4;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_extension: return 5;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_func: return 6;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_import: return 7;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_init: return 8;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_inout: return 9;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_let: return 10;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_operator: return 11;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_precedencegroup: return 12;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_protocol: return 13;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_struct: return 14;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_subscript: return 15;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_typealias: return 16;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_var: return 17;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_fileprivate: return 18;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_internal: return 19;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_private: return 20;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_public: return 21;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_static: return 22;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_defer: return 23;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_if: return 24;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_guard: return 25;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_do: return 26;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_repeat: return 27;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_else: return 28;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_for: return 29;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_in: return 30;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_while: return 31;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_return: return 32;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_break: return 33;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_continue: return 34;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_fallthrough: return 35;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_switch: return 36;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_case: return 37;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_default: return 38;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_where: return 39;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_catch: return 40;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_throw: return 50;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_as: return 41;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_Any: return 42;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_false: return 43;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_is: return 44;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_nil: return 45;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_rethrows: return 46;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_super: return 47;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_self: return 48;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_Self: return 49;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_true: return 51;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_try: return 52;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_throws: return 53;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw___FILE__: return 54;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw___LINE__: return 55;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw___COLUMN__: return 56;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw___FUNCTION__: return 57;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw___DSO_HANDLE__: return 58;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw__: return 59;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::l_paren: return 88;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::r_paren: return 89;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::l_brace: return 90;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::r_brace: return 91;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::l_square: return 92;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::r_square: return 93;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::l_angle: return 94;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::r_angle: return 95;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::period: return 85;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::period_prefix: return 87;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::comma: return 84;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::ellipsis: return 118;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::colon: return 82;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::semi: return 83;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::equal: return 86;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::at_sign: return 80;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound: return 81;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::amp_prefix: return 96;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::arrow: return 78;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::backtick: return 79;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::backslash: return 100;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::exclaim_postfix: return 99;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::question_postfix: return 97;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::question_infix: return 98;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::string_quote: return 102;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::single_quote: return 120;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::multiline_string_quote: return 103;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_keyPath: return 74;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_line: return 69;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_selector: return 73;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_file: return 68;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_column: return 70;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_function: return 72;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_dsohandle: return 71;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_assert: return 117;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_sourceLocation: return 65;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_warning: return 66;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_error: return 67;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_if: return 64;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_else: return 62;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_elseif: return 63;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_endif: return 61;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_available: return 60;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_fileLiteral: return 76;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_imageLiteral: return 77;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::pound_colorLiteral: return 75;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::integer_literal: return 111;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::floating_literal: return 112;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::string_literal: return 113;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::unknown: return 115;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::identifier: return 105;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::oper_binary_unspaced: return 107;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::oper_binary_spaced: return 108;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::oper_postfix: return 110;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::oper_prefix: return 109;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::dollarident: return 106;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::contextual_keyword: return 114;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::raw_string_delimiter: return 119;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::string_segment: return 104;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::string_interpolation_anchor: return 101;
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
    case tok::kw_yield: return 116;
#line 42 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxSerialization.cpp.gyb"
  
    case tok::kw_undef:
    case tok::kw_sil:
    case tok::kw_sil_stage:
    case tok::kw_sil_property:
    case tok::kw_sil_vtable:
    case tok::kw_sil_global:
    case tok::kw_sil_witness_table:
    case tok::kw_sil_default_witness_table:
    case tok::kw_sil_coverage_map:
    case tok::kw_sil_scope:
    case tok::sil_dollar:
    case tok::sil_exclamation:
    case tok::code_complete:
    case tok::sil_local_name:
    case tok::comment:
    case tok::NUM_TOKENS:
      llvm_unreachable("Should not get serialized in a syntax tree");
  }
  llvm_unreachable("unhandled token");
}
} // namespace byteTree
} // namespace swift
