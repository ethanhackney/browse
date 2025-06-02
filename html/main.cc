#include <stdio.h>
#include "html.h"
#include <cstring>
#include <cstddef>
#include "tags.h"

extern char *yytext;
extern "C" int yylex(void);

int main(void)
{
        auto tok = 0;

        while ((tok = yylex())) {
                switch (tok) {
                case HTML_TT_LT:
                case HTML_TT_GT:
                case HTML_TT_ID:
                        printf("%s: %d\n", yytext, tok);
                        printf("open: %s\n", yytext);
                        break;
                default:
                        fprintf(stderr, "error: unknown: %d", tok);
                        break;
                }
        }
}
