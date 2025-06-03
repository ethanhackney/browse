#include "elem/include/dump.h"
#include "FlexLexer.h"
#include "elem/include/factory.h"
#include "tabs.h"
#include "html.h"
#include <iostream>
#include <exception>
#include <unordered_map>
#include <unordered_set>
#include <memory>

int main(void)
{
        html_elem_factory f;
        yyFlexLexer lex;

        auto tt = 0;
        while ((tt = lex.yylex()) && !is_err(tt)) {
                if (tt != HTML_TT_TAG_HTML_OPEN)
                        continue;

                try {
                        auto hp = f.html();
                        auto tag = tt;

                        while ((tt = lex.yylex()) != HTML_TT_TAG_OPEN_DONE) {
                                if (!attr_ok(tag, tt))
                                        puts("error");
                        }

                        while ((tt = lex.yylex()) == HTML_TT_TEXT)
                                hp.get()->append_child(f.text(*lex.YYText()));

                        html_elem_dump_visitor dump {};
                        dump.visit(*hp.get());
                        std::cout << "\n";
                } catch (const std::exception &e) {
                        std::cout << e.what() << std::endl;
                }

        }
}
