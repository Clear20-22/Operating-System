# $Id: init.mk,v 1.5 2010/01/01 20:31:45 sjg Exp $
#
#	@(#) Copyright (c) 2002, Simon J. Gerraty
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

.if !target(__${.PARSEFILE}__)
__${.PARSEFILE}__:

.-include "${.CURDIR}/../Makefile.inc"
.include <own.mk>
.MAIN:		all

.if defined(SRCTOP) && defined(OBJTOP)
# dpadd.mk isn't useful without some assumptions
USE_DPADD_MK?=no
.else
USE_DPADD_MK=no
.endif

.if !empty(WARNINGS_SET) || !empty(WARNINGS_SET_${MACHINE_ARCH})
.include <warnings.mk>
.endif

COPTS += ${COPTS.${.IMPSRC:T}}
CPPFLAGS += ${CPPFLAGS.${.IMPSRC:T}}
CPUFLAGS += ${CPUFLAGS.${.IMPSRC:T}}
.endif
