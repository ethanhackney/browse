#include <stdio.h>
#include "html.h"

extern "C" char *yytext;
extern "C" int yylex(void);

int main(void)
{
        auto tok = 0;

        while ((tok = yylex())) {
                switch (tok) {
                case HTML_TT_TAG_OPEN:
                        printf("open: %s\n", yytext);
                        break;
                case HTML_TT_TAG_CLOSE:
                        printf("close: %s\n", yytext);
                        break;
                default:
                        fprintf(stderr, "error: unknown: %d", tok);
                        break;
                }
        }
        if (ferror(stdin))
                printf("here");
}
