#!/bin/bash

if ! [ -d obj ]; then
  if ! mkdir obj; then
    echo "$(basename $0): could not create object file directory"
    exit 1
  fi
fi

touch gen/lex.sh
make
