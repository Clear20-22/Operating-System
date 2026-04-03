bins: img-ta-add-nnbn
run: run-ta-add-nnbn
.PHONY: run-ta-add-nnbn
.PHONY: good-ta-add-nnbn
.PHONY: do-run-ta-add-nnbn
.PHONY: diff-ta-add-nnbn
good: good-ta-add-nnbn
run-ta-add-nnbn:
	$(MAKE) do-run-ta-add-nnbn
	$(MAKE) diff-ta-add-nnbn
good-ta-add-nnbn:
	$(MAKE) do-run-ta-add-nnbn
	mv -f log-ta-add-nnbn $T/good/good-ta-add-nnbn
do-run-ta-add-nnbn:
	$(SYS161) $(SYS161FLAGS) img-ta-add-nnbn 2>&1 | $T/cleanlog.sh > log-ta-add-nnbn
diff-ta-add-nnbn:
	diff log-ta-add-nnbn $T/good/good-ta-add-nnbn
img-ta-add-nnbn: $T/src/ta-add-nnbn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-add-nnbn.S -o img-ta-add-nnbn
	$T/checkbin.sh img-ta-add-nnbn || rm -f img-ta-add-nnbn

bins: img-ta-add-nngn
run: run-ta-add-nngn
.PHONY: run-ta-add-nngn
.PHONY: good-ta-add-nngn
.PHONY: do-run-ta-add-nngn
.PHONY: diff-ta-add-nngn
good: good-ta-add-nngn
run-ta-add-nngn:
	$(MAKE) do-run-ta-add-nngn
	$(MAKE) diff-ta-add-nngn
good-ta-add-nngn:
	$(MAKE) do-run-ta-add-nngn
	mv -f log-ta-add-nngn $T/good/good-ta-add-nngn
do-run-ta-add-nngn:
	$(SYS161) $(SYS161FLAGS) img-ta-add-nngn 2>&1 | $T/cleanlog.sh > log-ta-add-nngn
diff-ta-add-nngn:
	diff log-ta-add-nngn $T/good/good-ta-add-nngn
img-ta-add-nngn: $T/src/ta-add-nngn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-add-nngn.S -o img-ta-add-nngn
	$T/checkbin.sh img-ta-add-nngn || rm -f img-ta-add-nngn

bins: img-ta-add-npgn
run: run-ta-add-npgn
.PHONY: run-ta-add-npgn
.PHONY: good-ta-add-npgn
.PHONY: do-run-ta-add-npgn
.PHONY: diff-ta-add-npgn
good: good-ta-add-npgn
run-ta-add-npgn:
	$(MAKE) do-run-ta-add-npgn
	$(MAKE) diff-ta-add-npgn
good-ta-add-npgn:
	$(MAKE) do-run-ta-add-npgn
	mv -f log-ta-add-npgn $T/good/good-ta-add-npgn
do-run-ta-add-npgn:
	$(SYS161) $(SYS161FLAGS) img-ta-add-npgn 2>&1 | $T/cleanlog.sh > log-ta-add-npgn
diff-ta-add-npgn:
	diff log-ta-add-npgn $T/good/good-ta-add-npgn
img-ta-add-npgn: $T/src/ta-add-npgn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-add-npgn.S -o img-ta-add-npgn
	$T/checkbin.sh img-ta-add-npgn || rm -f img-ta-add-npgn

bins: img-ta-add-npgp
run: run-ta-add-npgp
.PHONY: run-ta-add-npgp
.PHONY: good-ta-add-npgp
.PHONY: do-run-ta-add-npgp
.PHONY: diff-ta-add-npgp
good: good-ta-add-npgp
run-ta-add-npgp:
	$(MAKE) do-run-ta-add-npgp
	$(MAKE) diff-ta-add-npgp
good-ta-add-npgp:
	$(MAKE) do-run-ta-add-npgp
	mv -f log-ta-add-npgp $T/good/good-ta-add-npgp
do-run-ta-add-npgp:
	$(SYS161) $(SYS161FLAGS) img-ta-add-npgp 2>&1 | $T/cleanlog.sh > log-ta-add-npgp
diff-ta-add-npgp:
	diff log-ta-add-npgp $T/good/good-ta-add-npgp
img-ta-add-npgp: $T/src/ta-add-npgp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-add-npgp.S -o img-ta-add-npgp
	$T/checkbin.sh img-ta-add-npgp || rm -f img-ta-add-npgp

bins: img-ta-add-pngn
run: run-ta-add-pngn
.PHONY: run-ta-add-pngn
.PHONY: good-ta-add-pngn
.PHONY: do-run-ta-add-pngn
.PHONY: diff-ta-add-pngn
good: good-ta-add-pngn
run-ta-add-pngn:
	$(MAKE) do-run-ta-add-pngn
	$(MAKE) diff-ta-add-pngn
good-ta-add-pngn:
	$(MAKE) do-run-ta-add-pngn
	mv -f log-ta-add-pngn $T/good/good-ta-add-pngn
do-run-ta-add-pngn:
	$(SYS161) $(SYS161FLAGS) img-ta-add-pngn 2>&1 | $T/cleanlog.sh > log-ta-add-pngn
diff-ta-add-pngn:
	diff log-ta-add-pngn $T/good/good-ta-add-pngn
img-ta-add-pngn: $T/src/ta-add-pngn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-add-pngn.S -o img-ta-add-pngn
	$T/checkbin.sh img-ta-add-pngn || rm -f img-ta-add-pngn

bins: img-ta-add-pngp
run: run-ta-add-pngp
.PHONY: run-ta-add-pngp
.PHONY: good-ta-add-pngp
.PHONY: do-run-ta-add-pngp
.PHONY: diff-ta-add-pngp
good: good-ta-add-pngp
run-ta-add-pngp:
	$(MAKE) do-run-ta-add-pngp
	$(MAKE) diff-ta-add-pngp
good-ta-add-pngp:
	$(MAKE) do-run-ta-add-pngp
	mv -f log-ta-add-pngp $T/good/good-ta-add-pngp
do-run-ta-add-pngp:
	$(SYS161) $(SYS161FLAGS) img-ta-add-pngp 2>&1 | $T/cleanlog.sh > log-ta-add-pngp
diff-ta-add-pngp:
	diff log-ta-add-pngp $T/good/good-ta-add-pngp
img-ta-add-pngp: $T/src/ta-add-pngp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-add-pngp.S -o img-ta-add-pngp
	$T/checkbin.sh img-ta-add-pngp || rm -f img-ta-add-pngp

bins: img-ta-add-ppbp
run: run-ta-add-ppbp
.PHONY: run-ta-add-ppbp
.PHONY: good-ta-add-ppbp
.PHONY: do-run-ta-add-ppbp
.PHONY: diff-ta-add-ppbp
good: good-ta-add-ppbp
run-ta-add-ppbp:
	$(MAKE) do-run-ta-add-ppbp
	$(MAKE) diff-ta-add-ppbp
good-ta-add-ppbp:
	$(MAKE) do-run-ta-add-ppbp
	mv -f log-ta-add-ppbp $T/good/good-ta-add-ppbp
do-run-ta-add-ppbp:
	$(SYS161) $(SYS161FLAGS) img-ta-add-ppbp 2>&1 | $T/cleanlog.sh > log-ta-add-ppbp
diff-ta-add-ppbp:
	diff log-ta-add-ppbp $T/good/good-ta-add-ppbp
img-ta-add-ppbp: $T/src/ta-add-ppbp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-add-ppbp.S -o img-ta-add-ppbp
	$T/checkbin.sh img-ta-add-ppbp || rm -f img-ta-add-ppbp

bins: img-ta-add-ppgp
run: run-ta-add-ppgp
.PHONY: run-ta-add-ppgp
.PHONY: good-ta-add-ppgp
.PHONY: do-run-ta-add-ppgp
.PHONY: diff-ta-add-ppgp
good: good-ta-add-ppgp
run-ta-add-ppgp:
	$(MAKE) do-run-ta-add-ppgp
	$(MAKE) diff-ta-add-ppgp
good-ta-add-ppgp:
	$(MAKE) do-run-ta-add-ppgp
	mv -f log-ta-add-ppgp $T/good/good-ta-add-ppgp
do-run-ta-add-ppgp:
	$(SYS161) $(SYS161FLAGS) img-ta-add-ppgp 2>&1 | $T/cleanlog.sh > log-ta-add-ppgp
diff-ta-add-ppgp:
	diff log-ta-add-ppgp $T/good/good-ta-add-ppgp
img-ta-add-ppgp: $T/src/ta-add-ppgp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-add-ppgp.S -o img-ta-add-ppgp
	$T/checkbin.sh img-ta-add-ppgp || rm -f img-ta-add-ppgp

bins: img-ta-add-uubu
run: run-ta-add-uubu
.PHONY: run-ta-add-uubu
.PHONY: good-ta-add-uubu
.PHONY: do-run-ta-add-uubu
.PHONY: diff-ta-add-uubu
good: good-ta-add-uubu
run-ta-add-uubu:
	$(MAKE) do-run-ta-add-uubu
	$(MAKE) diff-ta-add-uubu
good-ta-add-uubu:
	$(MAKE) do-run-ta-add-uubu
	mv -f log-ta-add-uubu $T/good/good-ta-add-uubu
do-run-ta-add-uubu:
	$(SYS161) $(SYS161FLAGS) img-ta-add-uubu 2>&1 | $T/cleanlog.sh > log-ta-add-uubu
diff-ta-add-uubu:
	diff log-ta-add-uubu $T/good/good-ta-add-uubu
img-ta-add-uubu: $T/src/ta-add-uubu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-add-uubu.S -o img-ta-add-uubu
	$T/checkbin.sh img-ta-add-uubu || rm -f img-ta-add-uubu

bins: img-ta-add-uugu
run: run-ta-add-uugu
.PHONY: run-ta-add-uugu
.PHONY: good-ta-add-uugu
.PHONY: do-run-ta-add-uugu
.PHONY: diff-ta-add-uugu
good: good-ta-add-uugu
run-ta-add-uugu:
	$(MAKE) do-run-ta-add-uugu
	$(MAKE) diff-ta-add-uugu
good-ta-add-uugu:
	$(MAKE) do-run-ta-add-uugu
	mv -f log-ta-add-uugu $T/good/good-ta-add-uugu
do-run-ta-add-uugu:
	$(SYS161) $(SYS161FLAGS) img-ta-add-uugu 2>&1 | $T/cleanlog.sh > log-ta-add-uugu
diff-ta-add-uugu:
	diff log-ta-add-uugu $T/good/good-ta-add-uugu
img-ta-add-uugu: $T/src/ta-add-uugu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-add-uugu.S -o img-ta-add-uugu
	$T/checkbin.sh img-ta-add-uugu || rm -f img-ta-add-uugu

bins: img-ta-addi-nnbn
run: run-ta-addi-nnbn
.PHONY: run-ta-addi-nnbn
.PHONY: good-ta-addi-nnbn
.PHONY: do-run-ta-addi-nnbn
.PHONY: diff-ta-addi-nnbn
good: good-ta-addi-nnbn
run-ta-addi-nnbn:
	$(MAKE) do-run-ta-addi-nnbn
	$(MAKE) diff-ta-addi-nnbn
good-ta-addi-nnbn:
	$(MAKE) do-run-ta-addi-nnbn
	mv -f log-ta-addi-nnbn $T/good/good-ta-addi-nnbn
do-run-ta-addi-nnbn:
	$(SYS161) $(SYS161FLAGS) img-ta-addi-nnbn 2>&1 | $T/cleanlog.sh > log-ta-addi-nnbn
diff-ta-addi-nnbn:
	diff log-ta-addi-nnbn $T/good/good-ta-addi-nnbn
img-ta-addi-nnbn: $T/src/ta-addi-nnbn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addi-nnbn.S -o img-ta-addi-nnbn
	$T/checkbin.sh img-ta-addi-nnbn || rm -f img-ta-addi-nnbn

bins: img-ta-addi-nngn
run: run-ta-addi-nngn
.PHONY: run-ta-addi-nngn
.PHONY: good-ta-addi-nngn
.PHONY: do-run-ta-addi-nngn
.PHONY: diff-ta-addi-nngn
good: good-ta-addi-nngn
run-ta-addi-nngn:
	$(MAKE) do-run-ta-addi-nngn
	$(MAKE) diff-ta-addi-nngn
good-ta-addi-nngn:
	$(MAKE) do-run-ta-addi-nngn
	mv -f log-ta-addi-nngn $T/good/good-ta-addi-nngn
do-run-ta-addi-nngn:
	$(SYS161) $(SYS161FLAGS) img-ta-addi-nngn 2>&1 | $T/cleanlog.sh > log-ta-addi-nngn
diff-ta-addi-nngn:
	diff log-ta-addi-nngn $T/good/good-ta-addi-nngn
img-ta-addi-nngn: $T/src/ta-addi-nngn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addi-nngn.S -o img-ta-addi-nngn
	$T/checkbin.sh img-ta-addi-nngn || rm -f img-ta-addi-nngn

bins: img-ta-addi-npgn
run: run-ta-addi-npgn
.PHONY: run-ta-addi-npgn
.PHONY: good-ta-addi-npgn
.PHONY: do-run-ta-addi-npgn
.PHONY: diff-ta-addi-npgn
good: good-ta-addi-npgn
run-ta-addi-npgn:
	$(MAKE) do-run-ta-addi-npgn
	$(MAKE) diff-ta-addi-npgn
good-ta-addi-npgn:
	$(MAKE) do-run-ta-addi-npgn
	mv -f log-ta-addi-npgn $T/good/good-ta-addi-npgn
do-run-ta-addi-npgn:
	$(SYS161) $(SYS161FLAGS) img-ta-addi-npgn 2>&1 | $T/cleanlog.sh > log-ta-addi-npgn
diff-ta-addi-npgn:
	diff log-ta-addi-npgn $T/good/good-ta-addi-npgn
img-ta-addi-npgn: $T/src/ta-addi-npgn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addi-npgn.S -o img-ta-addi-npgn
	$T/checkbin.sh img-ta-addi-npgn || rm -f img-ta-addi-npgn

bins: img-ta-addi-npgp
run: run-ta-addi-npgp
.PHONY: run-ta-addi-npgp
.PHONY: good-ta-addi-npgp
.PHONY: do-run-ta-addi-npgp
.PHONY: diff-ta-addi-npgp
good: good-ta-addi-npgp
run-ta-addi-npgp:
	$(MAKE) do-run-ta-addi-npgp
	$(MAKE) diff-ta-addi-npgp
good-ta-addi-npgp:
	$(MAKE) do-run-ta-addi-npgp
	mv -f log-ta-addi-npgp $T/good/good-ta-addi-npgp
do-run-ta-addi-npgp:
	$(SYS161) $(SYS161FLAGS) img-ta-addi-npgp 2>&1 | $T/cleanlog.sh > log-ta-addi-npgp
diff-ta-addi-npgp:
	diff log-ta-addi-npgp $T/good/good-ta-addi-npgp
img-ta-addi-npgp: $T/src/ta-addi-npgp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addi-npgp.S -o img-ta-addi-npgp
	$T/checkbin.sh img-ta-addi-npgp || rm -f img-ta-addi-npgp

bins: img-ta-addi-pngn
run: run-ta-addi-pngn
.PHONY: run-ta-addi-pngn
.PHONY: good-ta-addi-pngn
.PHONY: do-run-ta-addi-pngn
.PHONY: diff-ta-addi-pngn
good: good-ta-addi-pngn
run-ta-addi-pngn:
	$(MAKE) do-run-ta-addi-pngn
	$(MAKE) diff-ta-addi-pngn
good-ta-addi-pngn:
	$(MAKE) do-run-ta-addi-pngn
	mv -f log-ta-addi-pngn $T/good/good-ta-addi-pngn
do-run-ta-addi-pngn:
	$(SYS161) $(SYS161FLAGS) img-ta-addi-pngn 2>&1 | $T/cleanlog.sh > log-ta-addi-pngn
diff-ta-addi-pngn:
	diff log-ta-addi-pngn $T/good/good-ta-addi-pngn
img-ta-addi-pngn: $T/src/ta-addi-pngn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addi-pngn.S -o img-ta-addi-pngn
	$T/checkbin.sh img-ta-addi-pngn || rm -f img-ta-addi-pngn

bins: img-ta-addi-pngp
run: run-ta-addi-pngp
.PHONY: run-ta-addi-pngp
.PHONY: good-ta-addi-pngp
.PHONY: do-run-ta-addi-pngp
.PHONY: diff-ta-addi-pngp
good: good-ta-addi-pngp
run-ta-addi-pngp:
	$(MAKE) do-run-ta-addi-pngp
	$(MAKE) diff-ta-addi-pngp
good-ta-addi-pngp:
	$(MAKE) do-run-ta-addi-pngp
	mv -f log-ta-addi-pngp $T/good/good-ta-addi-pngp
do-run-ta-addi-pngp:
	$(SYS161) $(SYS161FLAGS) img-ta-addi-pngp 2>&1 | $T/cleanlog.sh > log-ta-addi-pngp
diff-ta-addi-pngp:
	diff log-ta-addi-pngp $T/good/good-ta-addi-pngp
img-ta-addi-pngp: $T/src/ta-addi-pngp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addi-pngp.S -o img-ta-addi-pngp
	$T/checkbin.sh img-ta-addi-pngp || rm -f img-ta-addi-pngp

bins: img-ta-addi-ppbp
run: run-ta-addi-ppbp
.PHONY: run-ta-addi-ppbp
.PHONY: good-ta-addi-ppbp
.PHONY: do-run-ta-addi-ppbp
.PHONY: diff-ta-addi-ppbp
good: good-ta-addi-ppbp
run-ta-addi-ppbp:
	$(MAKE) do-run-ta-addi-ppbp
	$(MAKE) diff-ta-addi-ppbp
good-ta-addi-ppbp:
	$(MAKE) do-run-ta-addi-ppbp
	mv -f log-ta-addi-ppbp $T/good/good-ta-addi-ppbp
do-run-ta-addi-ppbp:
	$(SYS161) $(SYS161FLAGS) img-ta-addi-ppbp 2>&1 | $T/cleanlog.sh > log-ta-addi-ppbp
diff-ta-addi-ppbp:
	diff log-ta-addi-ppbp $T/good/good-ta-addi-ppbp
img-ta-addi-ppbp: $T/src/ta-addi-ppbp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addi-ppbp.S -o img-ta-addi-ppbp
	$T/checkbin.sh img-ta-addi-ppbp || rm -f img-ta-addi-ppbp

bins: img-ta-addi-ppgp
run: run-ta-addi-ppgp
.PHONY: run-ta-addi-ppgp
.PHONY: good-ta-addi-ppgp
.PHONY: do-run-ta-addi-ppgp
.PHONY: diff-ta-addi-ppgp
good: good-ta-addi-ppgp
run-ta-addi-ppgp:
	$(MAKE) do-run-ta-addi-ppgp
	$(MAKE) diff-ta-addi-ppgp
good-ta-addi-ppgp:
	$(MAKE) do-run-ta-addi-ppgp
	mv -f log-ta-addi-ppgp $T/good/good-ta-addi-ppgp
do-run-ta-addi-ppgp:
	$(SYS161) $(SYS161FLAGS) img-ta-addi-ppgp 2>&1 | $T/cleanlog.sh > log-ta-addi-ppgp
diff-ta-addi-ppgp:
	diff log-ta-addi-ppgp $T/good/good-ta-addi-ppgp
img-ta-addi-ppgp: $T/src/ta-addi-ppgp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addi-ppgp.S -o img-ta-addi-ppgp
	$T/checkbin.sh img-ta-addi-ppgp || rm -f img-ta-addi-ppgp

bins: img-ta-addi-uubu
run: run-ta-addi-uubu
.PHONY: run-ta-addi-uubu
.PHONY: good-ta-addi-uubu
.PHONY: do-run-ta-addi-uubu
.PHONY: diff-ta-addi-uubu
good: good-ta-addi-uubu
run-ta-addi-uubu:
	$(MAKE) do-run-ta-addi-uubu
	$(MAKE) diff-ta-addi-uubu
good-ta-addi-uubu:
	$(MAKE) do-run-ta-addi-uubu
	mv -f log-ta-addi-uubu $T/good/good-ta-addi-uubu
do-run-ta-addi-uubu:
	$(SYS161) $(SYS161FLAGS) img-ta-addi-uubu 2>&1 | $T/cleanlog.sh > log-ta-addi-uubu
diff-ta-addi-uubu:
	diff log-ta-addi-uubu $T/good/good-ta-addi-uubu
img-ta-addi-uubu: $T/src/ta-addi-uubu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addi-uubu.S -o img-ta-addi-uubu
	$T/checkbin.sh img-ta-addi-uubu || rm -f img-ta-addi-uubu

bins: img-ta-addi-uugu
run: run-ta-addi-uugu
.PHONY: run-ta-addi-uugu
.PHONY: good-ta-addi-uugu
.PHONY: do-run-ta-addi-uugu
.PHONY: diff-ta-addi-uugu
good: good-ta-addi-uugu
run-ta-addi-uugu:
	$(MAKE) do-run-ta-addi-uugu
	$(MAKE) diff-ta-addi-uugu
good-ta-addi-uugu:
	$(MAKE) do-run-ta-addi-uugu
	mv -f log-ta-addi-uugu $T/good/good-ta-addi-uugu
do-run-ta-addi-uugu:
	$(SYS161) $(SYS161FLAGS) img-ta-addi-uugu 2>&1 | $T/cleanlog.sh > log-ta-addi-uugu
diff-ta-addi-uugu:
	diff log-ta-addi-uugu $T/good/good-ta-addi-uugu
img-ta-addi-uugu: $T/src/ta-addi-uugu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addi-uugu.S -o img-ta-addi-uugu
	$T/checkbin.sh img-ta-addi-uugu || rm -f img-ta-addi-uugu

bins: img-ta-addiu-nnbn
run: run-ta-addiu-nnbn
.PHONY: run-ta-addiu-nnbn
.PHONY: good-ta-addiu-nnbn
.PHONY: do-run-ta-addiu-nnbn
.PHONY: diff-ta-addiu-nnbn
good: good-ta-addiu-nnbn
run-ta-addiu-nnbn:
	$(MAKE) do-run-ta-addiu-nnbn
	$(MAKE) diff-ta-addiu-nnbn
good-ta-addiu-nnbn:
	$(MAKE) do-run-ta-addiu-nnbn
	mv -f log-ta-addiu-nnbn $T/good/good-ta-addiu-nnbn
do-run-ta-addiu-nnbn:
	$(SYS161) $(SYS161FLAGS) img-ta-addiu-nnbn 2>&1 | $T/cleanlog.sh > log-ta-addiu-nnbn
diff-ta-addiu-nnbn:
	diff log-ta-addiu-nnbn $T/good/good-ta-addiu-nnbn
img-ta-addiu-nnbn: $T/src/ta-addiu-nnbn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addiu-nnbn.S -o img-ta-addiu-nnbn
	$T/checkbin.sh img-ta-addiu-nnbn || rm -f img-ta-addiu-nnbn

bins: img-ta-addiu-nngn
run: run-ta-addiu-nngn
.PHONY: run-ta-addiu-nngn
.PHONY: good-ta-addiu-nngn
.PHONY: do-run-ta-addiu-nngn
.PHONY: diff-ta-addiu-nngn
good: good-ta-addiu-nngn
run-ta-addiu-nngn:
	$(MAKE) do-run-ta-addiu-nngn
	$(MAKE) diff-ta-addiu-nngn
good-ta-addiu-nngn:
	$(MAKE) do-run-ta-addiu-nngn
	mv -f log-ta-addiu-nngn $T/good/good-ta-addiu-nngn
do-run-ta-addiu-nngn:
	$(SYS161) $(SYS161FLAGS) img-ta-addiu-nngn 2>&1 | $T/cleanlog.sh > log-ta-addiu-nngn
diff-ta-addiu-nngn:
	diff log-ta-addiu-nngn $T/good/good-ta-addiu-nngn
img-ta-addiu-nngn: $T/src/ta-addiu-nngn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addiu-nngn.S -o img-ta-addiu-nngn
	$T/checkbin.sh img-ta-addiu-nngn || rm -f img-ta-addiu-nngn

bins: img-ta-addiu-npgn
run: run-ta-addiu-npgn
.PHONY: run-ta-addiu-npgn
.PHONY: good-ta-addiu-npgn
.PHONY: do-run-ta-addiu-npgn
.PHONY: diff-ta-addiu-npgn
good: good-ta-addiu-npgn
run-ta-addiu-npgn:
	$(MAKE) do-run-ta-addiu-npgn
	$(MAKE) diff-ta-addiu-npgn
good-ta-addiu-npgn:
	$(MAKE) do-run-ta-addiu-npgn
	mv -f log-ta-addiu-npgn $T/good/good-ta-addiu-npgn
do-run-ta-addiu-npgn:
	$(SYS161) $(SYS161FLAGS) img-ta-addiu-npgn 2>&1 | $T/cleanlog.sh > log-ta-addiu-npgn
diff-ta-addiu-npgn:
	diff log-ta-addiu-npgn $T/good/good-ta-addiu-npgn
img-ta-addiu-npgn: $T/src/ta-addiu-npgn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addiu-npgn.S -o img-ta-addiu-npgn
	$T/checkbin.sh img-ta-addiu-npgn || rm -f img-ta-addiu-npgn

bins: img-ta-addiu-npgp
run: run-ta-addiu-npgp
.PHONY: run-ta-addiu-npgp
.PHONY: good-ta-addiu-npgp
.PHONY: do-run-ta-addiu-npgp
.PHONY: diff-ta-addiu-npgp
good: good-ta-addiu-npgp
run-ta-addiu-npgp:
	$(MAKE) do-run-ta-addiu-npgp
	$(MAKE) diff-ta-addiu-npgp
good-ta-addiu-npgp:
	$(MAKE) do-run-ta-addiu-npgp
	mv -f log-ta-addiu-npgp $T/good/good-ta-addiu-npgp
do-run-ta-addiu-npgp:
	$(SYS161) $(SYS161FLAGS) img-ta-addiu-npgp 2>&1 | $T/cleanlog.sh > log-ta-addiu-npgp
diff-ta-addiu-npgp:
	diff log-ta-addiu-npgp $T/good/good-ta-addiu-npgp
img-ta-addiu-npgp: $T/src/ta-addiu-npgp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addiu-npgp.S -o img-ta-addiu-npgp
	$T/checkbin.sh img-ta-addiu-npgp || rm -f img-ta-addiu-npgp

bins: img-ta-addiu-pngn
run: run-ta-addiu-pngn
.PHONY: run-ta-addiu-pngn
.PHONY: good-ta-addiu-pngn
.PHONY: do-run-ta-addiu-pngn
.PHONY: diff-ta-addiu-pngn
good: good-ta-addiu-pngn
run-ta-addiu-pngn:
	$(MAKE) do-run-ta-addiu-pngn
	$(MAKE) diff-ta-addiu-pngn
good-ta-addiu-pngn:
	$(MAKE) do-run-ta-addiu-pngn
	mv -f log-ta-addiu-pngn $T/good/good-ta-addiu-pngn
do-run-ta-addiu-pngn:
	$(SYS161) $(SYS161FLAGS) img-ta-addiu-pngn 2>&1 | $T/cleanlog.sh > log-ta-addiu-pngn
diff-ta-addiu-pngn:
	diff log-ta-addiu-pngn $T/good/good-ta-addiu-pngn
img-ta-addiu-pngn: $T/src/ta-addiu-pngn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addiu-pngn.S -o img-ta-addiu-pngn
	$T/checkbin.sh img-ta-addiu-pngn || rm -f img-ta-addiu-pngn

bins: img-ta-addiu-pngp
run: run-ta-addiu-pngp
.PHONY: run-ta-addiu-pngp
.PHONY: good-ta-addiu-pngp
.PHONY: do-run-ta-addiu-pngp
.PHONY: diff-ta-addiu-pngp
good: good-ta-addiu-pngp
run-ta-addiu-pngp:
	$(MAKE) do-run-ta-addiu-pngp
	$(MAKE) diff-ta-addiu-pngp
good-ta-addiu-pngp:
	$(MAKE) do-run-ta-addiu-pngp
	mv -f log-ta-addiu-pngp $T/good/good-ta-addiu-pngp
do-run-ta-addiu-pngp:
	$(SYS161) $(SYS161FLAGS) img-ta-addiu-pngp 2>&1 | $T/cleanlog.sh > log-ta-addiu-pngp
diff-ta-addiu-pngp:
	diff log-ta-addiu-pngp $T/good/good-ta-addiu-pngp
img-ta-addiu-pngp: $T/src/ta-addiu-pngp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addiu-pngp.S -o img-ta-addiu-pngp
	$T/checkbin.sh img-ta-addiu-pngp || rm -f img-ta-addiu-pngp

bins: img-ta-addiu-ppbp
run: run-ta-addiu-ppbp
.PHONY: run-ta-addiu-ppbp
.PHONY: good-ta-addiu-ppbp
.PHONY: do-run-ta-addiu-ppbp
.PHONY: diff-ta-addiu-ppbp
good: good-ta-addiu-ppbp
run-ta-addiu-ppbp:
	$(MAKE) do-run-ta-addiu-ppbp
	$(MAKE) diff-ta-addiu-ppbp
good-ta-addiu-ppbp:
	$(MAKE) do-run-ta-addiu-ppbp
	mv -f log-ta-addiu-ppbp $T/good/good-ta-addiu-ppbp
do-run-ta-addiu-ppbp:
	$(SYS161) $(SYS161FLAGS) img-ta-addiu-ppbp 2>&1 | $T/cleanlog.sh > log-ta-addiu-ppbp
diff-ta-addiu-ppbp:
	diff log-ta-addiu-ppbp $T/good/good-ta-addiu-ppbp
img-ta-addiu-ppbp: $T/src/ta-addiu-ppbp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addiu-ppbp.S -o img-ta-addiu-ppbp
	$T/checkbin.sh img-ta-addiu-ppbp || rm -f img-ta-addiu-ppbp

bins: img-ta-addiu-ppgp
run: run-ta-addiu-ppgp
.PHONY: run-ta-addiu-ppgp
.PHONY: good-ta-addiu-ppgp
.PHONY: do-run-ta-addiu-ppgp
.PHONY: diff-ta-addiu-ppgp
good: good-ta-addiu-ppgp
run-ta-addiu-ppgp:
	$(MAKE) do-run-ta-addiu-ppgp
	$(MAKE) diff-ta-addiu-ppgp
good-ta-addiu-ppgp:
	$(MAKE) do-run-ta-addiu-ppgp
	mv -f log-ta-addiu-ppgp $T/good/good-ta-addiu-ppgp
do-run-ta-addiu-ppgp:
	$(SYS161) $(SYS161FLAGS) img-ta-addiu-ppgp 2>&1 | $T/cleanlog.sh > log-ta-addiu-ppgp
diff-ta-addiu-ppgp:
	diff log-ta-addiu-ppgp $T/good/good-ta-addiu-ppgp
img-ta-addiu-ppgp: $T/src/ta-addiu-ppgp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addiu-ppgp.S -o img-ta-addiu-ppgp
	$T/checkbin.sh img-ta-addiu-ppgp || rm -f img-ta-addiu-ppgp

bins: img-ta-addiu-uubu
run: run-ta-addiu-uubu
.PHONY: run-ta-addiu-uubu
.PHONY: good-ta-addiu-uubu
.PHONY: do-run-ta-addiu-uubu
.PHONY: diff-ta-addiu-uubu
good: good-ta-addiu-uubu
run-ta-addiu-uubu:
	$(MAKE) do-run-ta-addiu-uubu
	$(MAKE) diff-ta-addiu-uubu
good-ta-addiu-uubu:
	$(MAKE) do-run-ta-addiu-uubu
	mv -f log-ta-addiu-uubu $T/good/good-ta-addiu-uubu
do-run-ta-addiu-uubu:
	$(SYS161) $(SYS161FLAGS) img-ta-addiu-uubu 2>&1 | $T/cleanlog.sh > log-ta-addiu-uubu
diff-ta-addiu-uubu:
	diff log-ta-addiu-uubu $T/good/good-ta-addiu-uubu
img-ta-addiu-uubu: $T/src/ta-addiu-uubu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addiu-uubu.S -o img-ta-addiu-uubu
	$T/checkbin.sh img-ta-addiu-uubu || rm -f img-ta-addiu-uubu

bins: img-ta-addiu-uugu
run: run-ta-addiu-uugu
.PHONY: run-ta-addiu-uugu
.PHONY: good-ta-addiu-uugu
.PHONY: do-run-ta-addiu-uugu
.PHONY: diff-ta-addiu-uugu
good: good-ta-addiu-uugu
run-ta-addiu-uugu:
	$(MAKE) do-run-ta-addiu-uugu
	$(MAKE) diff-ta-addiu-uugu
good-ta-addiu-uugu:
	$(MAKE) do-run-ta-addiu-uugu
	mv -f log-ta-addiu-uugu $T/good/good-ta-addiu-uugu
do-run-ta-addiu-uugu:
	$(SYS161) $(SYS161FLAGS) img-ta-addiu-uugu 2>&1 | $T/cleanlog.sh > log-ta-addiu-uugu
diff-ta-addiu-uugu:
	diff log-ta-addiu-uugu $T/good/good-ta-addiu-uugu
img-ta-addiu-uugu: $T/src/ta-addiu-uugu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addiu-uugu.S -o img-ta-addiu-uugu
	$T/checkbin.sh img-ta-addiu-uugu || rm -f img-ta-addiu-uugu

bins: img-ta-addu-nnbn
run: run-ta-addu-nnbn
.PHONY: run-ta-addu-nnbn
.PHONY: good-ta-addu-nnbn
.PHONY: do-run-ta-addu-nnbn
.PHONY: diff-ta-addu-nnbn
good: good-ta-addu-nnbn
run-ta-addu-nnbn:
	$(MAKE) do-run-ta-addu-nnbn
	$(MAKE) diff-ta-addu-nnbn
good-ta-addu-nnbn:
	$(MAKE) do-run-ta-addu-nnbn
	mv -f log-ta-addu-nnbn $T/good/good-ta-addu-nnbn
do-run-ta-addu-nnbn:
	$(SYS161) $(SYS161FLAGS) img-ta-addu-nnbn 2>&1 | $T/cleanlog.sh > log-ta-addu-nnbn
diff-ta-addu-nnbn:
	diff log-ta-addu-nnbn $T/good/good-ta-addu-nnbn
img-ta-addu-nnbn: $T/src/ta-addu-nnbn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addu-nnbn.S -o img-ta-addu-nnbn
	$T/checkbin.sh img-ta-addu-nnbn || rm -f img-ta-addu-nnbn

bins: img-ta-addu-nngn
run: run-ta-addu-nngn
.PHONY: run-ta-addu-nngn
.PHONY: good-ta-addu-nngn
.PHONY: do-run-ta-addu-nngn
.PHONY: diff-ta-addu-nngn
good: good-ta-addu-nngn
run-ta-addu-nngn:
	$(MAKE) do-run-ta-addu-nngn
	$(MAKE) diff-ta-addu-nngn
good-ta-addu-nngn:
	$(MAKE) do-run-ta-addu-nngn
	mv -f log-ta-addu-nngn $T/good/good-ta-addu-nngn
do-run-ta-addu-nngn:
	$(SYS161) $(SYS161FLAGS) img-ta-addu-nngn 2>&1 | $T/cleanlog.sh > log-ta-addu-nngn
diff-ta-addu-nngn:
	diff log-ta-addu-nngn $T/good/good-ta-addu-nngn
img-ta-addu-nngn: $T/src/ta-addu-nngn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addu-nngn.S -o img-ta-addu-nngn
	$T/checkbin.sh img-ta-addu-nngn || rm -f img-ta-addu-nngn

bins: img-ta-addu-npgn
run: run-ta-addu-npgn
.PHONY: run-ta-addu-npgn
.PHONY: good-ta-addu-npgn
.PHONY: do-run-ta-addu-npgn
.PHONY: diff-ta-addu-npgn
good: good-ta-addu-npgn
run-ta-addu-npgn:
	$(MAKE) do-run-ta-addu-npgn
	$(MAKE) diff-ta-addu-npgn
good-ta-addu-npgn:
	$(MAKE) do-run-ta-addu-npgn
	mv -f log-ta-addu-npgn $T/good/good-ta-addu-npgn
do-run-ta-addu-npgn:
	$(SYS161) $(SYS161FLAGS) img-ta-addu-npgn 2>&1 | $T/cleanlog.sh > log-ta-addu-npgn
diff-ta-addu-npgn:
	diff log-ta-addu-npgn $T/good/good-ta-addu-npgn
img-ta-addu-npgn: $T/src/ta-addu-npgn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addu-npgn.S -o img-ta-addu-npgn
	$T/checkbin.sh img-ta-addu-npgn || rm -f img-ta-addu-npgn

bins: img-ta-addu-npgp
run: run-ta-addu-npgp
.PHONY: run-ta-addu-npgp
.PHONY: good-ta-addu-npgp
.PHONY: do-run-ta-addu-npgp
.PHONY: diff-ta-addu-npgp
good: good-ta-addu-npgp
run-ta-addu-npgp:
	$(MAKE) do-run-ta-addu-npgp
	$(MAKE) diff-ta-addu-npgp
good-ta-addu-npgp:
	$(MAKE) do-run-ta-addu-npgp
	mv -f log-ta-addu-npgp $T/good/good-ta-addu-npgp
do-run-ta-addu-npgp:
	$(SYS161) $(SYS161FLAGS) img-ta-addu-npgp 2>&1 | $T/cleanlog.sh > log-ta-addu-npgp
diff-ta-addu-npgp:
	diff log-ta-addu-npgp $T/good/good-ta-addu-npgp
img-ta-addu-npgp: $T/src/ta-addu-npgp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addu-npgp.S -o img-ta-addu-npgp
	$T/checkbin.sh img-ta-addu-npgp || rm -f img-ta-addu-npgp

bins: img-ta-addu-pngn
run: run-ta-addu-pngn
.PHONY: run-ta-addu-pngn
.PHONY: good-ta-addu-pngn
.PHONY: do-run-ta-addu-pngn
.PHONY: diff-ta-addu-pngn
good: good-ta-addu-pngn
run-ta-addu-pngn:
	$(MAKE) do-run-ta-addu-pngn
	$(MAKE) diff-ta-addu-pngn
good-ta-addu-pngn:
	$(MAKE) do-run-ta-addu-pngn
	mv -f log-ta-addu-pngn $T/good/good-ta-addu-pngn
do-run-ta-addu-pngn:
	$(SYS161) $(SYS161FLAGS) img-ta-addu-pngn 2>&1 | $T/cleanlog.sh > log-ta-addu-pngn
diff-ta-addu-pngn:
	diff log-ta-addu-pngn $T/good/good-ta-addu-pngn
img-ta-addu-pngn: $T/src/ta-addu-pngn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addu-pngn.S -o img-ta-addu-pngn
	$T/checkbin.sh img-ta-addu-pngn || rm -f img-ta-addu-pngn

bins: img-ta-addu-pngp
run: run-ta-addu-pngp
.PHONY: run-ta-addu-pngp
.PHONY: good-ta-addu-pngp
.PHONY: do-run-ta-addu-pngp
.PHONY: diff-ta-addu-pngp
good: good-ta-addu-pngp
run-ta-addu-pngp:
	$(MAKE) do-run-ta-addu-pngp
	$(MAKE) diff-ta-addu-pngp
good-ta-addu-pngp:
	$(MAKE) do-run-ta-addu-pngp
	mv -f log-ta-addu-pngp $T/good/good-ta-addu-pngp
do-run-ta-addu-pngp:
	$(SYS161) $(SYS161FLAGS) img-ta-addu-pngp 2>&1 | $T/cleanlog.sh > log-ta-addu-pngp
diff-ta-addu-pngp:
	diff log-ta-addu-pngp $T/good/good-ta-addu-pngp
img-ta-addu-pngp: $T/src/ta-addu-pngp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addu-pngp.S -o img-ta-addu-pngp
	$T/checkbin.sh img-ta-addu-pngp || rm -f img-ta-addu-pngp

bins: img-ta-addu-ppbp
run: run-ta-addu-ppbp
.PHONY: run-ta-addu-ppbp
.PHONY: good-ta-addu-ppbp
.PHONY: do-run-ta-addu-ppbp
.PHONY: diff-ta-addu-ppbp
good: good-ta-addu-ppbp
run-ta-addu-ppbp:
	$(MAKE) do-run-ta-addu-ppbp
	$(MAKE) diff-ta-addu-ppbp
good-ta-addu-ppbp:
	$(MAKE) do-run-ta-addu-ppbp
	mv -f log-ta-addu-ppbp $T/good/good-ta-addu-ppbp
do-run-ta-addu-ppbp:
	$(SYS161) $(SYS161FLAGS) img-ta-addu-ppbp 2>&1 | $T/cleanlog.sh > log-ta-addu-ppbp
diff-ta-addu-ppbp:
	diff log-ta-addu-ppbp $T/good/good-ta-addu-ppbp
img-ta-addu-ppbp: $T/src/ta-addu-ppbp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addu-ppbp.S -o img-ta-addu-ppbp
	$T/checkbin.sh img-ta-addu-ppbp || rm -f img-ta-addu-ppbp

bins: img-ta-addu-ppgp
run: run-ta-addu-ppgp
.PHONY: run-ta-addu-ppgp
.PHONY: good-ta-addu-ppgp
.PHONY: do-run-ta-addu-ppgp
.PHONY: diff-ta-addu-ppgp
good: good-ta-addu-ppgp
run-ta-addu-ppgp:
	$(MAKE) do-run-ta-addu-ppgp
	$(MAKE) diff-ta-addu-ppgp
good-ta-addu-ppgp:
	$(MAKE) do-run-ta-addu-ppgp
	mv -f log-ta-addu-ppgp $T/good/good-ta-addu-ppgp
do-run-ta-addu-ppgp:
	$(SYS161) $(SYS161FLAGS) img-ta-addu-ppgp 2>&1 | $T/cleanlog.sh > log-ta-addu-ppgp
diff-ta-addu-ppgp:
	diff log-ta-addu-ppgp $T/good/good-ta-addu-ppgp
img-ta-addu-ppgp: $T/src/ta-addu-ppgp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addu-ppgp.S -o img-ta-addu-ppgp
	$T/checkbin.sh img-ta-addu-ppgp || rm -f img-ta-addu-ppgp

bins: img-ta-addu-uubu
run: run-ta-addu-uubu
.PHONY: run-ta-addu-uubu
.PHONY: good-ta-addu-uubu
.PHONY: do-run-ta-addu-uubu
.PHONY: diff-ta-addu-uubu
good: good-ta-addu-uubu
run-ta-addu-uubu:
	$(MAKE) do-run-ta-addu-uubu
	$(MAKE) diff-ta-addu-uubu
good-ta-addu-uubu:
	$(MAKE) do-run-ta-addu-uubu
	mv -f log-ta-addu-uubu $T/good/good-ta-addu-uubu
do-run-ta-addu-uubu:
	$(SYS161) $(SYS161FLAGS) img-ta-addu-uubu 2>&1 | $T/cleanlog.sh > log-ta-addu-uubu
diff-ta-addu-uubu:
	diff log-ta-addu-uubu $T/good/good-ta-addu-uubu
img-ta-addu-uubu: $T/src/ta-addu-uubu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addu-uubu.S -o img-ta-addu-uubu
	$T/checkbin.sh img-ta-addu-uubu || rm -f img-ta-addu-uubu

bins: img-ta-addu-uugu
run: run-ta-addu-uugu
.PHONY: run-ta-addu-uugu
.PHONY: good-ta-addu-uugu
.PHONY: do-run-ta-addu-uugu
.PHONY: diff-ta-addu-uugu
good: good-ta-addu-uugu
run-ta-addu-uugu:
	$(MAKE) do-run-ta-addu-uugu
	$(MAKE) diff-ta-addu-uugu
good-ta-addu-uugu:
	$(MAKE) do-run-ta-addu-uugu
	mv -f log-ta-addu-uugu $T/good/good-ta-addu-uugu
do-run-ta-addu-uugu:
	$(SYS161) $(SYS161FLAGS) img-ta-addu-uugu 2>&1 | $T/cleanlog.sh > log-ta-addu-uugu
diff-ta-addu-uugu:
	diff log-ta-addu-uugu $T/good/good-ta-addu-uugu
img-ta-addu-uugu: $T/src/ta-addu-uugu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-addu-uugu.S -o img-ta-addu-uugu
	$T/checkbin.sh img-ta-addu-uugu || rm -f img-ta-addu-uugu

bins: img-ta-sub-nngn
run: run-ta-sub-nngn
.PHONY: run-ta-sub-nngn
.PHONY: good-ta-sub-nngn
.PHONY: do-run-ta-sub-nngn
.PHONY: diff-ta-sub-nngn
good: good-ta-sub-nngn
run-ta-sub-nngn:
	$(MAKE) do-run-ta-sub-nngn
	$(MAKE) diff-ta-sub-nngn
good-ta-sub-nngn:
	$(MAKE) do-run-ta-sub-nngn
	mv -f log-ta-sub-nngn $T/good/good-ta-sub-nngn
do-run-ta-sub-nngn:
	$(SYS161) $(SYS161FLAGS) img-ta-sub-nngn 2>&1 | $T/cleanlog.sh > log-ta-sub-nngn
diff-ta-sub-nngn:
	diff log-ta-sub-nngn $T/good/good-ta-sub-nngn
img-ta-sub-nngn: $T/src/ta-sub-nngn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-sub-nngn.S -o img-ta-sub-nngn
	$T/checkbin.sh img-ta-sub-nngn || rm -f img-ta-sub-nngn

bins: img-ta-sub-nngp
run: run-ta-sub-nngp
.PHONY: run-ta-sub-nngp
.PHONY: good-ta-sub-nngp
.PHONY: do-run-ta-sub-nngp
.PHONY: diff-ta-sub-nngp
good: good-ta-sub-nngp
run-ta-sub-nngp:
	$(MAKE) do-run-ta-sub-nngp
	$(MAKE) diff-ta-sub-nngp
good-ta-sub-nngp:
	$(MAKE) do-run-ta-sub-nngp
	mv -f log-ta-sub-nngp $T/good/good-ta-sub-nngp
do-run-ta-sub-nngp:
	$(SYS161) $(SYS161FLAGS) img-ta-sub-nngp 2>&1 | $T/cleanlog.sh > log-ta-sub-nngp
diff-ta-sub-nngp:
	diff log-ta-sub-nngp $T/good/good-ta-sub-nngp
img-ta-sub-nngp: $T/src/ta-sub-nngp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-sub-nngp.S -o img-ta-sub-nngp
	$T/checkbin.sh img-ta-sub-nngp || rm -f img-ta-sub-nngp

bins: img-ta-sub-npbn
run: run-ta-sub-npbn
.PHONY: run-ta-sub-npbn
.PHONY: good-ta-sub-npbn
.PHONY: do-run-ta-sub-npbn
.PHONY: diff-ta-sub-npbn
good: good-ta-sub-npbn
run-ta-sub-npbn:
	$(MAKE) do-run-ta-sub-npbn
	$(MAKE) diff-ta-sub-npbn
good-ta-sub-npbn:
	$(MAKE) do-run-ta-sub-npbn
	mv -f log-ta-sub-npbn $T/good/good-ta-sub-npbn
do-run-ta-sub-npbn:
	$(SYS161) $(SYS161FLAGS) img-ta-sub-npbn 2>&1 | $T/cleanlog.sh > log-ta-sub-npbn
diff-ta-sub-npbn:
	diff log-ta-sub-npbn $T/good/good-ta-sub-npbn
img-ta-sub-npbn: $T/src/ta-sub-npbn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-sub-npbn.S -o img-ta-sub-npbn
	$T/checkbin.sh img-ta-sub-npbn || rm -f img-ta-sub-npbn

bins: img-ta-sub-npgn
run: run-ta-sub-npgn
.PHONY: run-ta-sub-npgn
.PHONY: good-ta-sub-npgn
.PHONY: do-run-ta-sub-npgn
.PHONY: diff-ta-sub-npgn
good: good-ta-sub-npgn
run-ta-sub-npgn:
	$(MAKE) do-run-ta-sub-npgn
	$(MAKE) diff-ta-sub-npgn
good-ta-sub-npgn:
	$(MAKE) do-run-ta-sub-npgn
	mv -f log-ta-sub-npgn $T/good/good-ta-sub-npgn
do-run-ta-sub-npgn:
	$(SYS161) $(SYS161FLAGS) img-ta-sub-npgn 2>&1 | $T/cleanlog.sh > log-ta-sub-npgn
diff-ta-sub-npgn:
	diff log-ta-sub-npgn $T/good/good-ta-sub-npgn
img-ta-sub-npgn: $T/src/ta-sub-npgn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-sub-npgn.S -o img-ta-sub-npgn
	$T/checkbin.sh img-ta-sub-npgn || rm -f img-ta-sub-npgn

bins: img-ta-sub-pnbp
run: run-ta-sub-pnbp
.PHONY: run-ta-sub-pnbp
.PHONY: good-ta-sub-pnbp
.PHONY: do-run-ta-sub-pnbp
.PHONY: diff-ta-sub-pnbp
good: good-ta-sub-pnbp
run-ta-sub-pnbp:
	$(MAKE) do-run-ta-sub-pnbp
	$(MAKE) diff-ta-sub-pnbp
good-ta-sub-pnbp:
	$(MAKE) do-run-ta-sub-pnbp
	mv -f log-ta-sub-pnbp $T/good/good-ta-sub-pnbp
do-run-ta-sub-pnbp:
	$(SYS161) $(SYS161FLAGS) img-ta-sub-pnbp 2>&1 | $T/cleanlog.sh > log-ta-sub-pnbp
diff-ta-sub-pnbp:
	diff log-ta-sub-pnbp $T/good/good-ta-sub-pnbp
img-ta-sub-pnbp: $T/src/ta-sub-pnbp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-sub-pnbp.S -o img-ta-sub-pnbp
	$T/checkbin.sh img-ta-sub-pnbp || rm -f img-ta-sub-pnbp

bins: img-ta-sub-pngp
run: run-ta-sub-pngp
.PHONY: run-ta-sub-pngp
.PHONY: good-ta-sub-pngp
.PHONY: do-run-ta-sub-pngp
.PHONY: diff-ta-sub-pngp
good: good-ta-sub-pngp
run-ta-sub-pngp:
	$(MAKE) do-run-ta-sub-pngp
	$(MAKE) diff-ta-sub-pngp
good-ta-sub-pngp:
	$(MAKE) do-run-ta-sub-pngp
	mv -f log-ta-sub-pngp $T/good/good-ta-sub-pngp
do-run-ta-sub-pngp:
	$(SYS161) $(SYS161FLAGS) img-ta-sub-pngp 2>&1 | $T/cleanlog.sh > log-ta-sub-pngp
diff-ta-sub-pngp:
	diff log-ta-sub-pngp $T/good/good-ta-sub-pngp
img-ta-sub-pngp: $T/src/ta-sub-pngp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-sub-pngp.S -o img-ta-sub-pngp
	$T/checkbin.sh img-ta-sub-pngp || rm -f img-ta-sub-pngp

bins: img-ta-sub-ppgn
run: run-ta-sub-ppgn
.PHONY: run-ta-sub-ppgn
.PHONY: good-ta-sub-ppgn
.PHONY: do-run-ta-sub-ppgn
.PHONY: diff-ta-sub-ppgn
good: good-ta-sub-ppgn
run-ta-sub-ppgn:
	$(MAKE) do-run-ta-sub-ppgn
	$(MAKE) diff-ta-sub-ppgn
good-ta-sub-ppgn:
	$(MAKE) do-run-ta-sub-ppgn
	mv -f log-ta-sub-ppgn $T/good/good-ta-sub-ppgn
do-run-ta-sub-ppgn:
	$(SYS161) $(SYS161FLAGS) img-ta-sub-ppgn 2>&1 | $T/cleanlog.sh > log-ta-sub-ppgn
diff-ta-sub-ppgn:
	diff log-ta-sub-ppgn $T/good/good-ta-sub-ppgn
img-ta-sub-ppgn: $T/src/ta-sub-ppgn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-sub-ppgn.S -o img-ta-sub-ppgn
	$T/checkbin.sh img-ta-sub-ppgn || rm -f img-ta-sub-ppgn

bins: img-ta-sub-ppgp
run: run-ta-sub-ppgp
.PHONY: run-ta-sub-ppgp
.PHONY: good-ta-sub-ppgp
.PHONY: do-run-ta-sub-ppgp
.PHONY: diff-ta-sub-ppgp
good: good-ta-sub-ppgp
run-ta-sub-ppgp:
	$(MAKE) do-run-ta-sub-ppgp
	$(MAKE) diff-ta-sub-ppgp
good-ta-sub-ppgp:
	$(MAKE) do-run-ta-sub-ppgp
	mv -f log-ta-sub-ppgp $T/good/good-ta-sub-ppgp
do-run-ta-sub-ppgp:
	$(SYS161) $(SYS161FLAGS) img-ta-sub-ppgp 2>&1 | $T/cleanlog.sh > log-ta-sub-ppgp
diff-ta-sub-ppgp:
	diff log-ta-sub-ppgp $T/good/good-ta-sub-ppgp
img-ta-sub-ppgp: $T/src/ta-sub-ppgp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-sub-ppgp.S -o img-ta-sub-ppgp
	$T/checkbin.sh img-ta-sub-ppgp || rm -f img-ta-sub-ppgp

bins: img-ta-sub-uubu
run: run-ta-sub-uubu
.PHONY: run-ta-sub-uubu
.PHONY: good-ta-sub-uubu
.PHONY: do-run-ta-sub-uubu
.PHONY: diff-ta-sub-uubu
good: good-ta-sub-uubu
run-ta-sub-uubu:
	$(MAKE) do-run-ta-sub-uubu
	$(MAKE) diff-ta-sub-uubu
good-ta-sub-uubu:
	$(MAKE) do-run-ta-sub-uubu
	mv -f log-ta-sub-uubu $T/good/good-ta-sub-uubu
do-run-ta-sub-uubu:
	$(SYS161) $(SYS161FLAGS) img-ta-sub-uubu 2>&1 | $T/cleanlog.sh > log-ta-sub-uubu
diff-ta-sub-uubu:
	diff log-ta-sub-uubu $T/good/good-ta-sub-uubu
img-ta-sub-uubu: $T/src/ta-sub-uubu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-sub-uubu.S -o img-ta-sub-uubu
	$T/checkbin.sh img-ta-sub-uubu || rm -f img-ta-sub-uubu

bins: img-ta-sub-uugu
run: run-ta-sub-uugu
.PHONY: run-ta-sub-uugu
.PHONY: good-ta-sub-uugu
.PHONY: do-run-ta-sub-uugu
.PHONY: diff-ta-sub-uugu
good: good-ta-sub-uugu
run-ta-sub-uugu:
	$(MAKE) do-run-ta-sub-uugu
	$(MAKE) diff-ta-sub-uugu
good-ta-sub-uugu:
	$(MAKE) do-run-ta-sub-uugu
	mv -f log-ta-sub-uugu $T/good/good-ta-sub-uugu
do-run-ta-sub-uugu:
	$(SYS161) $(SYS161FLAGS) img-ta-sub-uugu 2>&1 | $T/cleanlog.sh > log-ta-sub-uugu
diff-ta-sub-uugu:
	diff log-ta-sub-uugu $T/good/good-ta-sub-uugu
img-ta-sub-uugu: $T/src/ta-sub-uugu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-sub-uugu.S -o img-ta-sub-uugu
	$T/checkbin.sh img-ta-sub-uugu || rm -f img-ta-sub-uugu

bins: img-ta-subu-nngn
run: run-ta-subu-nngn
.PHONY: run-ta-subu-nngn
.PHONY: good-ta-subu-nngn
.PHONY: do-run-ta-subu-nngn
.PHONY: diff-ta-subu-nngn
good: good-ta-subu-nngn
run-ta-subu-nngn:
	$(MAKE) do-run-ta-subu-nngn
	$(MAKE) diff-ta-subu-nngn
good-ta-subu-nngn:
	$(MAKE) do-run-ta-subu-nngn
	mv -f log-ta-subu-nngn $T/good/good-ta-subu-nngn
do-run-ta-subu-nngn:
	$(SYS161) $(SYS161FLAGS) img-ta-subu-nngn 2>&1 | $T/cleanlog.sh > log-ta-subu-nngn
diff-ta-subu-nngn:
	diff log-ta-subu-nngn $T/good/good-ta-subu-nngn
img-ta-subu-nngn: $T/src/ta-subu-nngn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-subu-nngn.S -o img-ta-subu-nngn
	$T/checkbin.sh img-ta-subu-nngn || rm -f img-ta-subu-nngn

bins: img-ta-subu-nngp
run: run-ta-subu-nngp
.PHONY: run-ta-subu-nngp
.PHONY: good-ta-subu-nngp
.PHONY: do-run-ta-subu-nngp
.PHONY: diff-ta-subu-nngp
good: good-ta-subu-nngp
run-ta-subu-nngp:
	$(MAKE) do-run-ta-subu-nngp
	$(MAKE) diff-ta-subu-nngp
good-ta-subu-nngp:
	$(MAKE) do-run-ta-subu-nngp
	mv -f log-ta-subu-nngp $T/good/good-ta-subu-nngp
do-run-ta-subu-nngp:
	$(SYS161) $(SYS161FLAGS) img-ta-subu-nngp 2>&1 | $T/cleanlog.sh > log-ta-subu-nngp
diff-ta-subu-nngp:
	diff log-ta-subu-nngp $T/good/good-ta-subu-nngp
img-ta-subu-nngp: $T/src/ta-subu-nngp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-subu-nngp.S -o img-ta-subu-nngp
	$T/checkbin.sh img-ta-subu-nngp || rm -f img-ta-subu-nngp

bins: img-ta-subu-npbn
run: run-ta-subu-npbn
.PHONY: run-ta-subu-npbn
.PHONY: good-ta-subu-npbn
.PHONY: do-run-ta-subu-npbn
.PHONY: diff-ta-subu-npbn
good: good-ta-subu-npbn
run-ta-subu-npbn:
	$(MAKE) do-run-ta-subu-npbn
	$(MAKE) diff-ta-subu-npbn
good-ta-subu-npbn:
	$(MAKE) do-run-ta-subu-npbn
	mv -f log-ta-subu-npbn $T/good/good-ta-subu-npbn
do-run-ta-subu-npbn:
	$(SYS161) $(SYS161FLAGS) img-ta-subu-npbn 2>&1 | $T/cleanlog.sh > log-ta-subu-npbn
diff-ta-subu-npbn:
	diff log-ta-subu-npbn $T/good/good-ta-subu-npbn
img-ta-subu-npbn: $T/src/ta-subu-npbn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-subu-npbn.S -o img-ta-subu-npbn
	$T/checkbin.sh img-ta-subu-npbn || rm -f img-ta-subu-npbn

bins: img-ta-subu-npgn
run: run-ta-subu-npgn
.PHONY: run-ta-subu-npgn
.PHONY: good-ta-subu-npgn
.PHONY: do-run-ta-subu-npgn
.PHONY: diff-ta-subu-npgn
good: good-ta-subu-npgn
run-ta-subu-npgn:
	$(MAKE) do-run-ta-subu-npgn
	$(MAKE) diff-ta-subu-npgn
good-ta-subu-npgn:
	$(MAKE) do-run-ta-subu-npgn
	mv -f log-ta-subu-npgn $T/good/good-ta-subu-npgn
do-run-ta-subu-npgn:
	$(SYS161) $(SYS161FLAGS) img-ta-subu-npgn 2>&1 | $T/cleanlog.sh > log-ta-subu-npgn
diff-ta-subu-npgn:
	diff log-ta-subu-npgn $T/good/good-ta-subu-npgn
img-ta-subu-npgn: $T/src/ta-subu-npgn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-subu-npgn.S -o img-ta-subu-npgn
	$T/checkbin.sh img-ta-subu-npgn || rm -f img-ta-subu-npgn

bins: img-ta-subu-pnbp
run: run-ta-subu-pnbp
.PHONY: run-ta-subu-pnbp
.PHONY: good-ta-subu-pnbp
.PHONY: do-run-ta-subu-pnbp
.PHONY: diff-ta-subu-pnbp
good: good-ta-subu-pnbp
run-ta-subu-pnbp:
	$(MAKE) do-run-ta-subu-pnbp
	$(MAKE) diff-ta-subu-pnbp
good-ta-subu-pnbp:
	$(MAKE) do-run-ta-subu-pnbp
	mv -f log-ta-subu-pnbp $T/good/good-ta-subu-pnbp
do-run-ta-subu-pnbp:
	$(SYS161) $(SYS161FLAGS) img-ta-subu-pnbp 2>&1 | $T/cleanlog.sh > log-ta-subu-pnbp
diff-ta-subu-pnbp:
	diff log-ta-subu-pnbp $T/good/good-ta-subu-pnbp
img-ta-subu-pnbp: $T/src/ta-subu-pnbp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-subu-pnbp.S -o img-ta-subu-pnbp
	$T/checkbin.sh img-ta-subu-pnbp || rm -f img-ta-subu-pnbp

bins: img-ta-subu-pngp
run: run-ta-subu-pngp
.PHONY: run-ta-subu-pngp
.PHONY: good-ta-subu-pngp
.PHONY: do-run-ta-subu-pngp
.PHONY: diff-ta-subu-pngp
good: good-ta-subu-pngp
run-ta-subu-pngp:
	$(MAKE) do-run-ta-subu-pngp
	$(MAKE) diff-ta-subu-pngp
good-ta-subu-pngp:
	$(MAKE) do-run-ta-subu-pngp
	mv -f log-ta-subu-pngp $T/good/good-ta-subu-pngp
do-run-ta-subu-pngp:
	$(SYS161) $(SYS161FLAGS) img-ta-subu-pngp 2>&1 | $T/cleanlog.sh > log-ta-subu-pngp
diff-ta-subu-pngp:
	diff log-ta-subu-pngp $T/good/good-ta-subu-pngp
img-ta-subu-pngp: $T/src/ta-subu-pngp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-subu-pngp.S -o img-ta-subu-pngp
	$T/checkbin.sh img-ta-subu-pngp || rm -f img-ta-subu-pngp

bins: img-ta-subu-ppgn
run: run-ta-subu-ppgn
.PHONY: run-ta-subu-ppgn
.PHONY: good-ta-subu-ppgn
.PHONY: do-run-ta-subu-ppgn
.PHONY: diff-ta-subu-ppgn
good: good-ta-subu-ppgn
run-ta-subu-ppgn:
	$(MAKE) do-run-ta-subu-ppgn
	$(MAKE) diff-ta-subu-ppgn
good-ta-subu-ppgn:
	$(MAKE) do-run-ta-subu-ppgn
	mv -f log-ta-subu-ppgn $T/good/good-ta-subu-ppgn
do-run-ta-subu-ppgn:
	$(SYS161) $(SYS161FLAGS) img-ta-subu-ppgn 2>&1 | $T/cleanlog.sh > log-ta-subu-ppgn
diff-ta-subu-ppgn:
	diff log-ta-subu-ppgn $T/good/good-ta-subu-ppgn
img-ta-subu-ppgn: $T/src/ta-subu-ppgn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-subu-ppgn.S -o img-ta-subu-ppgn
	$T/checkbin.sh img-ta-subu-ppgn || rm -f img-ta-subu-ppgn

bins: img-ta-subu-ppgp
run: run-ta-subu-ppgp
.PHONY: run-ta-subu-ppgp
.PHONY: good-ta-subu-ppgp
.PHONY: do-run-ta-subu-ppgp
.PHONY: diff-ta-subu-ppgp
good: good-ta-subu-ppgp
run-ta-subu-ppgp:
	$(MAKE) do-run-ta-subu-ppgp
	$(MAKE) diff-ta-subu-ppgp
good-ta-subu-ppgp:
	$(MAKE) do-run-ta-subu-ppgp
	mv -f log-ta-subu-ppgp $T/good/good-ta-subu-ppgp
do-run-ta-subu-ppgp:
	$(SYS161) $(SYS161FLAGS) img-ta-subu-ppgp 2>&1 | $T/cleanlog.sh > log-ta-subu-ppgp
diff-ta-subu-ppgp:
	diff log-ta-subu-ppgp $T/good/good-ta-subu-ppgp
img-ta-subu-ppgp: $T/src/ta-subu-ppgp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-subu-ppgp.S -o img-ta-subu-ppgp
	$T/checkbin.sh img-ta-subu-ppgp || rm -f img-ta-subu-ppgp

bins: img-ta-subu-uubu
run: run-ta-subu-uubu
.PHONY: run-ta-subu-uubu
.PHONY: good-ta-subu-uubu
.PHONY: do-run-ta-subu-uubu
.PHONY: diff-ta-subu-uubu
good: good-ta-subu-uubu
run-ta-subu-uubu:
	$(MAKE) do-run-ta-subu-uubu
	$(MAKE) diff-ta-subu-uubu
good-ta-subu-uubu:
	$(MAKE) do-run-ta-subu-uubu
	mv -f log-ta-subu-uubu $T/good/good-ta-subu-uubu
do-run-ta-subu-uubu:
	$(SYS161) $(SYS161FLAGS) img-ta-subu-uubu 2>&1 | $T/cleanlog.sh > log-ta-subu-uubu
diff-ta-subu-uubu:
	diff log-ta-subu-uubu $T/good/good-ta-subu-uubu
img-ta-subu-uubu: $T/src/ta-subu-uubu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-subu-uubu.S -o img-ta-subu-uubu
	$T/checkbin.sh img-ta-subu-uubu || rm -f img-ta-subu-uubu

bins: img-ta-subu-uugu
run: run-ta-subu-uugu
.PHONY: run-ta-subu-uugu
.PHONY: good-ta-subu-uugu
.PHONY: do-run-ta-subu-uugu
.PHONY: diff-ta-subu-uugu
good: good-ta-subu-uugu
run-ta-subu-uugu:
	$(MAKE) do-run-ta-subu-uugu
	$(MAKE) diff-ta-subu-uugu
good-ta-subu-uugu:
	$(MAKE) do-run-ta-subu-uugu
	mv -f log-ta-subu-uugu $T/good/good-ta-subu-uugu
do-run-ta-subu-uugu:
	$(SYS161) $(SYS161FLAGS) img-ta-subu-uugu 2>&1 | $T/cleanlog.sh > log-ta-subu-uugu
diff-ta-subu-uugu:
	diff log-ta-subu-uugu $T/good/good-ta-subu-uugu
img-ta-subu-uugu: $T/src/ta-subu-uugu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/ta-subu-uugu.S -o img-ta-subu-uugu
	$T/checkbin.sh img-ta-subu-uugu || rm -f img-ta-subu-uugu

bins: img-tb-and
run: run-tb-and
.PHONY: run-tb-and
.PHONY: good-tb-and
.PHONY: do-run-tb-and
.PHONY: diff-tb-and
good: good-tb-and
run-tb-and:
	$(MAKE) do-run-tb-and
	$(MAKE) diff-tb-and
good-tb-and:
	$(MAKE) do-run-tb-and
	mv -f log-tb-and $T/good/good-tb-and
do-run-tb-and:
	$(SYS161) $(SYS161FLAGS) img-tb-and 2>&1 | $T/cleanlog.sh > log-tb-and
diff-tb-and:
	diff log-tb-and $T/good/good-tb-and
img-tb-and: $T/src/tb-and.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tb-and.S -o img-tb-and
	$T/checkbin.sh img-tb-and || rm -f img-tb-and

bins: img-tb-andi
run: run-tb-andi
.PHONY: run-tb-andi
.PHONY: good-tb-andi
.PHONY: do-run-tb-andi
.PHONY: diff-tb-andi
good: good-tb-andi
run-tb-andi:
	$(MAKE) do-run-tb-andi
	$(MAKE) diff-tb-andi
good-tb-andi:
	$(MAKE) do-run-tb-andi
	mv -f log-tb-andi $T/good/good-tb-andi
do-run-tb-andi:
	$(SYS161) $(SYS161FLAGS) img-tb-andi 2>&1 | $T/cleanlog.sh > log-tb-andi
diff-tb-andi:
	diff log-tb-andi $T/good/good-tb-andi
img-tb-andi: $T/src/tb-andi.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tb-andi.S -o img-tb-andi
	$T/checkbin.sh img-tb-andi || rm -f img-tb-andi

bins: img-tb-nor
run: run-tb-nor
.PHONY: run-tb-nor
.PHONY: good-tb-nor
.PHONY: do-run-tb-nor
.PHONY: diff-tb-nor
good: good-tb-nor
run-tb-nor:
	$(MAKE) do-run-tb-nor
	$(MAKE) diff-tb-nor
good-tb-nor:
	$(MAKE) do-run-tb-nor
	mv -f log-tb-nor $T/good/good-tb-nor
do-run-tb-nor:
	$(SYS161) $(SYS161FLAGS) img-tb-nor 2>&1 | $T/cleanlog.sh > log-tb-nor
diff-tb-nor:
	diff log-tb-nor $T/good/good-tb-nor
img-tb-nor: $T/src/tb-nor.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tb-nor.S -o img-tb-nor
	$T/checkbin.sh img-tb-nor || rm -f img-tb-nor

bins: img-tb-or
run: run-tb-or
.PHONY: run-tb-or
.PHONY: good-tb-or
.PHONY: do-run-tb-or
.PHONY: diff-tb-or
good: good-tb-or
run-tb-or:
	$(MAKE) do-run-tb-or
	$(MAKE) diff-tb-or
good-tb-or:
	$(MAKE) do-run-tb-or
	mv -f log-tb-or $T/good/good-tb-or
do-run-tb-or:
	$(SYS161) $(SYS161FLAGS) img-tb-or 2>&1 | $T/cleanlog.sh > log-tb-or
diff-tb-or:
	diff log-tb-or $T/good/good-tb-or
img-tb-or: $T/src/tb-or.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tb-or.S -o img-tb-or
	$T/checkbin.sh img-tb-or || rm -f img-tb-or

bins: img-tb-ori
run: run-tb-ori
.PHONY: run-tb-ori
.PHONY: good-tb-ori
.PHONY: do-run-tb-ori
.PHONY: diff-tb-ori
good: good-tb-ori
run-tb-ori:
	$(MAKE) do-run-tb-ori
	$(MAKE) diff-tb-ori
good-tb-ori:
	$(MAKE) do-run-tb-ori
	mv -f log-tb-ori $T/good/good-tb-ori
do-run-tb-ori:
	$(SYS161) $(SYS161FLAGS) img-tb-ori 2>&1 | $T/cleanlog.sh > log-tb-ori
diff-tb-ori:
	diff log-tb-ori $T/good/good-tb-ori
img-tb-ori: $T/src/tb-ori.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tb-ori.S -o img-tb-ori
	$T/checkbin.sh img-tb-ori || rm -f img-tb-ori

bins: img-tb-xor
run: run-tb-xor
.PHONY: run-tb-xor
.PHONY: good-tb-xor
.PHONY: do-run-tb-xor
.PHONY: diff-tb-xor
good: good-tb-xor
run-tb-xor:
	$(MAKE) do-run-tb-xor
	$(MAKE) diff-tb-xor
good-tb-xor:
	$(MAKE) do-run-tb-xor
	mv -f log-tb-xor $T/good/good-tb-xor
do-run-tb-xor:
	$(SYS161) $(SYS161FLAGS) img-tb-xor 2>&1 | $T/cleanlog.sh > log-tb-xor
diff-tb-xor:
	diff log-tb-xor $T/good/good-tb-xor
img-tb-xor: $T/src/tb-xor.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tb-xor.S -o img-tb-xor
	$T/checkbin.sh img-tb-xor || rm -f img-tb-xor

bins: img-tb-xori
run: run-tb-xori
.PHONY: run-tb-xori
.PHONY: good-tb-xori
.PHONY: do-run-tb-xori
.PHONY: diff-tb-xori
good: good-tb-xori
run-tb-xori:
	$(MAKE) do-run-tb-xori
	$(MAKE) diff-tb-xori
good-tb-xori:
	$(MAKE) do-run-tb-xori
	mv -f log-tb-xori $T/good/good-tb-xori
do-run-tb-xori:
	$(SYS161) $(SYS161FLAGS) img-tb-xori 2>&1 | $T/cleanlog.sh > log-tb-xori
diff-tb-xori:
	diff log-tb-xori $T/good/good-tb-xori
img-tb-xori: $T/src/tb-xori.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tb-xori.S -o img-tb-xori
	$T/checkbin.sh img-tb-xori || rm -f img-tb-xori

bins: img-tc-slt
run: run-tc-slt
.PHONY: run-tc-slt
.PHONY: good-tc-slt
.PHONY: do-run-tc-slt
.PHONY: diff-tc-slt
good: good-tc-slt
run-tc-slt:
	$(MAKE) do-run-tc-slt
	$(MAKE) diff-tc-slt
good-tc-slt:
	$(MAKE) do-run-tc-slt
	mv -f log-tc-slt $T/good/good-tc-slt
do-run-tc-slt:
	$(SYS161) $(SYS161FLAGS) img-tc-slt 2>&1 | $T/cleanlog.sh > log-tc-slt
diff-tc-slt:
	diff log-tc-slt $T/good/good-tc-slt
img-tc-slt: $T/src/tc-slt.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tc-slt.S -o img-tc-slt
	$T/checkbin.sh img-tc-slt || rm -f img-tc-slt

bins: img-tc-slti
run: run-tc-slti
.PHONY: run-tc-slti
.PHONY: good-tc-slti
.PHONY: do-run-tc-slti
.PHONY: diff-tc-slti
good: good-tc-slti
run-tc-slti:
	$(MAKE) do-run-tc-slti
	$(MAKE) diff-tc-slti
good-tc-slti:
	$(MAKE) do-run-tc-slti
	mv -f log-tc-slti $T/good/good-tc-slti
do-run-tc-slti:
	$(SYS161) $(SYS161FLAGS) img-tc-slti 2>&1 | $T/cleanlog.sh > log-tc-slti
diff-tc-slti:
	diff log-tc-slti $T/good/good-tc-slti
img-tc-slti: $T/src/tc-slti.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tc-slti.S -o img-tc-slti
	$T/checkbin.sh img-tc-slti || rm -f img-tc-slti

bins: img-tc-sltiu
run: run-tc-sltiu
.PHONY: run-tc-sltiu
.PHONY: good-tc-sltiu
.PHONY: do-run-tc-sltiu
.PHONY: diff-tc-sltiu
good: good-tc-sltiu
run-tc-sltiu:
	$(MAKE) do-run-tc-sltiu
	$(MAKE) diff-tc-sltiu
good-tc-sltiu:
	$(MAKE) do-run-tc-sltiu
	mv -f log-tc-sltiu $T/good/good-tc-sltiu
do-run-tc-sltiu:
	$(SYS161) $(SYS161FLAGS) img-tc-sltiu 2>&1 | $T/cleanlog.sh > log-tc-sltiu
diff-tc-sltiu:
	diff log-tc-sltiu $T/good/good-tc-sltiu
img-tc-sltiu: $T/src/tc-sltiu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tc-sltiu.S -o img-tc-sltiu
	$T/checkbin.sh img-tc-sltiu || rm -f img-tc-sltiu

bins: img-tc-sltu
run: run-tc-sltu
.PHONY: run-tc-sltu
.PHONY: good-tc-sltu
.PHONY: do-run-tc-sltu
.PHONY: diff-tc-sltu
good: good-tc-sltu
run-tc-sltu:
	$(MAKE) do-run-tc-sltu
	$(MAKE) diff-tc-sltu
good-tc-sltu:
	$(MAKE) do-run-tc-sltu
	mv -f log-tc-sltu $T/good/good-tc-sltu
do-run-tc-sltu:
	$(SYS161) $(SYS161FLAGS) img-tc-sltu 2>&1 | $T/cleanlog.sh > log-tc-sltu
diff-tc-sltu:
	diff log-tc-sltu $T/good/good-tc-sltu
img-tc-sltu: $T/src/tc-sltu.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/tc-sltu.S -o img-tc-sltu
	$T/checkbin.sh img-tc-sltu || rm -f img-tc-sltu

bins: img-td-div-nn
run: run-td-div-nn
.PHONY: run-td-div-nn
.PHONY: good-td-div-nn
.PHONY: do-run-td-div-nn
.PHONY: diff-td-div-nn
good: good-td-div-nn
run-td-div-nn:
	$(MAKE) do-run-td-div-nn
	$(MAKE) diff-td-div-nn
good-td-div-nn:
	$(MAKE) do-run-td-div-nn
	mv -f log-td-div-nn $T/good/good-td-div-nn
do-run-td-div-nn:
	$(SYS161) $(SYS161FLAGS) img-td-div-nn 2>&1 | $T/cleanlog.sh > log-td-div-nn
diff-td-div-nn:
	diff log-td-div-nn $T/good/good-td-div-nn
img-td-div-nn: $T/src/td-div-nn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/td-div-nn.S -o img-td-div-nn
	$T/checkbin.sh img-td-div-nn || rm -f img-td-div-nn

bins: img-td-div-np
run: run-td-div-np
.PHONY: run-td-div-np
.PHONY: good-td-div-np
.PHONY: do-run-td-div-np
.PHONY: diff-td-div-np
good: good-td-div-np
run-td-div-np:
	$(MAKE) do-run-td-div-np
	$(MAKE) diff-td-div-np
good-td-div-np:
	$(MAKE) do-run-td-div-np
	mv -f log-td-div-np $T/good/good-td-div-np
do-run-td-div-np:
	$(SYS161) $(SYS161FLAGS) img-td-div-np 2>&1 | $T/cleanlog.sh > log-td-div-np
diff-td-div-np:
	diff log-td-div-np $T/good/good-td-div-np
img-td-div-np: $T/src/td-div-np.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/td-div-np.S -o img-td-div-np
	$T/checkbin.sh img-td-div-np || rm -f img-td-div-np

bins: img-td-div-pn
run: run-td-div-pn
.PHONY: run-td-div-pn
.PHONY: good-td-div-pn
.PHONY: do-run-td-div-pn
.PHONY: diff-td-div-pn
good: good-td-div-pn
run-td-div-pn:
	$(MAKE) do-run-td-div-pn
	$(MAKE) diff-td-div-pn
good-td-div-pn:
	$(MAKE) do-run-td-div-pn
	mv -f log-td-div-pn $T/good/good-td-div-pn
do-run-td-div-pn:
	$(SYS161) $(SYS161FLAGS) img-td-div-pn 2>&1 | $T/cleanlog.sh > log-td-div-pn
diff-td-div-pn:
	diff log-td-div-pn $T/good/good-td-div-pn
img-td-div-pn: $T/src/td-div-pn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/td-div-pn.S -o img-td-div-pn
	$T/checkbin.sh img-td-div-pn || rm -f img-td-div-pn

bins: img-td-div-pp
run: run-td-div-pp
.PHONY: run-td-div-pp
.PHONY: good-td-div-pp
.PHONY: do-run-td-div-pp
.PHONY: diff-td-div-pp
good: good-td-div-pp
run-td-div-pp:
	$(MAKE) do-run-td-div-pp
	$(MAKE) diff-td-div-pp
good-td-div-pp:
	$(MAKE) do-run-td-div-pp
	mv -f log-td-div-pp $T/good/good-td-div-pp
do-run-td-div-pp:
	$(SYS161) $(SYS161FLAGS) img-td-div-pp 2>&1 | $T/cleanlog.sh > log-td-div-pp
diff-td-div-pp:
	diff log-td-div-pp $T/good/good-td-div-pp
img-td-div-pp: $T/src/td-div-pp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/td-div-pp.S -o img-td-div-pp
	$T/checkbin.sh img-td-div-pp || rm -f img-td-div-pp

bins: img-td-divu-nn
run: run-td-divu-nn
.PHONY: run-td-divu-nn
.PHONY: good-td-divu-nn
.PHONY: do-run-td-divu-nn
.PHONY: diff-td-divu-nn
good: good-td-divu-nn
run-td-divu-nn:
	$(MAKE) do-run-td-divu-nn
	$(MAKE) diff-td-divu-nn
good-td-divu-nn:
	$(MAKE) do-run-td-divu-nn
	mv -f log-td-divu-nn $T/good/good-td-divu-nn
do-run-td-divu-nn:
	$(SYS161) $(SYS161FLAGS) img-td-divu-nn 2>&1 | $T/cleanlog.sh > log-td-divu-nn
diff-td-divu-nn:
	diff log-td-divu-nn $T/good/good-td-divu-nn
img-td-divu-nn: $T/src/td-divu-nn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/td-divu-nn.S -o img-td-divu-nn
	$T/checkbin.sh img-td-divu-nn || rm -f img-td-divu-nn

bins: img-td-divu-np
run: run-td-divu-np
.PHONY: run-td-divu-np
.PHONY: good-td-divu-np
.PHONY: do-run-td-divu-np
.PHONY: diff-td-divu-np
good: good-td-divu-np
run-td-divu-np:
	$(MAKE) do-run-td-divu-np
	$(MAKE) diff-td-divu-np
good-td-divu-np:
	$(MAKE) do-run-td-divu-np
	mv -f log-td-divu-np $T/good/good-td-divu-np
do-run-td-divu-np:
	$(SYS161) $(SYS161FLAGS) img-td-divu-np 2>&1 | $T/cleanlog.sh > log-td-divu-np
diff-td-divu-np:
	diff log-td-divu-np $T/good/good-td-divu-np
img-td-divu-np: $T/src/td-divu-np.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/td-divu-np.S -o img-td-divu-np
	$T/checkbin.sh img-td-divu-np || rm -f img-td-divu-np

bins: img-td-divu-pn
run: run-td-divu-pn
.PHONY: run-td-divu-pn
.PHONY: good-td-divu-pn
.PHONY: do-run-td-divu-pn
.PHONY: diff-td-divu-pn
good: good-td-divu-pn
run-td-divu-pn:
	$(MAKE) do-run-td-divu-pn
	$(MAKE) diff-td-divu-pn
good-td-divu-pn:
	$(MAKE) do-run-td-divu-pn
	mv -f log-td-divu-pn $T/good/good-td-divu-pn
do-run-td-divu-pn:
	$(SYS161) $(SYS161FLAGS) img-td-divu-pn 2>&1 | $T/cleanlog.sh > log-td-divu-pn
diff-td-divu-pn:
	diff log-td-divu-pn $T/good/good-td-divu-pn
img-td-divu-pn: $T/src/td-divu-pn.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/td-divu-pn.S -o img-td-divu-pn
	$T/checkbin.sh img-td-divu-pn || rm -f img-td-divu-pn

bins: img-td-divu-pp
run: run-td-divu-pp
.PHONY: run-td-divu-pp
.PHONY: good-td-divu-pp
.PHONY: do-run-td-divu-pp
.PHONY: diff-td-divu-pp
good: good-td-divu-pp
run-td-divu-pp:
	$(MAKE) do-run-td-divu-pp
	$(MAKE) diff-td-divu-pp
good-td-divu-pp:
	$(MAKE) do-run-td-divu-pp
	mv -f log-td-divu-pp $T/good/good-td-divu-pp
do-run-td-divu-pp:
	$(SYS161) $(SYS161FLAGS) img-td-divu-pp 2>&1 | $T/cleanlog.sh > log-td-divu-pp
diff-td-divu-pp:
	diff log-td-divu-pp $T/good/good-td-divu-pp
img-td-divu-pp: $T/src/td-divu-pp.S
	$(TARGETCC) $(TARGETFLAGS) $T/src/td-divu-pp.S -o img-td-divu-pp
	$T/checkbin.sh img-td-divu-pp || rm -f img-td-divu-pp

