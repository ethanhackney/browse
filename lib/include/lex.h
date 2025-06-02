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
        LEX_TT_ERR_LEX,  // invalid lexeme
        LEX_TT_EOF,      // end of input
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

// invalid token type
struct bad_type {
        int tok; // offending token
};

// pattern list
using pattern_list = std::vector<token_pattern>;
// reject list
using reject_list = std::vector<unsigned char>;

// abstract lexer
class lex {
private:
        std::bitset<UCHAR_MAX+1>  _rej; // reject list
        const pattern_list        _pat; // pattern list
        std::istream             &_is;  // input stream
        std::string               _lex; // current lexeme
        int                       _tok; // current type
public:
        /**
         * lex constructor:
         *
         * args:
         *  @is:  input stream
         *  @pat: patterns
         *  @rej: reject char list
         *
         * throws
         *  bad_type{}:   if one of token_patterns has invalid type
         *  bad_reject{}: if one of rejects is invalid
         */
        lex(std::istream &is, const pattern_list &pat, const reject_list& rej);

        /**
         * move to next token:
         *
         * ret:
         *  @success: 0
         *  @failure: -1
         */
        void next(void);

        /**
         * get current token type:
         *
         * ret:
         *  @success: current token type
         *  @failure: does not
         */
        int tok(void) const;

        /**
         * get current lexeme:
         *
         * ret:
         *  @success: current lexeme
         *  @failure: does not
         */
        const std::string &lexeme(void) const;
};

} // namespace lex

#endif // #ifndef LEX_H
