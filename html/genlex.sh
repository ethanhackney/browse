#!/bin/bash

# read in tags
mapfile -t tags <tagtab

# generate start of html.h
cat >html.h <<EOF
/* AUTO-GENERATED */
#ifndef HTML_TT_H
#define HTML_TT_H

#include <stdbool.h>

/* html token types */
enum {
        HTML_TT_TAG_START = 1, /* start of tags */
EOF

# generate open tags
echo -e "\tHTML_TT_TAG_OPEN_START, /* start of open tags */" >>html.h
for tag in "${tags[@]}"; do
  echo -e "\tHTML_TT_${tag^^}_OPEN, /* <${tag}> */" >>html.h
done
echo -e "\tHTML_TT_COMMENT_OPEN, /* <!-- */" >>html.h
echo -e "\tHTML_TT_TAG_OPEN_END, /* end of open tags */" >>html.h

# generate close tags
echo -e "\tHTML_TT_TAG_CLOSE_START, /* start of close tags */" >>html.h
for tag in "${tags[@]}"; do
  echo -e "\tHTML_TT_${tag^^}_CLOSE, /* </${tag}> */" >>html.h
done
echo -e "\tHTML_TT_COMMENT_CLOSE, /* --> */" >>html.h
echo -e "\tHTML_TT_TAG_CLOSE_END, /* end of close tags */" >>html.h

# generate end of html.h
cat >>html.h <<EOF
        HTML_TT_TAG_END, /* end of tags */
        HTML_TT_OPEN_DONE, /* done with opening tag? */
        HTML_TT_TEXT, /* regular text */
        HTML_TT_ERR_START, /* start of errors */
        HTML_TT_TAG_UNTERM, /* unmterminated tag */
        HTML_TT_ERR_END, /* end of errors */
        HTML_TT_COUNT, /* type count */
};

/* test if token type is tag */
static inline bool
is_tag(int tt)
{
        return HTML_TT_TAG_START < tt && tt < HTML_TT_TAG_END;
}

/* test if open tag */
static inline bool
is_open_tag(int tt)
{
        return HTML_TT_TAG_OPEN_START < tt && tt < HTML_TT_TAG_OPEN_END;
}

/* test if close tag */
static inline bool
is_close_tag(int tt)
{
        return HTML_TT_TAG_CLOSE_START < tt && tt < HTML_TT_TAG_CLOSE_END;
}

/* test if error token */
static inline bool
is_err(int tt)
{
        return HTML_TT_ERR_START < tt && tt < HTML_TT_ERR_END;
}

#endif /* #ifndef HTML_TT_H */
EOF

# generate start of html.l
cat >html.l <<EOF
/* AUTO-GENERATED */

%{
#include "html.h"
#include <stdbool.h>

static bool in_open_tag = false;
%}

%%
<<EOF>> {
        if (in_open_tag)
                return HTML_TT_TAG_UNTERM;

        return 0;
}
EOF

# generate flex for close tag
for tag in "${tags[@]}"; do
  echo "\"</${tag}>\" { return  HTML_TT_${tag^^}_CLOSE; }" >>html.l
done
echo '"<!--" { return HTML_TT_COMMENT_OPEN; }' >>html.l

# generate flex for open tag
for tag in "${tags[@]}"; do
  cat >>html.l <<EOF
"<${tag}" {
        in_open_tag = true;
        return HTML_TT_${tag^^}_OPEN;
}
EOF
done

cat >>html.l <<EOF
"-->" { return HTML_TT_COMMENT_CLOSE; }
">" {
        in_open_tag = false;
        return HTML_TT_OPEN_DONE;
}
.|\n {
        if (!in_open_tag)
                return HTML_TT_TEXT;

        yymore();
}
EOF

# generate end of html.l
cat >>html.l <<EOF
%%

int yywrap(void)
{
        return 1;
}
EOF
