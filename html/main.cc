#include <stdio.h>
#include "elem/include/elem.h"
#include "html.h"
#include <cstring>
#include <cstddef>
#include "tags.h"

extern "C" {
extern char *yytext;
extern int yyleng;
int yylex(void);
}

int main(void)
{
        auto tt = 0;

        while ((tt = yylex())) {
                if (tt != HTML_TT_HTML_OPEN)
                        continue;
        }
}
