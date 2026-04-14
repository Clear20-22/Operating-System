#!/usr/bin/env sh
set -e

rm -f ./shell
gcc shell.c commands.c shellTalk.c -o shell
./shell
