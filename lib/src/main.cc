#include <lib/include/lex.h>
#include <iostream>
#include <cstdlib>
#include <array>

// html token types
enum {
        HTML_TT_INV = -1, // invalid token
        HTML_TT_LT,       // '<'
        HTML_TT_GT,       // '>'
        HTML_TT_P,        // 'p'
        HTML_TT_COUNT,    // type count
};

// token names
static const std::array<std::string,HTML_TT_COUNT> tok_names {
        "HTML_TT_LT",
        "HTML_TT_GT",
        "HTML_TT_P",
};

int main(void)
{
        try {
                lex::pattern_list pat {
                        lex::token_pattern("<", HTML_TT_LT),
                        lex::token_pattern("p", HTML_TT_P),
                        lex::token_pattern(">", HTML_TT_GT),
                };
                lex::reject_list rej {
                        '\n',
                };

                lex::lex lex {std::cin, pat, rej};

                auto t = -1;
                while ((t = lex.tok()) != lex::LEX_TT_EOF) {
                        if (t <= HTML_TT_INV || t >= HTML_TT_COUNT)
                                break;
                        /*
                        std::cout << tok_names[(size_t)t] << std::endl;
                        std::cout << lex.lexeme() << std::endl;
                        */
                        lex.next();
                }

                for (auto &p : pat)
                        regfree(&p.re);

        } catch (const lex::bad_type &b) {
                std::cout << "bad token:  " << b.tok << std::endl;
                std::exit(EXIT_FAILURE);
        } catch (const lex::bad_pattern &b) {
                std::cout << "bad regex:  " << b.re << std::endl;
                std::exit(EXIT_FAILURE);
        }
}
