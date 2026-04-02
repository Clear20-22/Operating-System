# $Id: yacc.mk,v 1.2 2007/11/23 02:40:04 sjg Exp $

# this file contains rules to DTRT when SRCS contains foo.y or foo.c
# when only a foo.y exists.

YACC?= yacc
YFLAGS?= -v -t
RM?= rm

.y.h .y.c:
	${YACC} ${YFLAGS} ${.IMPSRC}
.ifndef NO_RENAME_Y_TAB_H
	[ ! -s y.tab.h ] || cmp -s y.tab.h ${.TARGET:T:R}.h \
		|| mv y.tab.h ${.TARGET:T:R}.h
.endif
	[ ! -s y.tab.c ] || mv y.tab.c ${.TARGET:T:R}.c
	[ ! -s y.tab.d ] || mv y.tab.d ${.TARGET:T:R}.d
	[ ! -s y.output ] || mv y.output ${.TARGET:T:R}.output
.ifndef NO_RENAME_Y_TAB_H
	@${RM} -f y.tab.*
.else
	@${RM} -f y.tab.[cd]
.endif

.y.o:	${.TARGET:T:R}.c
	${CC} ${CFLAGS} ${CPPFLAGS} -c ${.TARGET:T:R}.c -o ${.TARGET}

beforedepend:	${SRCS:T:M*.y:S/.y/.c/g}

CLEANFILES+= ${SRCS:T:M*.y:S/.y/.[ch]/g}
CLEANFILES+= y.tab.[ch]
