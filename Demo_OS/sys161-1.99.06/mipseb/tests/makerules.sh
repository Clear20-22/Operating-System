#!/bin/sh
#
# makerules.sh - generate make rules for mips tests
# usage: ls t*.S | ./makerules.sh
#

awk '{ for (i=1;i<=NF;i++) print $i; }' |\
  awk '
    # The division by zero tests are broken because they trigger a
    # "Waiting for debugger connection..." prompt. (XXX)
    /td-div.*z/ { next; }

  {
    src=$1;
    testname=src;
    sub("\\.S$", "", testname);
    image = "img-" testname;

    printf "bins: %s\n", image;
    printf "run: run-%s\n", testname;
    printf ".PHONY: run-%s\n", testname;
    printf ".PHONY: good-%s\n", testname;
    printf ".PHONY: do-run-%s\n", testname;
    printf ".PHONY: diff-%s\n", testname;
    printf "good: good-%s\n", testname;
    printf "run-%s:\n", testname;
    printf "\t$(MAKE) do-run-%s\n", testname;
    printf "\t$(MAKE) diff-%s\n", testname;
    printf "good-%s:\n", testname;
    printf "\t$(MAKE) do-run-%s\n", testname;
    printf "\tmv -f log-%s $T/good/good-%s\n", testname, testname;
    printf "do-run-%s:\n", testname;
    printf "\t$(SYS161) $(SYS161FLAGS) %s 2>&1 | $T/cleanlog.sh > log-%s\n", \
	    image, testname;
    printf "diff-%s:\n", testname;
    printf "\tdiff log-%s $T/good/good-%s\n", testname, testname;
    printf "%s: $T/src/%s\n", image, src;
    printf "\t$(TARGETCC) $(TARGETFLAGS) $T/src/%s -o %s\n", src, image;
    printf "\t$T/checkbin.sh %s || rm -f %s\n", image, image;
    printf "\n";
}'
