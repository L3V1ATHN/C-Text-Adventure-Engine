#! /usr/bin/bash

f1="parse.c"
f2="area.c"
f3="objects.c"
f4="noun.c"
f5="helpers.c"
main="TextAdv.c"

gcc "$f1" "$f2" "$f3" "$f4" "$f5" "$main" -o TextAdv
