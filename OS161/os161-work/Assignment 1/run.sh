#!/usr/bin/env sh
set -e

rm -f ./shell
gcc shell.c commands.c shellTalk.c -o shell
if [ -t 0 ]; then
  ./shell
else
  echo "Built ./shell (run it in an interactive terminal)"
fi
