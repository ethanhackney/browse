#ifndef LEX_H
#define LEX_H

#include <bitset>
#include <climits>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <regex.h>

namespace lex {

// lex token types
enum {
        LEX_TT_INV = -4, // invalid error (must be first)
        LEX_TT_ERR_IO,   // i/o error
        LEX_TT_ERR_IN,   // invalid lexeme
        LEX_TT_EOF,      // end of input
};

// invalid token type
struct bad_type {
        int tok; // offending token
};

// token
struct token {
        std::string lex; // lexeme
        int         tok; // token

        /**
         * tok constructor:
         *
         * args:
         *  @lexeme: lexeme
         *  @token:  token type
         *
         * throws
         *  bad_type{}: if one of tokens has invalid type
         */
        token(const std::string &lexeme, int type)
                : lex {lexeme},
                tok {type}
        {}
};

// invalid pattern
struct bad_pattern {
        std::string re; // offending regex
};

// token pattern to type mapping
struct token_pattern {
        regex_t re;  // token regex
        int     tok; // token type

        /**
         * token_pattern constructor:
         *
         * args:
         *  @regex: regex
         *  @tok:   token type
         *
         * throws:
         *  bad_pattern{}: if regex compilation fails 
         */
        token_pattern(const std::string& regex, int type)
                : tok {type}
        {
                auto flags = REG_NEWLINE | REG_EXTENDED;

                if (regcomp(&re, regex.c_str(), flags) != 0)
                        throw bad_pattern{regex};
        }
};

// pattern list
using pattern_list = std::vector<token_pattern>;

// abstract lexer
class lex {
private:
        pattern_list  _pat; // pattern list
        std::istream &_is;  // input stream
        token         _cur; // current token
public:
        /**
         * lex constructor:
         *
         * args:
         *  @is:  input stream
         *  @pat: patterns
         */
        lex(std::istream &is, const pattern_list &pat);

        /**
         * move to next token:
         *
         * ret:
         *  @success: 0
         *  @failure: -1
         */
        void next(void);
};

} // namespace lex

#endif // #ifndef LEX_H
