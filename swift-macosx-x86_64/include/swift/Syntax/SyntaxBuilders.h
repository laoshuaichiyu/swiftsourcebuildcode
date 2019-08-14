#line 7 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
//// Automatically Generated From SyntaxBuilders.h.gyb.
//// Do Not Edit Directly!
//===------------- SyntaxBuilders.h - Syntax Node definitions -------------===//
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

#ifndef SWIFT_SYNTAX_BUILDERS_H
#define SWIFT_SYNTAX_BUILDERS_H

#include "swift/Syntax/RawSyntax.h"
#include "swift/Syntax/SyntaxNodes.h"

namespace swift {
namespace syntax {

class SyntaxArena;

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class CodeBlockItemSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  CodeBlockItemSyntaxBuilder() = default;
  CodeBlockItemSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CodeBlockItemSyntaxBuilder &useItem(Syntax Item);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CodeBlockItemSyntaxBuilder &useSemicolon(TokenSyntax Semicolon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CodeBlockItemSyntaxBuilder &useErrorTokens(Syntax ErrorTokens);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  CodeBlockItemSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class CodeBlockSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  CodeBlockSyntaxBuilder() = default;
  CodeBlockSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CodeBlockSyntaxBuilder &useLeftBrace(TokenSyntax LeftBrace);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CodeBlockSyntaxBuilder &useStatements(CodeBlockItemListSyntax Statements);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CodeBlockSyntaxBuilder &addStatement(CodeBlockItemSyntax Statement);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CodeBlockSyntaxBuilder &useRightBrace(TokenSyntax RightBrace);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  CodeBlockSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class InOutExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  InOutExprSyntaxBuilder() = default;
  InOutExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InOutExprSyntaxBuilder &useAmpersand(TokenSyntax Ampersand);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InOutExprSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  InOutExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PoundColumnExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PoundColumnExprSyntaxBuilder() = default;
  PoundColumnExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundColumnExprSyntaxBuilder &usePoundColumn(TokenSyntax PoundColumn);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PoundColumnExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TryExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TryExprSyntaxBuilder() = default;
  TryExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TryExprSyntaxBuilder &useTryKeyword(TokenSyntax TryKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TryExprSyntaxBuilder &useQuestionOrExclamationMark(TokenSyntax QuestionOrExclamationMark);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TryExprSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TryExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DeclNameArgumentSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DeclNameArgumentSyntaxBuilder() = default;
  DeclNameArgumentSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclNameArgumentSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclNameArgumentSyntaxBuilder &useColon(TokenSyntax Colon);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DeclNameArgumentSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DeclNameArgumentsSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DeclNameArgumentsSyntaxBuilder() = default;
  DeclNameArgumentsSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclNameArgumentsSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclNameArgumentsSyntaxBuilder &useArguments(DeclNameArgumentListSyntax Arguments);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclNameArgumentsSyntaxBuilder &addArgument(DeclNameArgumentSyntax Argument);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclNameArgumentsSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DeclNameArgumentsSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class IdentifierExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  IdentifierExprSyntaxBuilder() = default;
  IdentifierExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IdentifierExprSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IdentifierExprSyntaxBuilder &useDeclNameArguments(DeclNameArgumentsSyntax DeclNameArguments);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  IdentifierExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SuperRefExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SuperRefExprSyntaxBuilder() = default;
  SuperRefExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SuperRefExprSyntaxBuilder &useSuperKeyword(TokenSyntax SuperKeyword);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SuperRefExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class NilLiteralExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  NilLiteralExprSyntaxBuilder() = default;
  NilLiteralExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  NilLiteralExprSyntaxBuilder &useNilKeyword(TokenSyntax NilKeyword);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  NilLiteralExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DiscardAssignmentExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DiscardAssignmentExprSyntaxBuilder() = default;
  DiscardAssignmentExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DiscardAssignmentExprSyntaxBuilder &useWildcard(TokenSyntax Wildcard);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DiscardAssignmentExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AssignmentExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AssignmentExprSyntaxBuilder() = default;
  AssignmentExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AssignmentExprSyntaxBuilder &useAssignToken(TokenSyntax AssignToken);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AssignmentExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SequenceExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SequenceExprSyntaxBuilder() = default;
  SequenceExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SequenceExprSyntaxBuilder &useElements(ExprListSyntax Elements);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SequenceExprSyntaxBuilder &addElement(ExprSyntax Element);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SequenceExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PoundLineExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PoundLineExprSyntaxBuilder() = default;
  PoundLineExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundLineExprSyntaxBuilder &usePoundLine(TokenSyntax PoundLine);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PoundLineExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PoundFileExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PoundFileExprSyntaxBuilder() = default;
  PoundFileExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundFileExprSyntaxBuilder &usePoundFile(TokenSyntax PoundFile);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PoundFileExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PoundFunctionExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PoundFunctionExprSyntaxBuilder() = default;
  PoundFunctionExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundFunctionExprSyntaxBuilder &usePoundFunction(TokenSyntax PoundFunction);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PoundFunctionExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PoundDsohandleExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PoundDsohandleExprSyntaxBuilder() = default;
  PoundDsohandleExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundDsohandleExprSyntaxBuilder &usePoundDsohandle(TokenSyntax PoundDsohandle);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PoundDsohandleExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SymbolicReferenceExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SymbolicReferenceExprSyntaxBuilder() = default;
  SymbolicReferenceExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SymbolicReferenceExprSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SymbolicReferenceExprSyntaxBuilder &useGenericArgumentClause(GenericArgumentClauseSyntax GenericArgumentClause);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SymbolicReferenceExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PrefixOperatorExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PrefixOperatorExprSyntaxBuilder() = default;
  PrefixOperatorExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrefixOperatorExprSyntaxBuilder &useOperatorToken(TokenSyntax OperatorToken);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrefixOperatorExprSyntaxBuilder &usePostfixExpression(ExprSyntax PostfixExpression);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PrefixOperatorExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class BinaryOperatorExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  BinaryOperatorExprSyntaxBuilder() = default;
  BinaryOperatorExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  BinaryOperatorExprSyntaxBuilder &useOperatorToken(TokenSyntax OperatorToken);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  BinaryOperatorExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ArrowExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ArrowExprSyntaxBuilder() = default;
  ArrowExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrowExprSyntaxBuilder &useThrowsToken(TokenSyntax ThrowsToken);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrowExprSyntaxBuilder &useArrowToken(TokenSyntax ArrowToken);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ArrowExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class FloatLiteralExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  FloatLiteralExprSyntaxBuilder() = default;
  FloatLiteralExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FloatLiteralExprSyntaxBuilder &useFloatingDigits(TokenSyntax FloatingDigits);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  FloatLiteralExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TupleExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TupleExprSyntaxBuilder() = default;
  TupleExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleExprSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleExprSyntaxBuilder &useElementList(TupleElementListSyntax ElementList);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleExprSyntaxBuilder &addElement(TupleElementSyntax Element);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleExprSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TupleExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ArrayExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ArrayExprSyntaxBuilder() = default;
  ArrayExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrayExprSyntaxBuilder &useLeftSquare(TokenSyntax LeftSquare);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrayExprSyntaxBuilder &useElements(ArrayElementListSyntax Elements);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrayExprSyntaxBuilder &addElement(ArrayElementSyntax Element);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrayExprSyntaxBuilder &useRightSquare(TokenSyntax RightSquare);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ArrayExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DictionaryExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DictionaryExprSyntaxBuilder() = default;
  DictionaryExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryExprSyntaxBuilder &useLeftSquare(TokenSyntax LeftSquare);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryExprSyntaxBuilder &useContent(Syntax Content);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryExprSyntaxBuilder &useRightSquare(TokenSyntax RightSquare);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DictionaryExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class FunctionCallArgumentSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  FunctionCallArgumentSyntaxBuilder() = default;
  FunctionCallArgumentSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionCallArgumentSyntaxBuilder &useLabel(TokenSyntax Label);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionCallArgumentSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionCallArgumentSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionCallArgumentSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  FunctionCallArgumentSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TupleElementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TupleElementSyntaxBuilder() = default;
  TupleElementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleElementSyntaxBuilder &useLabel(TokenSyntax Label);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleElementSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleElementSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleElementSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TupleElementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ArrayElementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ArrayElementSyntaxBuilder() = default;
  ArrayElementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrayElementSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrayElementSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ArrayElementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DictionaryElementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DictionaryElementSyntaxBuilder() = default;
  DictionaryElementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryElementSyntaxBuilder &useKeyExpression(ExprSyntax KeyExpression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryElementSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryElementSyntaxBuilder &useValueExpression(ExprSyntax ValueExpression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryElementSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DictionaryElementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class IntegerLiteralExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  IntegerLiteralExprSyntaxBuilder() = default;
  IntegerLiteralExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IntegerLiteralExprSyntaxBuilder &useDigits(TokenSyntax Digits);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  IntegerLiteralExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class BooleanLiteralExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  BooleanLiteralExprSyntaxBuilder() = default;
  BooleanLiteralExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  BooleanLiteralExprSyntaxBuilder &useBooleanLiteral(TokenSyntax BooleanLiteral);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  BooleanLiteralExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TernaryExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TernaryExprSyntaxBuilder() = default;
  TernaryExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TernaryExprSyntaxBuilder &useConditionExpression(ExprSyntax ConditionExpression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TernaryExprSyntaxBuilder &useQuestionMark(TokenSyntax QuestionMark);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TernaryExprSyntaxBuilder &useFirstChoice(ExprSyntax FirstChoice);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TernaryExprSyntaxBuilder &useColonMark(TokenSyntax ColonMark);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TernaryExprSyntaxBuilder &useSecondChoice(ExprSyntax SecondChoice);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TernaryExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class MemberAccessExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  MemberAccessExprSyntaxBuilder() = default;
  MemberAccessExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberAccessExprSyntaxBuilder &useBase(ExprSyntax Base);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberAccessExprSyntaxBuilder &useDot(TokenSyntax Dot);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberAccessExprSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberAccessExprSyntaxBuilder &useDeclNameArguments(DeclNameArgumentsSyntax DeclNameArguments);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  MemberAccessExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class IsExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  IsExprSyntaxBuilder() = default;
  IsExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IsExprSyntaxBuilder &useIsTok(TokenSyntax IsTok);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IsExprSyntaxBuilder &useTypeName(TypeSyntax TypeName);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  IsExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AsExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AsExprSyntaxBuilder() = default;
  AsExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AsExprSyntaxBuilder &useAsTok(TokenSyntax AsTok);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AsExprSyntaxBuilder &useQuestionOrExclamationMark(TokenSyntax QuestionOrExclamationMark);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AsExprSyntaxBuilder &useTypeName(TypeSyntax TypeName);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AsExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TypeExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TypeExprSyntaxBuilder() = default;
  TypeExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypeExprSyntaxBuilder &useType(TypeSyntax Type);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TypeExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ClosureCaptureItemSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ClosureCaptureItemSyntaxBuilder() = default;
  ClosureCaptureItemSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureCaptureItemSyntaxBuilder &useSpecifier(TokenListSyntax Specifier);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureCaptureItemSyntaxBuilder &addSpecifierToken(TokenSyntax SpecifierToken);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureCaptureItemSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureCaptureItemSyntaxBuilder &useAssignToken(TokenSyntax AssignToken);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureCaptureItemSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureCaptureItemSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ClosureCaptureItemSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ClosureCaptureSignatureSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ClosureCaptureSignatureSyntaxBuilder() = default;
  ClosureCaptureSignatureSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureCaptureSignatureSyntaxBuilder &useLeftSquare(TokenSyntax LeftSquare);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureCaptureSignatureSyntaxBuilder &useItems(ClosureCaptureItemListSyntax Items);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureCaptureSignatureSyntaxBuilder &addItem(ClosureCaptureItemSyntax Item);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureCaptureSignatureSyntaxBuilder &useRightSquare(TokenSyntax RightSquare);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ClosureCaptureSignatureSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ClosureParamSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ClosureParamSyntaxBuilder() = default;
  ClosureParamSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureParamSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureParamSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ClosureParamSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ClosureSignatureSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ClosureSignatureSyntaxBuilder() = default;
  ClosureSignatureSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureSignatureSyntaxBuilder &useCapture(ClosureCaptureSignatureSyntax Capture);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureSignatureSyntaxBuilder &useInput(Syntax Input);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureSignatureSyntaxBuilder &useThrowsTok(TokenSyntax ThrowsTok);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureSignatureSyntaxBuilder &useOutput(ReturnClauseSyntax Output);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureSignatureSyntaxBuilder &useInTok(TokenSyntax InTok);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ClosureSignatureSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ClosureExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ClosureExprSyntaxBuilder() = default;
  ClosureExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureExprSyntaxBuilder &useLeftBrace(TokenSyntax LeftBrace);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureExprSyntaxBuilder &useSignature(ClosureSignatureSyntax Signature);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureExprSyntaxBuilder &useStatements(CodeBlockItemListSyntax Statements);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureExprSyntaxBuilder &addStatement(CodeBlockItemSyntax Statement);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClosureExprSyntaxBuilder &useRightBrace(TokenSyntax RightBrace);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ClosureExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class UnresolvedPatternExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  UnresolvedPatternExprSyntaxBuilder() = default;
  UnresolvedPatternExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  UnresolvedPatternExprSyntaxBuilder &usePattern(PatternSyntax Pattern);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  UnresolvedPatternExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class FunctionCallExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  FunctionCallExprSyntaxBuilder() = default;
  FunctionCallExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionCallExprSyntaxBuilder &useCalledExpression(ExprSyntax CalledExpression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionCallExprSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionCallExprSyntaxBuilder &useArgumentList(FunctionCallArgumentListSyntax ArgumentList);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionCallExprSyntaxBuilder &addArgument(FunctionCallArgumentSyntax Argument);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionCallExprSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionCallExprSyntaxBuilder &useTrailingClosure(ClosureExprSyntax TrailingClosure);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  FunctionCallExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SubscriptExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SubscriptExprSyntaxBuilder() = default;
  SubscriptExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptExprSyntaxBuilder &useCalledExpression(ExprSyntax CalledExpression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptExprSyntaxBuilder &useLeftBracket(TokenSyntax LeftBracket);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptExprSyntaxBuilder &useArgumentList(FunctionCallArgumentListSyntax ArgumentList);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptExprSyntaxBuilder &addArgument(FunctionCallArgumentSyntax Argument);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptExprSyntaxBuilder &useRightBracket(TokenSyntax RightBracket);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptExprSyntaxBuilder &useTrailingClosure(ClosureExprSyntax TrailingClosure);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SubscriptExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class OptionalChainingExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  OptionalChainingExprSyntaxBuilder() = default;
  OptionalChainingExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OptionalChainingExprSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OptionalChainingExprSyntaxBuilder &useQuestionMark(TokenSyntax QuestionMark);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  OptionalChainingExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ForcedValueExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ForcedValueExprSyntaxBuilder() = default;
  ForcedValueExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForcedValueExprSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForcedValueExprSyntaxBuilder &useExclamationMark(TokenSyntax ExclamationMark);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ForcedValueExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PostfixUnaryExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PostfixUnaryExprSyntaxBuilder() = default;
  PostfixUnaryExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PostfixUnaryExprSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PostfixUnaryExprSyntaxBuilder &useOperatorToken(TokenSyntax OperatorToken);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PostfixUnaryExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SpecializeExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SpecializeExprSyntaxBuilder() = default;
  SpecializeExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SpecializeExprSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SpecializeExprSyntaxBuilder &useGenericArgumentClause(GenericArgumentClauseSyntax GenericArgumentClause);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SpecializeExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class StringSegmentSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  StringSegmentSyntaxBuilder() = default;
  StringSegmentSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StringSegmentSyntaxBuilder &useContent(TokenSyntax Content);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  StringSegmentSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ExpressionSegmentSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ExpressionSegmentSyntaxBuilder() = default;
  ExpressionSegmentSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExpressionSegmentSyntaxBuilder &useBackslash(TokenSyntax Backslash);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExpressionSegmentSyntaxBuilder &useDelimiter(TokenSyntax Delimiter);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExpressionSegmentSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExpressionSegmentSyntaxBuilder &useExpressions(FunctionCallArgumentListSyntax Expressions);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExpressionSegmentSyntaxBuilder &addExpression(FunctionCallArgumentSyntax Expression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExpressionSegmentSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ExpressionSegmentSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class StringLiteralExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  StringLiteralExprSyntaxBuilder() = default;
  StringLiteralExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StringLiteralExprSyntaxBuilder &useOpenDelimiter(TokenSyntax OpenDelimiter);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StringLiteralExprSyntaxBuilder &useOpenQuote(TokenSyntax OpenQuote);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StringLiteralExprSyntaxBuilder &useSegments(StringLiteralSegmentsSyntax Segments);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StringLiteralExprSyntaxBuilder &addSegment(Syntax Segment);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StringLiteralExprSyntaxBuilder &useCloseQuote(TokenSyntax CloseQuote);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StringLiteralExprSyntaxBuilder &useCloseDelimiter(TokenSyntax CloseDelimiter);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  StringLiteralExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class KeyPathExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  KeyPathExprSyntaxBuilder() = default;
  KeyPathExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  KeyPathExprSyntaxBuilder &useBackslash(TokenSyntax Backslash);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  KeyPathExprSyntaxBuilder &useRootExpr(ExprSyntax RootExpr);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  KeyPathExprSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  KeyPathExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class KeyPathBaseExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  KeyPathBaseExprSyntaxBuilder() = default;
  KeyPathBaseExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  KeyPathBaseExprSyntaxBuilder &usePeriod(TokenSyntax Period);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  KeyPathBaseExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ObjcNamePieceSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ObjcNamePieceSyntaxBuilder() = default;
  ObjcNamePieceSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcNamePieceSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcNamePieceSyntaxBuilder &useDot(TokenSyntax Dot);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ObjcNamePieceSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ObjcKeyPathExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ObjcKeyPathExprSyntaxBuilder() = default;
  ObjcKeyPathExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcKeyPathExprSyntaxBuilder &useKeyPath(TokenSyntax KeyPath);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcKeyPathExprSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcKeyPathExprSyntaxBuilder &useName(ObjcNameSyntax Name);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcKeyPathExprSyntaxBuilder &addNamePiece(ObjcNamePieceSyntax NamePiece);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcKeyPathExprSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ObjcKeyPathExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ObjcSelectorExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[6] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ObjcSelectorExprSyntaxBuilder() = default;
  ObjcSelectorExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcSelectorExprSyntaxBuilder &usePoundSelector(TokenSyntax PoundSelector);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcSelectorExprSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcSelectorExprSyntaxBuilder &useKind(TokenSyntax Kind);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcSelectorExprSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcSelectorExprSyntaxBuilder &useName(ExprSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjcSelectorExprSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ObjcSelectorExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class EditorPlaceholderExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  EditorPlaceholderExprSyntaxBuilder() = default;
  EditorPlaceholderExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EditorPlaceholderExprSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  EditorPlaceholderExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ObjectLiteralExprSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ObjectLiteralExprSyntaxBuilder() = default;
  ObjectLiteralExprSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjectLiteralExprSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjectLiteralExprSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjectLiteralExprSyntaxBuilder &useArguments(FunctionCallArgumentListSyntax Arguments);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjectLiteralExprSyntaxBuilder &addArgument(FunctionCallArgumentSyntax Argument);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjectLiteralExprSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ObjectLiteralExprSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TypeInitializerClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TypeInitializerClauseSyntaxBuilder() = default;
  TypeInitializerClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypeInitializerClauseSyntaxBuilder &useEqual(TokenSyntax Equal);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypeInitializerClauseSyntaxBuilder &useValue(TypeSyntax Value);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TypeInitializerClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TypealiasDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[7] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TypealiasDeclSyntaxBuilder() = default;
  TypealiasDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypealiasDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypealiasDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypealiasDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypealiasDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypealiasDeclSyntaxBuilder &useTypealiasKeyword(TokenSyntax TypealiasKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypealiasDeclSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypealiasDeclSyntaxBuilder &useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypealiasDeclSyntaxBuilder &useInitializer(TypeInitializerClauseSyntax Initializer);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypealiasDeclSyntaxBuilder &useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TypealiasDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AssociatedtypeDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[7] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AssociatedtypeDeclSyntaxBuilder() = default;
  AssociatedtypeDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AssociatedtypeDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AssociatedtypeDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AssociatedtypeDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AssociatedtypeDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AssociatedtypeDeclSyntaxBuilder &useAssociatedtypeKeyword(TokenSyntax AssociatedtypeKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AssociatedtypeDeclSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AssociatedtypeDeclSyntaxBuilder &useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AssociatedtypeDeclSyntaxBuilder &useInitializer(TypeInitializerClauseSyntax Initializer);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AssociatedtypeDeclSyntaxBuilder &useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AssociatedtypeDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ParameterClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ParameterClauseSyntaxBuilder() = default;
  ParameterClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ParameterClauseSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ParameterClauseSyntaxBuilder &useParameterList(FunctionParameterListSyntax ParameterList);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ParameterClauseSyntaxBuilder &addParameter(FunctionParameterSyntax Parameter);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ParameterClauseSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ParameterClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ReturnClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ReturnClauseSyntaxBuilder() = default;
  ReturnClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ReturnClauseSyntaxBuilder &useArrow(TokenSyntax Arrow);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ReturnClauseSyntaxBuilder &useReturnType(TypeSyntax ReturnType);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ReturnClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class FunctionSignatureSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  FunctionSignatureSyntaxBuilder() = default;
  FunctionSignatureSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionSignatureSyntaxBuilder &useInput(ParameterClauseSyntax Input);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionSignatureSyntaxBuilder &useThrowsOrRethrowsKeyword(TokenSyntax ThrowsOrRethrowsKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionSignatureSyntaxBuilder &useOutput(ReturnClauseSyntax Output);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  FunctionSignatureSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class IfConfigClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  IfConfigClauseSyntaxBuilder() = default;
  IfConfigClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfConfigClauseSyntaxBuilder &usePoundKeyword(TokenSyntax PoundKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfConfigClauseSyntaxBuilder &useCondition(ExprSyntax Condition);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfConfigClauseSyntaxBuilder &useElements(Syntax Elements);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  IfConfigClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class IfConfigDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  IfConfigDeclSyntaxBuilder() = default;
  IfConfigDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfConfigDeclSyntaxBuilder &useClauses(IfConfigClauseListSyntax Clauses);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfConfigDeclSyntaxBuilder &addClause(IfConfigClauseSyntax Clause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfConfigDeclSyntaxBuilder &usePoundEndif(TokenSyntax PoundEndif);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  IfConfigDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PoundErrorDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PoundErrorDeclSyntaxBuilder() = default;
  PoundErrorDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundErrorDeclSyntaxBuilder &usePoundError(TokenSyntax PoundError);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundErrorDeclSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundErrorDeclSyntaxBuilder &useMessage(StringLiteralExprSyntax Message);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundErrorDeclSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PoundErrorDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PoundWarningDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PoundWarningDeclSyntaxBuilder() = default;
  PoundWarningDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundWarningDeclSyntaxBuilder &usePoundWarning(TokenSyntax PoundWarning);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundWarningDeclSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundWarningDeclSyntaxBuilder &useMessage(StringLiteralExprSyntax Message);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundWarningDeclSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PoundWarningDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PoundSourceLocationSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PoundSourceLocationSyntaxBuilder() = default;
  PoundSourceLocationSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationSyntaxBuilder &usePoundSourceLocation(TokenSyntax PoundSourceLocation);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationSyntaxBuilder &useArgs(PoundSourceLocationArgsSyntax Args);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PoundSourceLocationSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PoundSourceLocationArgsSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[7] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PoundSourceLocationArgsSyntaxBuilder() = default;
  PoundSourceLocationArgsSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationArgsSyntaxBuilder &useFileArgLabel(TokenSyntax FileArgLabel);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationArgsSyntaxBuilder &useFileArgColon(TokenSyntax FileArgColon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationArgsSyntaxBuilder &useFileName(TokenSyntax FileName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationArgsSyntaxBuilder &useComma(TokenSyntax Comma);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationArgsSyntaxBuilder &useLineArgLabel(TokenSyntax LineArgLabel);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationArgsSyntaxBuilder &useLineArgColon(TokenSyntax LineArgColon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundSourceLocationArgsSyntaxBuilder &useLineNumber(TokenSyntax LineNumber);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PoundSourceLocationArgsSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DeclModifierSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DeclModifierSyntaxBuilder() = default;
  DeclModifierSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclModifierSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclModifierSyntaxBuilder &useDetailLeftParen(TokenSyntax DetailLeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclModifierSyntaxBuilder &useDetail(TokenSyntax Detail);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclModifierSyntaxBuilder &useDetailRightParen(TokenSyntax DetailRightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DeclModifierSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class InheritedTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  InheritedTypeSyntaxBuilder() = default;
  InheritedTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InheritedTypeSyntaxBuilder &useTypeName(TypeSyntax TypeName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InheritedTypeSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  InheritedTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TypeInheritanceClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TypeInheritanceClauseSyntaxBuilder() = default;
  TypeInheritanceClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypeInheritanceClauseSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypeInheritanceClauseSyntaxBuilder &useInheritedTypeCollection(InheritedTypeListSyntax InheritedTypeCollection);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypeInheritanceClauseSyntaxBuilder &addInheritedType(InheritedTypeSyntax InheritedType);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TypeInheritanceClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ClassDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[8] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ClassDeclSyntaxBuilder() = default;
  ClassDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassDeclSyntaxBuilder &useClassKeyword(TokenSyntax ClassKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassDeclSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassDeclSyntaxBuilder &useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassDeclSyntaxBuilder &useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassDeclSyntaxBuilder &useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassDeclSyntaxBuilder &useMembers(MemberDeclBlockSyntax Members);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ClassDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class StructDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[8] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  StructDeclSyntaxBuilder() = default;
  StructDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StructDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StructDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StructDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StructDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StructDeclSyntaxBuilder &useStructKeyword(TokenSyntax StructKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StructDeclSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StructDeclSyntaxBuilder &useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StructDeclSyntaxBuilder &useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StructDeclSyntaxBuilder &useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  StructDeclSyntaxBuilder &useMembers(MemberDeclBlockSyntax Members);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  StructDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ProtocolDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[7] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ProtocolDeclSyntaxBuilder() = default;
  ProtocolDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ProtocolDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ProtocolDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ProtocolDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ProtocolDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ProtocolDeclSyntaxBuilder &useProtocolKeyword(TokenSyntax ProtocolKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ProtocolDeclSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ProtocolDeclSyntaxBuilder &useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ProtocolDeclSyntaxBuilder &useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ProtocolDeclSyntaxBuilder &useMembers(MemberDeclBlockSyntax Members);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ProtocolDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ExtensionDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[7] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ExtensionDeclSyntaxBuilder() = default;
  ExtensionDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExtensionDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExtensionDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExtensionDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExtensionDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExtensionDeclSyntaxBuilder &useExtensionKeyword(TokenSyntax ExtensionKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExtensionDeclSyntaxBuilder &useExtendedType(TypeSyntax ExtendedType);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExtensionDeclSyntaxBuilder &useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExtensionDeclSyntaxBuilder &useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExtensionDeclSyntaxBuilder &useMembers(MemberDeclBlockSyntax Members);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ExtensionDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class MemberDeclBlockSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  MemberDeclBlockSyntaxBuilder() = default;
  MemberDeclBlockSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberDeclBlockSyntaxBuilder &useLeftBrace(TokenSyntax LeftBrace);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberDeclBlockSyntaxBuilder &useMembers(MemberDeclListSyntax Members);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberDeclBlockSyntaxBuilder &addMember(MemberDeclListItemSyntax Member);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberDeclBlockSyntaxBuilder &useRightBrace(TokenSyntax RightBrace);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  MemberDeclBlockSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class MemberDeclListItemSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  MemberDeclListItemSyntaxBuilder() = default;
  MemberDeclListItemSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberDeclListItemSyntaxBuilder &useDecl(DeclSyntax Decl);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberDeclListItemSyntaxBuilder &useSemicolon(TokenSyntax Semicolon);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  MemberDeclListItemSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SourceFileSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SourceFileSyntaxBuilder() = default;
  SourceFileSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SourceFileSyntaxBuilder &useStatements(CodeBlockItemListSyntax Statements);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SourceFileSyntaxBuilder &addStatement(CodeBlockItemSyntax Statement);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SourceFileSyntaxBuilder &useEOFToken(TokenSyntax EOFToken);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SourceFileSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class InitializerClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  InitializerClauseSyntaxBuilder() = default;
  InitializerClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerClauseSyntaxBuilder &useEqual(TokenSyntax Equal);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerClauseSyntaxBuilder &useValue(ExprSyntax Value);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  InitializerClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class FunctionParameterSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[8] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  FunctionParameterSyntaxBuilder() = default;
  FunctionParameterSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionParameterSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionParameterSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionParameterSyntaxBuilder &useFirstName(TokenSyntax FirstName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionParameterSyntaxBuilder &useSecondName(TokenSyntax SecondName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionParameterSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionParameterSyntaxBuilder &useType(TypeSyntax Type);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionParameterSyntaxBuilder &useEllipsis(TokenSyntax Ellipsis);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionParameterSyntaxBuilder &useDefaultArgument(InitializerClauseSyntax DefaultArgument);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionParameterSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  FunctionParameterSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class FunctionDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[8] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  FunctionDeclSyntaxBuilder() = default;
  FunctionDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionDeclSyntaxBuilder &useFuncKeyword(TokenSyntax FuncKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionDeclSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionDeclSyntaxBuilder &useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionDeclSyntaxBuilder &useSignature(FunctionSignatureSyntax Signature);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionDeclSyntaxBuilder &useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionDeclSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  FunctionDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class InitializerDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[9] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  InitializerDeclSyntaxBuilder() = default;
  InitializerDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &useInitKeyword(TokenSyntax InitKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &useOptionalMark(TokenSyntax OptionalMark);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &useParameters(ParameterClauseSyntax Parameters);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &useThrowsOrRethrowsKeyword(TokenSyntax ThrowsOrRethrowsKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  InitializerDeclSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  InitializerDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DeinitializerDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DeinitializerDeclSyntaxBuilder() = default;
  DeinitializerDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeinitializerDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeinitializerDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeinitializerDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeinitializerDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeinitializerDeclSyntaxBuilder &useDeinitKeyword(TokenSyntax DeinitKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeinitializerDeclSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DeinitializerDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SubscriptDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[8] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SubscriptDeclSyntaxBuilder() = default;
  SubscriptDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptDeclSyntaxBuilder &useSubscriptKeyword(TokenSyntax SubscriptKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptDeclSyntaxBuilder &useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptDeclSyntaxBuilder &useIndices(ParameterClauseSyntax Indices);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptDeclSyntaxBuilder &useResult(ReturnClauseSyntax Result);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptDeclSyntaxBuilder &useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SubscriptDeclSyntaxBuilder &useAccessor(Syntax Accessor);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SubscriptDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AccessLevelModifierSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AccessLevelModifierSyntaxBuilder() = default;
  AccessLevelModifierSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessLevelModifierSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessLevelModifierSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessLevelModifierSyntaxBuilder &useModifier(TokenSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessLevelModifierSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AccessLevelModifierSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AccessPathComponentSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AccessPathComponentSyntaxBuilder() = default;
  AccessPathComponentSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessPathComponentSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessPathComponentSyntaxBuilder &useTrailingDot(TokenSyntax TrailingDot);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AccessPathComponentSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ImportDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ImportDeclSyntaxBuilder() = default;
  ImportDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImportDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImportDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImportDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImportDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImportDeclSyntaxBuilder &useImportTok(TokenSyntax ImportTok);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImportDeclSyntaxBuilder &useImportKind(TokenSyntax ImportKind);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImportDeclSyntaxBuilder &usePath(AccessPathSyntax Path);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImportDeclSyntaxBuilder &addPathComponent(AccessPathComponentSyntax PathComponent);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ImportDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AccessorParameterSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AccessorParameterSyntaxBuilder() = default;
  AccessorParameterSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorParameterSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorParameterSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorParameterSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AccessorParameterSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AccessorDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AccessorDeclSyntaxBuilder() = default;
  AccessorDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorDeclSyntaxBuilder &useModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorDeclSyntaxBuilder &useAccessorKind(TokenSyntax AccessorKind);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorDeclSyntaxBuilder &useParameter(AccessorParameterSyntax Parameter);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorDeclSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AccessorDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AccessorBlockSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AccessorBlockSyntaxBuilder() = default;
  AccessorBlockSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorBlockSyntaxBuilder &useLeftBrace(TokenSyntax LeftBrace);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorBlockSyntaxBuilder &useAccessors(AccessorListSyntax Accessors);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorBlockSyntaxBuilder &addAccessor(AccessorDeclSyntax Accessor);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AccessorBlockSyntaxBuilder &useRightBrace(TokenSyntax RightBrace);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AccessorBlockSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PatternBindingSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PatternBindingSyntaxBuilder() = default;
  PatternBindingSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PatternBindingSyntaxBuilder &usePattern(PatternSyntax Pattern);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PatternBindingSyntaxBuilder &useTypeAnnotation(TypeAnnotationSyntax TypeAnnotation);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PatternBindingSyntaxBuilder &useInitializer(InitializerClauseSyntax Initializer);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PatternBindingSyntaxBuilder &useAccessor(Syntax Accessor);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PatternBindingSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PatternBindingSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class VariableDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  VariableDeclSyntaxBuilder() = default;
  VariableDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  VariableDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  VariableDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  VariableDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  VariableDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  VariableDeclSyntaxBuilder &useLetOrVarKeyword(TokenSyntax LetOrVarKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  VariableDeclSyntaxBuilder &useBindings(PatternBindingListSyntax Bindings);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  VariableDeclSyntaxBuilder &addBinding(PatternBindingSyntax Binding);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  VariableDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class EnumCaseElementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  EnumCaseElementSyntaxBuilder() = default;
  EnumCaseElementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseElementSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseElementSyntaxBuilder &useAssociatedValue(ParameterClauseSyntax AssociatedValue);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseElementSyntaxBuilder &useRawValue(InitializerClauseSyntax RawValue);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseElementSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  EnumCaseElementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class EnumCaseDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  EnumCaseDeclSyntaxBuilder() = default;
  EnumCaseDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseDeclSyntaxBuilder &useCaseKeyword(TokenSyntax CaseKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseDeclSyntaxBuilder &useElements(EnumCaseElementListSyntax Elements);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCaseDeclSyntaxBuilder &addElement(EnumCaseElementSyntax Element);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  EnumCaseDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class EnumDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[8] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  EnumDeclSyntaxBuilder() = default;
  EnumDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumDeclSyntaxBuilder &useEnumKeyword(TokenSyntax EnumKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumDeclSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumDeclSyntaxBuilder &useGenericParameters(GenericParameterClauseSyntax GenericParameters);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumDeclSyntaxBuilder &useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumDeclSyntaxBuilder &useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumDeclSyntaxBuilder &useMembers(MemberDeclBlockSyntax Members);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  EnumDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class OperatorDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  OperatorDeclSyntaxBuilder() = default;
  OperatorDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OperatorDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OperatorDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OperatorDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OperatorDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OperatorDeclSyntaxBuilder &useOperatorKeyword(TokenSyntax OperatorKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OperatorDeclSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OperatorDeclSyntaxBuilder &useOperatorPrecedenceAndTypes(OperatorPrecedenceAndTypesSyntax OperatorPrecedenceAndTypes);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  OperatorDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class OperatorPrecedenceAndTypesSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  OperatorPrecedenceAndTypesSyntaxBuilder() = default;
  OperatorPrecedenceAndTypesSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OperatorPrecedenceAndTypesSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OperatorPrecedenceAndTypesSyntaxBuilder &usePrecedenceGroupAndDesignatedTypes(IdentifierListSyntax PrecedenceGroupAndDesignatedTypes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OperatorPrecedenceAndTypesSyntaxBuilder &addPrecedenceGroupAndDesignatedType(TokenSyntax PrecedenceGroupAndDesignatedType);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  OperatorPrecedenceAndTypesSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PrecedenceGroupDeclSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[7] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PrecedenceGroupDeclSyntaxBuilder() = default;
  PrecedenceGroupDeclSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupDeclSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupDeclSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupDeclSyntaxBuilder &useModifiers(ModifierListSyntax Modifiers);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupDeclSyntaxBuilder &addModifier(DeclModifierSyntax Modifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupDeclSyntaxBuilder &usePrecedencegroupKeyword(TokenSyntax PrecedencegroupKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupDeclSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupDeclSyntaxBuilder &useLeftBrace(TokenSyntax LeftBrace);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupDeclSyntaxBuilder &useGroupAttributes(PrecedenceGroupAttributeListSyntax GroupAttributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupDeclSyntaxBuilder &addGroupAttribute(Syntax GroupAttribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupDeclSyntaxBuilder &useRightBrace(TokenSyntax RightBrace);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PrecedenceGroupDeclSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PrecedenceGroupRelationSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PrecedenceGroupRelationSyntaxBuilder() = default;
  PrecedenceGroupRelationSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupRelationSyntaxBuilder &useHigherThanOrLowerThan(TokenSyntax HigherThanOrLowerThan);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupRelationSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupRelationSyntaxBuilder &useOtherNames(PrecedenceGroupNameListSyntax OtherNames);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupRelationSyntaxBuilder &addOtherName(PrecedenceGroupNameElementSyntax OtherName);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PrecedenceGroupRelationSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PrecedenceGroupNameElementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PrecedenceGroupNameElementSyntaxBuilder() = default;
  PrecedenceGroupNameElementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupNameElementSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupNameElementSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PrecedenceGroupNameElementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PrecedenceGroupAssignmentSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PrecedenceGroupAssignmentSyntaxBuilder() = default;
  PrecedenceGroupAssignmentSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupAssignmentSyntaxBuilder &useAssignmentKeyword(TokenSyntax AssignmentKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupAssignmentSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupAssignmentSyntaxBuilder &useFlag(TokenSyntax Flag);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PrecedenceGroupAssignmentSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PrecedenceGroupAssociativitySyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PrecedenceGroupAssociativitySyntaxBuilder() = default;
  PrecedenceGroupAssociativitySyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupAssociativitySyntaxBuilder &useAssociativityKeyword(TokenSyntax AssociativityKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupAssociativitySyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PrecedenceGroupAssociativitySyntaxBuilder &useValue(TokenSyntax Value);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PrecedenceGroupAssociativitySyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class CustomAttributeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  CustomAttributeSyntaxBuilder() = default;
  CustomAttributeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CustomAttributeSyntaxBuilder &useAtSignToken(TokenSyntax AtSignToken);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CustomAttributeSyntaxBuilder &useAttributeName(TypeSyntax AttributeName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CustomAttributeSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CustomAttributeSyntaxBuilder &useArgumentList(FunctionCallArgumentListSyntax ArgumentList);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CustomAttributeSyntaxBuilder &addArgument(FunctionCallArgumentSyntax Argument);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CustomAttributeSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  CustomAttributeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AttributeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[6] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AttributeSyntaxBuilder() = default;
  AttributeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributeSyntaxBuilder &useAtSignToken(TokenSyntax AtSignToken);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributeSyntaxBuilder &useAttributeName(TokenSyntax AttributeName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributeSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributeSyntaxBuilder &useArgument(Syntax Argument);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributeSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributeSyntaxBuilder &useTokenList(TokenListSyntax TokenList);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributeSyntaxBuilder &addToken(TokenSyntax Token);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AttributeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class LabeledSpecializeEntrySyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  LabeledSpecializeEntrySyntaxBuilder() = default;
  LabeledSpecializeEntrySyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  LabeledSpecializeEntrySyntaxBuilder &useLabel(TokenSyntax Label);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  LabeledSpecializeEntrySyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  LabeledSpecializeEntrySyntaxBuilder &useValue(TokenSyntax Value);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  LabeledSpecializeEntrySyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  LabeledSpecializeEntrySyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class NamedAttributeStringArgumentSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  NamedAttributeStringArgumentSyntaxBuilder() = default;
  NamedAttributeStringArgumentSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  NamedAttributeStringArgumentSyntaxBuilder &useNameTok(TokenSyntax NameTok);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  NamedAttributeStringArgumentSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  NamedAttributeStringArgumentSyntaxBuilder &useStringOrDeclname(Syntax StringOrDeclname);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  NamedAttributeStringArgumentSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DeclNameSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DeclNameSyntaxBuilder() = default;
  DeclNameSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclNameSyntaxBuilder &useDeclBaseName(Syntax DeclBaseName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclNameSyntaxBuilder &useDeclNameArguments(DeclNameArgumentsSyntax DeclNameArguments);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DeclNameSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ImplementsAttributeArgumentsSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ImplementsAttributeArgumentsSyntaxBuilder() = default;
  ImplementsAttributeArgumentsSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImplementsAttributeArgumentsSyntaxBuilder &useType(SimpleTypeIdentifierSyntax Type);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImplementsAttributeArgumentsSyntaxBuilder &useComma(TokenSyntax Comma);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImplementsAttributeArgumentsSyntaxBuilder &useDeclBaseName(Syntax DeclBaseName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImplementsAttributeArgumentsSyntaxBuilder &useDeclNameArguments(DeclNameArgumentsSyntax DeclNameArguments);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ImplementsAttributeArgumentsSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ObjCSelectorPieceSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ObjCSelectorPieceSyntaxBuilder() = default;
  ObjCSelectorPieceSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjCSelectorPieceSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ObjCSelectorPieceSyntaxBuilder &useColon(TokenSyntax Colon);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ObjCSelectorPieceSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ContinueStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ContinueStmtSyntaxBuilder() = default;
  ContinueStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ContinueStmtSyntaxBuilder &useContinueKeyword(TokenSyntax ContinueKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ContinueStmtSyntaxBuilder &useLabel(TokenSyntax Label);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ContinueStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class WhileStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  WhileStmtSyntaxBuilder() = default;
  WhileStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  WhileStmtSyntaxBuilder &useLabelName(TokenSyntax LabelName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  WhileStmtSyntaxBuilder &useLabelColon(TokenSyntax LabelColon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  WhileStmtSyntaxBuilder &useWhileKeyword(TokenSyntax WhileKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  WhileStmtSyntaxBuilder &useConditions(ConditionElementListSyntax Conditions);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  WhileStmtSyntaxBuilder &addCondition(ConditionElementSyntax Condition);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  WhileStmtSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  WhileStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DeferStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DeferStmtSyntaxBuilder() = default;
  DeferStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeferStmtSyntaxBuilder &useDeferKeyword(TokenSyntax DeferKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeferStmtSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DeferStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ExpressionStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ExpressionStmtSyntaxBuilder() = default;
  ExpressionStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExpressionStmtSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ExpressionStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class RepeatWhileStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[6] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  RepeatWhileStmtSyntaxBuilder() = default;
  RepeatWhileStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  RepeatWhileStmtSyntaxBuilder &useLabelName(TokenSyntax LabelName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  RepeatWhileStmtSyntaxBuilder &useLabelColon(TokenSyntax LabelColon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  RepeatWhileStmtSyntaxBuilder &useRepeatKeyword(TokenSyntax RepeatKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  RepeatWhileStmtSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  RepeatWhileStmtSyntaxBuilder &useWhileKeyword(TokenSyntax WhileKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  RepeatWhileStmtSyntaxBuilder &useCondition(ExprSyntax Condition);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  RepeatWhileStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class GuardStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  GuardStmtSyntaxBuilder() = default;
  GuardStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GuardStmtSyntaxBuilder &useGuardKeyword(TokenSyntax GuardKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GuardStmtSyntaxBuilder &useConditions(ConditionElementListSyntax Conditions);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GuardStmtSyntaxBuilder &addCondition(ConditionElementSyntax Condition);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GuardStmtSyntaxBuilder &useElseKeyword(TokenSyntax ElseKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GuardStmtSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  GuardStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class WhereClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  WhereClauseSyntaxBuilder() = default;
  WhereClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  WhereClauseSyntaxBuilder &useWhereKeyword(TokenSyntax WhereKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  WhereClauseSyntaxBuilder &useGuardResult(ExprSyntax GuardResult);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  WhereClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ForInStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[10] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ForInStmtSyntaxBuilder() = default;
  ForInStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForInStmtSyntaxBuilder &useLabelName(TokenSyntax LabelName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForInStmtSyntaxBuilder &useLabelColon(TokenSyntax LabelColon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForInStmtSyntaxBuilder &useForKeyword(TokenSyntax ForKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForInStmtSyntaxBuilder &useCaseKeyword(TokenSyntax CaseKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForInStmtSyntaxBuilder &usePattern(PatternSyntax Pattern);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForInStmtSyntaxBuilder &useTypeAnnotation(TypeAnnotationSyntax TypeAnnotation);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForInStmtSyntaxBuilder &useInKeyword(TokenSyntax InKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForInStmtSyntaxBuilder &useSequenceExpr(ExprSyntax SequenceExpr);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForInStmtSyntaxBuilder &useWhereClause(WhereClauseSyntax WhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ForInStmtSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ForInStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SwitchStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[7] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SwitchStmtSyntaxBuilder() = default;
  SwitchStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchStmtSyntaxBuilder &useLabelName(TokenSyntax LabelName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchStmtSyntaxBuilder &useLabelColon(TokenSyntax LabelColon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchStmtSyntaxBuilder &useSwitchKeyword(TokenSyntax SwitchKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchStmtSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchStmtSyntaxBuilder &useLeftBrace(TokenSyntax LeftBrace);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchStmtSyntaxBuilder &useCases(SwitchCaseListSyntax Cases);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchStmtSyntaxBuilder &addCase(Syntax Case);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchStmtSyntaxBuilder &useRightBrace(TokenSyntax RightBrace);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SwitchStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DoStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DoStmtSyntaxBuilder() = default;
  DoStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DoStmtSyntaxBuilder &useLabelName(TokenSyntax LabelName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DoStmtSyntaxBuilder &useLabelColon(TokenSyntax LabelColon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DoStmtSyntaxBuilder &useDoKeyword(TokenSyntax DoKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DoStmtSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DoStmtSyntaxBuilder &useCatchClauses(CatchClauseListSyntax CatchClauses);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DoStmtSyntaxBuilder &addCatchClause(CatchClauseSyntax CatchClause);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DoStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ReturnStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ReturnStmtSyntaxBuilder() = default;
  ReturnStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ReturnStmtSyntaxBuilder &useReturnKeyword(TokenSyntax ReturnKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ReturnStmtSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ReturnStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class YieldStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  YieldStmtSyntaxBuilder() = default;
  YieldStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  YieldStmtSyntaxBuilder &useYieldKeyword(TokenSyntax YieldKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  YieldStmtSyntaxBuilder &useYields(Syntax Yields);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  YieldStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class YieldListSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  YieldListSyntaxBuilder() = default;
  YieldListSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  YieldListSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  YieldListSyntaxBuilder &useElementList(ExprListSyntax ElementList);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  YieldListSyntaxBuilder &addElement(ExprSyntax Element);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  YieldListSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  YieldListSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  YieldListSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class FallthroughStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  FallthroughStmtSyntaxBuilder() = default;
  FallthroughStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FallthroughStmtSyntaxBuilder &useFallthroughKeyword(TokenSyntax FallthroughKeyword);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  FallthroughStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class BreakStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  BreakStmtSyntaxBuilder() = default;
  BreakStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  BreakStmtSyntaxBuilder &useBreakKeyword(TokenSyntax BreakKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  BreakStmtSyntaxBuilder &useLabel(TokenSyntax Label);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  BreakStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ConditionElementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ConditionElementSyntaxBuilder() = default;
  ConditionElementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ConditionElementSyntaxBuilder &useCondition(Syntax Condition);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ConditionElementSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ConditionElementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AvailabilityConditionSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AvailabilityConditionSyntaxBuilder() = default;
  AvailabilityConditionSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityConditionSyntaxBuilder &usePoundAvailableKeyword(TokenSyntax PoundAvailableKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityConditionSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityConditionSyntaxBuilder &useAvailabilitySpec(AvailabilitySpecListSyntax AvailabilitySpec);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityConditionSyntaxBuilder &addAvailabilityArgument(AvailabilityArgumentSyntax AvailabilityArgument);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityConditionSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AvailabilityConditionSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class MatchingPatternConditionSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  MatchingPatternConditionSyntaxBuilder() = default;
  MatchingPatternConditionSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MatchingPatternConditionSyntaxBuilder &useCaseKeyword(TokenSyntax CaseKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MatchingPatternConditionSyntaxBuilder &usePattern(PatternSyntax Pattern);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MatchingPatternConditionSyntaxBuilder &useTypeAnnotation(TypeAnnotationSyntax TypeAnnotation);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MatchingPatternConditionSyntaxBuilder &useInitializer(InitializerClauseSyntax Initializer);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  MatchingPatternConditionSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class OptionalBindingConditionSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  OptionalBindingConditionSyntaxBuilder() = default;
  OptionalBindingConditionSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OptionalBindingConditionSyntaxBuilder &useLetOrVarKeyword(TokenSyntax LetOrVarKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OptionalBindingConditionSyntaxBuilder &usePattern(PatternSyntax Pattern);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OptionalBindingConditionSyntaxBuilder &useTypeAnnotation(TypeAnnotationSyntax TypeAnnotation);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OptionalBindingConditionSyntaxBuilder &useInitializer(InitializerClauseSyntax Initializer);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  OptionalBindingConditionSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DeclarationStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DeclarationStmtSyntaxBuilder() = default;
  DeclarationStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DeclarationStmtSyntaxBuilder &useDeclaration(DeclSyntax Declaration);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DeclarationStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ThrowStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ThrowStmtSyntaxBuilder() = default;
  ThrowStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ThrowStmtSyntaxBuilder &useThrowKeyword(TokenSyntax ThrowKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ThrowStmtSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ThrowStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class IfStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[7] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  IfStmtSyntaxBuilder() = default;
  IfStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfStmtSyntaxBuilder &useLabelName(TokenSyntax LabelName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfStmtSyntaxBuilder &useLabelColon(TokenSyntax LabelColon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfStmtSyntaxBuilder &useIfKeyword(TokenSyntax IfKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfStmtSyntaxBuilder &useConditions(ConditionElementListSyntax Conditions);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfStmtSyntaxBuilder &addCondition(ConditionElementSyntax Condition);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfStmtSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfStmtSyntaxBuilder &useElseKeyword(TokenSyntax ElseKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IfStmtSyntaxBuilder &useElseBody(Syntax ElseBody);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  IfStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ElseIfContinuationSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ElseIfContinuationSyntaxBuilder() = default;
  ElseIfContinuationSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ElseIfContinuationSyntaxBuilder &useIfStatement(IfStmtSyntax IfStatement);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ElseIfContinuationSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ElseBlockSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ElseBlockSyntaxBuilder() = default;
  ElseBlockSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ElseBlockSyntaxBuilder &useElseKeyword(TokenSyntax ElseKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ElseBlockSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ElseBlockSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SwitchCaseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SwitchCaseSyntaxBuilder() = default;
  SwitchCaseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchCaseSyntaxBuilder &useUnknownAttr(AttributeSyntax UnknownAttr);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchCaseSyntaxBuilder &useLabel(Syntax Label);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchCaseSyntaxBuilder &useStatements(CodeBlockItemListSyntax Statements);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchCaseSyntaxBuilder &addStatement(CodeBlockItemSyntax Statement);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SwitchCaseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SwitchDefaultLabelSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SwitchDefaultLabelSyntaxBuilder() = default;
  SwitchDefaultLabelSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchDefaultLabelSyntaxBuilder &useDefaultKeyword(TokenSyntax DefaultKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchDefaultLabelSyntaxBuilder &useColon(TokenSyntax Colon);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SwitchDefaultLabelSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class CaseItemSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  CaseItemSyntaxBuilder() = default;
  CaseItemSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CaseItemSyntaxBuilder &usePattern(PatternSyntax Pattern);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CaseItemSyntaxBuilder &useWhereClause(WhereClauseSyntax WhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CaseItemSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  CaseItemSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SwitchCaseLabelSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SwitchCaseLabelSyntaxBuilder() = default;
  SwitchCaseLabelSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchCaseLabelSyntaxBuilder &useCaseKeyword(TokenSyntax CaseKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchCaseLabelSyntaxBuilder &useCaseItems(CaseItemListSyntax CaseItems);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchCaseLabelSyntaxBuilder &addCaseItem(CaseItemSyntax CaseItem);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SwitchCaseLabelSyntaxBuilder &useColon(TokenSyntax Colon);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SwitchCaseLabelSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class CatchClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  CatchClauseSyntaxBuilder() = default;
  CatchClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CatchClauseSyntaxBuilder &useCatchKeyword(TokenSyntax CatchKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CatchClauseSyntaxBuilder &usePattern(PatternSyntax Pattern);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CatchClauseSyntaxBuilder &useWhereClause(WhereClauseSyntax WhereClause);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CatchClauseSyntaxBuilder &useBody(CodeBlockSyntax Body);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  CatchClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class PoundAssertStmtSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[6] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  PoundAssertStmtSyntaxBuilder() = default;
  PoundAssertStmtSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundAssertStmtSyntaxBuilder &usePoundAssert(TokenSyntax PoundAssert);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundAssertStmtSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundAssertStmtSyntaxBuilder &useCondition(ExprSyntax Condition);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundAssertStmtSyntaxBuilder &useComma(TokenSyntax Comma);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundAssertStmtSyntaxBuilder &useMessage(TokenSyntax Message);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  PoundAssertStmtSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  PoundAssertStmtSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class GenericWhereClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  GenericWhereClauseSyntaxBuilder() = default;
  GenericWhereClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericWhereClauseSyntaxBuilder &useWhereKeyword(TokenSyntax WhereKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericWhereClauseSyntaxBuilder &useRequirementList(GenericRequirementListSyntax RequirementList);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericWhereClauseSyntaxBuilder &addRequirement(Syntax Requirement);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  GenericWhereClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SameTypeRequirementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SameTypeRequirementSyntaxBuilder() = default;
  SameTypeRequirementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SameTypeRequirementSyntaxBuilder &useLeftTypeIdentifier(TypeSyntax LeftTypeIdentifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SameTypeRequirementSyntaxBuilder &useEqualityToken(TokenSyntax EqualityToken);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SameTypeRequirementSyntaxBuilder &useRightTypeIdentifier(TypeSyntax RightTypeIdentifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SameTypeRequirementSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SameTypeRequirementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class GenericParameterSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  GenericParameterSyntaxBuilder() = default;
  GenericParameterSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericParameterSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericParameterSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericParameterSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericParameterSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericParameterSyntaxBuilder &useInheritedType(TypeSyntax InheritedType);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericParameterSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  GenericParameterSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class GenericParameterClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  GenericParameterClauseSyntaxBuilder() = default;
  GenericParameterClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericParameterClauseSyntaxBuilder &useLeftAngleBracket(TokenSyntax LeftAngleBracket);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericParameterClauseSyntaxBuilder &useGenericParameterList(GenericParameterListSyntax GenericParameterList);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericParameterClauseSyntaxBuilder &addGenericParameter(GenericParameterSyntax GenericParameter);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericParameterClauseSyntaxBuilder &useRightAngleBracket(TokenSyntax RightAngleBracket);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  GenericParameterClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ConformanceRequirementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ConformanceRequirementSyntaxBuilder() = default;
  ConformanceRequirementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ConformanceRequirementSyntaxBuilder &useLeftTypeIdentifier(TypeSyntax LeftTypeIdentifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ConformanceRequirementSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ConformanceRequirementSyntaxBuilder &useRightTypeIdentifier(TypeSyntax RightTypeIdentifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ConformanceRequirementSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ConformanceRequirementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SimpleTypeIdentifierSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SimpleTypeIdentifierSyntaxBuilder() = default;
  SimpleTypeIdentifierSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SimpleTypeIdentifierSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SimpleTypeIdentifierSyntaxBuilder &useGenericArgumentClause(GenericArgumentClauseSyntax GenericArgumentClause);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SimpleTypeIdentifierSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class MemberTypeIdentifierSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  MemberTypeIdentifierSyntaxBuilder() = default;
  MemberTypeIdentifierSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberTypeIdentifierSyntaxBuilder &useBaseType(TypeSyntax BaseType);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberTypeIdentifierSyntaxBuilder &usePeriod(TokenSyntax Period);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberTypeIdentifierSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MemberTypeIdentifierSyntaxBuilder &useGenericArgumentClause(GenericArgumentClauseSyntax GenericArgumentClause);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  MemberTypeIdentifierSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ClassRestrictionTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ClassRestrictionTypeSyntaxBuilder() = default;
  ClassRestrictionTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ClassRestrictionTypeSyntaxBuilder &useClassKeyword(TokenSyntax ClassKeyword);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ClassRestrictionTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ArrayTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ArrayTypeSyntaxBuilder() = default;
  ArrayTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrayTypeSyntaxBuilder &useLeftSquareBracket(TokenSyntax LeftSquareBracket);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrayTypeSyntaxBuilder &useElementType(TypeSyntax ElementType);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ArrayTypeSyntaxBuilder &useRightSquareBracket(TokenSyntax RightSquareBracket);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ArrayTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class DictionaryTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[5] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  DictionaryTypeSyntaxBuilder() = default;
  DictionaryTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryTypeSyntaxBuilder &useLeftSquareBracket(TokenSyntax LeftSquareBracket);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryTypeSyntaxBuilder &useKeyType(TypeSyntax KeyType);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryTypeSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryTypeSyntaxBuilder &useValueType(TypeSyntax ValueType);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  DictionaryTypeSyntaxBuilder &useRightSquareBracket(TokenSyntax RightSquareBracket);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  DictionaryTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class MetatypeTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  MetatypeTypeSyntaxBuilder() = default;
  MetatypeTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MetatypeTypeSyntaxBuilder &useBaseType(TypeSyntax BaseType);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MetatypeTypeSyntaxBuilder &usePeriod(TokenSyntax Period);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  MetatypeTypeSyntaxBuilder &useTypeOrProtocol(TokenSyntax TypeOrProtocol);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  MetatypeTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class OptionalTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  OptionalTypeSyntaxBuilder() = default;
  OptionalTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OptionalTypeSyntaxBuilder &useWrappedType(TypeSyntax WrappedType);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OptionalTypeSyntaxBuilder &useQuestionMark(TokenSyntax QuestionMark);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  OptionalTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class SomeTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  SomeTypeSyntaxBuilder() = default;
  SomeTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SomeTypeSyntaxBuilder &useSomeSpecifier(TokenSyntax SomeSpecifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  SomeTypeSyntaxBuilder &useBaseType(TypeSyntax BaseType);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  SomeTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ImplicitlyUnwrappedOptionalTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ImplicitlyUnwrappedOptionalTypeSyntaxBuilder() = default;
  ImplicitlyUnwrappedOptionalTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImplicitlyUnwrappedOptionalTypeSyntaxBuilder &useWrappedType(TypeSyntax WrappedType);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ImplicitlyUnwrappedOptionalTypeSyntaxBuilder &useExclamationMark(TokenSyntax ExclamationMark);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ImplicitlyUnwrappedOptionalTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class CompositionTypeElementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  CompositionTypeElementSyntaxBuilder() = default;
  CompositionTypeElementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CompositionTypeElementSyntaxBuilder &useType(TypeSyntax Type);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CompositionTypeElementSyntaxBuilder &useAmpersand(TokenSyntax Ampersand);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  CompositionTypeElementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class CompositionTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  CompositionTypeSyntaxBuilder() = default;
  CompositionTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CompositionTypeSyntaxBuilder &useElements(CompositionTypeElementListSyntax Elements);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  CompositionTypeSyntaxBuilder &addElement(CompositionTypeElementSyntax Element);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  CompositionTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TupleTypeElementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[8] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TupleTypeElementSyntaxBuilder() = default;
  TupleTypeElementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeElementSyntaxBuilder &useInOut(TokenSyntax InOut);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeElementSyntaxBuilder &useName(TokenSyntax Name);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeElementSyntaxBuilder &useSecondName(TokenSyntax SecondName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeElementSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeElementSyntaxBuilder &useType(TypeSyntax Type);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeElementSyntaxBuilder &useEllipsis(TokenSyntax Ellipsis);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeElementSyntaxBuilder &useInitializer(InitializerClauseSyntax Initializer);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeElementSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TupleTypeElementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TupleTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TupleTypeSyntaxBuilder() = default;
  TupleTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeSyntaxBuilder &useElements(TupleTypeElementListSyntax Elements);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeSyntaxBuilder &addElement(TupleTypeElementSyntax Element);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TupleTypeSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TupleTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class FunctionTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[6] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  FunctionTypeSyntaxBuilder() = default;
  FunctionTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionTypeSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionTypeSyntaxBuilder &useArguments(TupleTypeElementListSyntax Arguments);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionTypeSyntaxBuilder &addArgument(TupleTypeElementSyntax Argument);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionTypeSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionTypeSyntaxBuilder &useThrowsOrRethrowsKeyword(TokenSyntax ThrowsOrRethrowsKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionTypeSyntaxBuilder &useArrow(TokenSyntax Arrow);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  FunctionTypeSyntaxBuilder &useReturnType(TypeSyntax ReturnType);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  FunctionTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AttributedTypeSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AttributedTypeSyntaxBuilder() = default;
  AttributedTypeSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributedTypeSyntaxBuilder &useSpecifier(TokenSyntax Specifier);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributedTypeSyntaxBuilder &useAttributes(AttributeListSyntax Attributes);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributedTypeSyntaxBuilder &addAttribute(Syntax Attribute);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AttributedTypeSyntaxBuilder &useBaseType(TypeSyntax BaseType);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AttributedTypeSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class GenericArgumentSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  GenericArgumentSyntaxBuilder() = default;
  GenericArgumentSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericArgumentSyntaxBuilder &useArgumentType(TypeSyntax ArgumentType);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericArgumentSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  GenericArgumentSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class GenericArgumentClauseSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  GenericArgumentClauseSyntaxBuilder() = default;
  GenericArgumentClauseSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericArgumentClauseSyntaxBuilder &useLeftAngleBracket(TokenSyntax LeftAngleBracket);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericArgumentClauseSyntaxBuilder &useArguments(GenericArgumentListSyntax Arguments);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericArgumentClauseSyntaxBuilder &addArgument(GenericArgumentSyntax Argument);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  GenericArgumentClauseSyntaxBuilder &useRightAngleBracket(TokenSyntax RightAngleBracket);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  GenericArgumentClauseSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TypeAnnotationSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TypeAnnotationSyntaxBuilder() = default;
  TypeAnnotationSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypeAnnotationSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TypeAnnotationSyntaxBuilder &useType(TypeSyntax Type);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TypeAnnotationSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class EnumCasePatternSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  EnumCasePatternSyntaxBuilder() = default;
  EnumCasePatternSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCasePatternSyntaxBuilder &useType(TypeSyntax Type);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCasePatternSyntaxBuilder &usePeriod(TokenSyntax Period);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCasePatternSyntaxBuilder &useCaseName(TokenSyntax CaseName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  EnumCasePatternSyntaxBuilder &useAssociatedTuple(TuplePatternSyntax AssociatedTuple);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  EnumCasePatternSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class IsTypePatternSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  IsTypePatternSyntaxBuilder() = default;
  IsTypePatternSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IsTypePatternSyntaxBuilder &useIsKeyword(TokenSyntax IsKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IsTypePatternSyntaxBuilder &useType(TypeSyntax Type);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  IsTypePatternSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class OptionalPatternSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  OptionalPatternSyntaxBuilder() = default;
  OptionalPatternSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OptionalPatternSyntaxBuilder &useSubPattern(PatternSyntax SubPattern);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  OptionalPatternSyntaxBuilder &useQuestionMark(TokenSyntax QuestionMark);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  OptionalPatternSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class IdentifierPatternSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  IdentifierPatternSyntaxBuilder() = default;
  IdentifierPatternSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  IdentifierPatternSyntaxBuilder &useIdentifier(TokenSyntax Identifier);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  IdentifierPatternSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AsTypePatternSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AsTypePatternSyntaxBuilder() = default;
  AsTypePatternSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AsTypePatternSyntaxBuilder &usePattern(PatternSyntax Pattern);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AsTypePatternSyntaxBuilder &useAsKeyword(TokenSyntax AsKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AsTypePatternSyntaxBuilder &useType(TypeSyntax Type);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AsTypePatternSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TuplePatternSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TuplePatternSyntaxBuilder() = default;
  TuplePatternSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TuplePatternSyntaxBuilder &useLeftParen(TokenSyntax LeftParen);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TuplePatternSyntaxBuilder &useElements(TuplePatternElementListSyntax Elements);
#line 56 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TuplePatternSyntaxBuilder &addElement(TuplePatternElementSyntax Element);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TuplePatternSyntaxBuilder &useRightParen(TokenSyntax RightParen);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TuplePatternSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class WildcardPatternSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  WildcardPatternSyntaxBuilder() = default;
  WildcardPatternSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  WildcardPatternSyntaxBuilder &useWildcard(TokenSyntax Wildcard);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  WildcardPatternSyntaxBuilder &useTypeAnnotation(TypeAnnotationSyntax TypeAnnotation);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  WildcardPatternSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class TuplePatternElementSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[4] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  TuplePatternElementSyntaxBuilder() = default;
  TuplePatternElementSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TuplePatternElementSyntaxBuilder &useLabelName(TokenSyntax LabelName);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TuplePatternElementSyntaxBuilder &useLabelColon(TokenSyntax LabelColon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TuplePatternElementSyntaxBuilder &usePattern(PatternSyntax Pattern);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  TuplePatternElementSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  TuplePatternElementSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ExpressionPatternSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[1] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ExpressionPatternSyntaxBuilder() = default;
  ExpressionPatternSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ExpressionPatternSyntaxBuilder &useExpression(ExprSyntax Expression);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ExpressionPatternSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class ValueBindingPatternSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  ValueBindingPatternSyntaxBuilder() = default;
  ValueBindingPatternSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ValueBindingPatternSyntaxBuilder &useLetOrVarKeyword(TokenSyntax LetOrVarKeyword);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  ValueBindingPatternSyntaxBuilder &useValuePattern(PatternSyntax ValuePattern);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  ValueBindingPatternSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AvailabilityArgumentSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AvailabilityArgumentSyntaxBuilder() = default;
  AvailabilityArgumentSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityArgumentSyntaxBuilder &useEntry(Syntax Entry);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityArgumentSyntaxBuilder &useTrailingComma(TokenSyntax TrailingComma);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AvailabilityArgumentSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AvailabilityLabeledArgumentSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AvailabilityLabeledArgumentSyntaxBuilder() = default;
  AvailabilityLabeledArgumentSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityLabeledArgumentSyntaxBuilder &useLabel(TokenSyntax Label);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityLabeledArgumentSyntaxBuilder &useColon(TokenSyntax Colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityLabeledArgumentSyntaxBuilder &useValue(Syntax Value);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AvailabilityLabeledArgumentSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class AvailabilityVersionRestrictionSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[2] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  AvailabilityVersionRestrictionSyntaxBuilder() = default;
  AvailabilityVersionRestrictionSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityVersionRestrictionSyntaxBuilder &usePlatform(TokenSyntax Platform);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  AvailabilityVersionRestrictionSyntaxBuilder &useVersion(VersionTupleSyntax Version);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  AvailabilityVersionRestrictionSyntax build();
};

#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
class VersionTupleSyntaxBuilder {
  RC<SyntaxArena> Arena = nullptr;
  RC<RawSyntax> Layout[3] = {
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 39 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
    nullptr,
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  };

public:
  VersionTupleSyntaxBuilder() = default;
  VersionTupleSyntaxBuilder(const RC<SyntaxArena> &Arena) : Arena(Arena) {}

#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  VersionTupleSyntaxBuilder &useMajorMinor(Syntax MajorMinor);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  VersionTupleSyntaxBuilder &usePatchPeriod(TokenSyntax PatchPeriod);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"
  VersionTupleSyntaxBuilder &usePatchVersion(TokenSyntax PatchVersion);
#line 59 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

  VersionTupleSyntax build();
};

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/SyntaxBuilders.h.gyb"

}
}

#endif // SWIFT_SYNTAX_BUILDERS_H
