%{
#include "html.h"
%}

%%
"</body>" { return  HTML_TT_BODY_CLOSE; }
"</h1>" { return  HTML_TT_H1_CLOSE; }
"</html>" { return  HTML_TT_HTML_CLOSE; }
"</p>" { return  HTML_TT_P_CLOSE; }
"<body>" { return  HTML_TT_BODY_OPEN; }
"<h1>" { return  HTML_TT_H1_OPEN; }
"<html>" { return  HTML_TT_HTML_OPEN; }
"<p>" { return  HTML_TT_P_OPEN; }
.|\n { /* skip */ }
%%

int yywrap(void)
{
        return 1;
}
