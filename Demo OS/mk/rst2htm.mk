# $Id: rst2htm.mk,v 1.5 2009/12/25 07:34:34 sjg Exp $
#
#	@(#) Copyright (c) 2009, Simon J. Gerraty
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

# convert reStructuredText to HTML, using rst2html.py from
# docutils - http://docutils.sourceforge.net/

.if empty(TXTSRCS)
TXTSRCS != 'ls' -1t ${.CURDIR}/*.txt ${.CURDIR}/*.rst 2>/dev/null; echo
.endif
RSTSRCS ?= ${TXTSRCS}
HTMFILES ?= ${RSTSRCS:R:T:O:u:%=%.htm}

CLEANFILES += ${HTMFILES}

html:	${HTMFILES}

.SUFFIXES: .rst .txt .htm

RST2HTML ?= rst2html.py

.txt.htm .rst.htm:
	${RST2HTML} ${.IMPSRC} ${.TARGET}

.for s in ${RSTSRCS:O:u}
${s:R:T}.htm: $s
.endfor
