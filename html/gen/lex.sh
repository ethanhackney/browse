#!/bin/bash

cd "$(dirname "$0")"

# read in tags
mapfile -t tags <tagtab

# read in attributes
mapfile -t attrs <attrtab

# generate start of ../html.h
cat >../html.h <<EOF
/* AUTO-GENERATED */
#ifndef HTML_TT_H
#define HTML_TT_H

#include <stdbool.h>

/* html token types */
enum {
        HTML_TT_TAG_START = 1, /* start of tags */
EOF

# generate open tags
echo -e "\tHTML_TT_TAG_OPEN_START, /* start of open tags */" >>../html.h
echo -e "\tHTML_TT_TAG_DOCTYPE, /* <!DOCTYPE> */" >>../html.h
for tag in "${tags[@]}"; do
  echo -e "\tHTML_TT_TAG_${tag^^}_OPEN, /* <${tag}> */" >>../html.h
done
echo -e "\tHTML_TT_TAG_COMMENT_OPEN, /* <!-- */" >>../html.h
echo -e "\tHTML_TT_TAG_OPEN_END, /* end of open tags */" >>../html.h
echo -e "\tHTML_TT_TAG_END, /* end of tags */" >>../html.h

# generate close tags
echo -e "\tHTML_TT_TAG_CLOSE_START, /* start of close tags */" >>../html.h
for tag in "${tags[@]}"; do
  echo -e "\tHTML_TT_TAG_${tag^^}_CLOSE, /* </${tag}> */" >>../html.h
done
echo -e "\tHTML_TT_TAG_COMMENT_CLOSE, /* --> */" >>../html.h
echo -e "\tHTML_TT_TAG_CLOSE_END, /* end of close tags */" >>../html.h

# generate attributes
echo -e "\tHTML_TT_ATTR_START, /* start of attributes */" >>../html.h
for attr in "${attrs[@]}"; do
  name=$attr
  if [ $attr = 'accept-charset' ]; then
    name='ACCEPT_CHARSET'
  fi
  if [ $attr = 'http-equiv' ]; then
    name='HTTP_EQUIV'
  fi
  if [ $attr = 'start' ]; then
    name='START_ATTR'
  fi
  echo -e "\tHTML_TT_ATTR_${name^^}, /* ${attr} */" >>../html.h
done
echo -e "\tHTML_TT_ATTR_END, /* end of attributes */" >>../html.h

# generate end of ../html.h
cat >>../html.h <<EOF
        HTML_TT_TAG_OPEN_DONE, /* done with opening tag? */
        HTML_TT_TEXT, /* regular text */
        HTML_TT_ERR_START, /* start of errors */
        HTML_TT_ERR_TAG_UNTERM, /* unmterminated tag */
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

/* test if attribute token */
static inline bool
is_attr(int tt)
{
        return HTML_TT_ATTR_START < tt && tt < HTML_TT_ATTR_END;
}

#endif /* #ifndef HTML_TT_H */
EOF

# generate start of ../html.ll
cat >../html.ll <<EOF
/* AUTO-GENERATED */

%option case-insensitive noyywrap c++

%{
#include "html.h"
#include <stdbool.h>

#define YY_DECL int yyFlexLexer::yylex()

/* are we in a tag? */
static bool in_open_tag = false;
%}

%%
<<EOF>> {
        if (in_open_tag)
                return HTML_TT_ERR_TAG_UNTERM;

        return 0;
}
EOF

# generate flex for close tag
for tag in "${tags[@]}"; do
  echo "\"</${tag}>\" { return  HTML_TT_TAG_${tag^^}_CLOSE; }" >>../html.ll
done
echo '"<!--" { return HTML_TT_TAG_COMMENT_OPEN; }' >>../html.ll

# generate flex for open tag
cat >>../html.ll <<EOF
"<!DOCTYPE" {
        in_open_tag = true;
        return HTML_TT_TAG_DOCTYPE;
}
EOF
for tag in "${tags[@]}"; do
  cat >>../html.ll <<EOF
"<${tag}" {
        in_open_tag = true;
        return HTML_TT_TAG_${tag^^}_OPEN;
}
EOF
done

# generate flex for attributes
for attr in "${attrs[@]}"; do
  name=$attr
  if [ $attr = 'accept-charset' ]; then
    name='ACCEPT_CHARSET'
  fi
  if [ $attr = 'http-equiv' ]; then
    name='HTTP_EQUIV'
  fi
  if [ $attr = 'start' ]; then
    name='START_ATTR'
  fi
  cat >>../html.ll <<EOF
"${attr}" { return HTML_TT_ATTR_${name^^}; }
EOF
done

cat >>../html.ll <<EOF
"-->" { return HTML_TT_TAG_COMMENT_CLOSE; }
">" {
        in_open_tag = false;
        return HTML_TT_TAG_OPEN_DONE;
}
.|\n {
        if (!in_open_tag)
                return HTML_TT_TEXT;

        yymore();
}
EOF

# generate end of ../html.ll
cat >>../html.ll <<EOF
%%

int yywrap(void)
{
        return 1;
}
EOF
