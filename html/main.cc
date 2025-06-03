#include "elem/include/dump.h"
#include "elem/include/factory.h"
#include "tabs.h"
#include "html.h"
#include <iostream>
#include <exception>
#include <unordered_map>
#include <unordered_set>
#include <memory>

extern "C" {
extern char *yytext;
extern int yyleng;
int yylex(void);
}

int main(void)
{
        html_elem_factory f;
        auto tt = 0;

        while ((tt = yylex()) && !is_err(tt)) {
                if (tt != HTML_TT_TAG_HTML_OPEN)
                        continue;

                try {
                        auto hp = f.html();

                        while ((tt = yylex()) != HTML_TT_TAG_OPEN_DONE) {
                                if (!is_attr(tt))
                                        puts("error");
                        }

                        while ((tt = yylex()) == HTML_TT_TEXT)
                                hp.get()->append_child(f.text(*yytext));

                        html_elem_dump_visitor dump {};
                        dump.visit(*hp.get());
                        std::cout << "\n";
                } catch (const std::exception &e) {
                        std::cout << e.what() << std::endl;
                }

        }
}
