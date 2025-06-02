/* AUTO-GENERATED */

%{
#include "html.h"
%}

%%
"</body>" { return  HTML_TT_BODY_CLOSE; }
"</html>" { return  HTML_TT_HTML_CLOSE; }
"</h1>" { return  HTML_TT_H1_CLOSE; }
"</p>" { return  HTML_TT_P_CLOSE; }
"<!--" { return HTML_TT_COMMENT_OPEN; }
"<body>" { return  HTML_TT_BODY_OPEN; }
"<html>" { return  HTML_TT_HTML_OPEN; }
"<h1>" { return  HTML_TT_H1_OPEN; }
"<p>" { return  HTML_TT_P_OPEN; }
"-->" { return HTML_TT_COMMENT_CLOSE; }
.|\n { return HTML_TT_TEXT; }
%%

int yywrap(void)
{
        return 1;
}
