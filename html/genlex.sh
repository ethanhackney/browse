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
  echo -e "\tHTML_TT_${tag^^}_OPEN, /* </${tag}> */" >>html.h
done
echo -e "\tHTML_TT_TAG_OPEN_END, /* end of open tags */" >>html.h

# generate close tags
echo -e "\tHTML_TT_TAG_CLOSE_START, /* start of close tags */" >>html.h
for tag in "${tags[@]}"; do
  echo -e "\tHTML_TT_${tag^^}_CLOSE, /* <${tag}> */" >>html.h
done
echo -e "\tHTML_TT_TAG_CLOSE_END, /* end of close tags */" >>html.h

# generate end of html.h
cat >>html.h <<EOF
        HTML_TT_TAG_END, /* end of tags */
        HTML_TT_COUNT, /* type count */
};

/* test if token type is tag */
static inline bool
istag(int tt)
{
        return HTML_TT_TAG_START < tt && tt < HTML_TT_TAG_END;
}

/* test if open tag */
static inline bool
isopentag(int tt)
{
        return HTML_TT_TAG_OPEN_START < tt && tt < HTML_TT_TAG_OPEN_END;
}

/* test if close tag */
static inline bool
isclosetag(int tt)
{
        return HTML_TT_TAG_CLOSE_START < tt && tt < HTML_TT_TAG_CLOSE_END;
}

#endif /* #ifndef HTML_TT_H */
EOF

# generate start of html.l
cat >html.l <<EOF
/* AUTO-GENERATED */

%{
#include "html.h"
%}

%%
EOF

# generate flex for close tag
for tag in "${tags[@]}"; do
  echo "\"</${tag}>\" { return  HTML_TT_${tag^^}_CLOSE; }" >>html.l
done

# generate flex for open tag
for tag in "${tags[@]}"; do
  echo "\"<${tag}>\" { return  HTML_TT_${tag^^}_OPEN; }" >>html.l
done

echo '.|\n { /* skip */ }' >>html.l

# generate end of html.l
cat >>html.l <<EOF
%%

int yywrap(void)
{
        return 1;
}
EOF
