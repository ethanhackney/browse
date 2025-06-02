#include <lib/include/lex.h>
#include <iostream>

// html token types
enum {
        HTML_TT_LT, // '<'
        HTML_TT_P,  // 'p'
};

int main(void)
{
        try {
                lex::pattern_list pats {
                        lex::token_pattern("<", lex::LEX_TT_EOF),
                        lex::token_pattern("p", HTML_TT_P),
                };

                lex::lex lex {std::cin, pats};

                for (auto& p : pats)
                        regfree(&p.re);

        } catch (const lex::bad_type &b) {
                std::cout << "bad token:  " << b.tok << std::endl;
        } catch (const lex::bad_pattern& b) {
                std::cout << "bad regex:  " << b.re << std::endl;
        }
}
