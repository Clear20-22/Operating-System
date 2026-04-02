# $Id: progs.mk,v 1.5 2007/04/30 17:39:27 sjg Exp $
#
#	@(#) Copyright (c) 2006, Simon J. Gerraty
#
#	This file is provided in the hope that it will
#	be of use.  There is absolutely NO WARRANTY.
#	Permission to copy, redistribute or otherwise
#	use this file is hereby granted provided that 
#	the above copyright notice and this notice are
#	left intact. 
#      
#	Please send copies of changes and bug-fixes to:
#	sjg@crufty.net
#

.MAIN: all

.if defined(PROGS)

.ifndef PROG
.for t in ${PROGS}
.if make($t)
PROG?= $t
.endif
.endfor
.endif

.if defined(PROG)
# just one of many
.for v in DPADD DPLIBS SRCS CFLAGS ${PROG_VARS}
$v += ${${v}_${PROG}}
.endfor
# ensure that we don't clobber each other's dependencies
DEPENDFILE?= .depend.${PROG}
# prog.mk will do the rest
.else
all: ${PROGS} .MAKE
.endif
.endif

# handle being called [bsd.]progs.mk
.include <${.PARSEFILE:S,progs,prog,}>

.ifndef PROG
.for t in ${PROGS}
$t: ${SRCS} ${DPADD} ${DPLIBS} ${SRCS_$t} ${DPADD_$t} ${DPLIBS_$t}
	(cd ${.CURDIR} && ${.MAKE} -f ${MAKEFILE} PROG=$t)

clean: $t.clean
$t.clean:
	(cd ${.CURDIR} && ${.MAKE} -f ${MAKEFILE} PROG=$t ${@:E})
.endfor
.endif
