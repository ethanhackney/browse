%{
#include <stdio.h>
#include "html.h"
%}

%%
"<p>"  { return HTML_TT_TAG_OPEN;  }
"</p>" { return HTML_TT_TAG_CLOSE; }
.|\n   {                           }
%%

int yywrap(void)
{
        return 1;
}
