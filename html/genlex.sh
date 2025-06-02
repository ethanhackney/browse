#!/bin/bash

cat >html.l <<EOF
%{
#include "html.h"
%}

%%
EOF

tags=(
  body
  h1
  html
  p
)

for tag in "${tags[@]}"; do
  echo "\"</${tag}>\" { return  HTML_TT_${tag^^}_CLOSE; }" >>html.l
done

for tag in "${tags[@]}"; do
  echo "\"<${tag}>\" { return  HTML_TT_${tag^^}_OPEN; }" >>html.l
done

echo '.|\n { /* skip */ }' >>html.l

cat >>html.l <<EOF
%%

int yywrap(void)
{
        return 1;
}
EOF
