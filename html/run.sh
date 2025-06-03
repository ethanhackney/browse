#!/bin/bash

if ! mkdir obj; then
  echo "$(basename $0): could not create object file directory"
  exit 1
fi

if ! make; then
  make clean
fi
