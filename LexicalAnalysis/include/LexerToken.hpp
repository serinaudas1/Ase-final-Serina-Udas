

 
 
#ifndef LEXER_TOKEN_HPP
#define LEXER_TOKEN_HPP

#include <string>
#include <string_view>

#include "SourceLocation.hpp"

enum class LexerTokenType
{
    ParenOpen,
    ParenClose,
    FloatToken,
    IntToken,
    VarToken,

    PlusToken,
    MinusToken,
    DivideToken,
    MultiplyToken,
    AssignToken,
    PrintToken,

    Space,
    Tab,
    Newline,
    Eof,


    Unknown
};

//! Converts LexerToken to String
const char* toString(LexerTokenType t);

//! Represents a single token in the expression stream
struct LexerToken
{
    std::string value;
    SourceLocation location;
    LexerTokenType type;

    std::string toString() const
    {
        return std::string("[") + std::string(value) + "] -> \t" + location.toString() + std::string(";\t ") + ::toString(type);
    }
};

#endif  // LEXERTOKEN_HPP