# $Id: obj.mk,v 1.13 2010/04/19 21:02:23 sjg Exp $
#
#	@(#) Copyright (c) 1999-2010, Simon J. Gerraty
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

.if !target(__${.PARSEFILE:S,bsd.,,}__)
__${.PARSEFILE:S,bsd.,,}__:

.include <init.mk>

ECHO_TRACE ?= echo

.if ${MKOBJ} == "no"
obj:
objlink:
objwarn:
.else

# this has to match how make behaves
.if defined(MAKEOBJDIRPREFIX) || defined(MAKEOBJDIR)
.if defined(MAKEOBJDIRPREFIX)
__objdir:= ${MAKEOBJDIRPREFIX}${.CURDIR}
.else
__objdir:= ${MAKEOBJDIR}
.endif
.else
__objdir= ${__objlink}
.endif

.if defined(OBJMACHINE)
__objlink=	obj.${MACHINE}
.else
__objlink=	obj
.endif

.if ${MKOBJDIRS} == "auto"
.-include "auto.obj.mk"
.endif

.NOPATH:	${__objdir}
.PHONY:		obj

obj: _SUBDIRUSE
	@if test ! -d ${__objdir}/.; then \
		mkdir -p ${__objdir}; \
		if test ! -d ${__objdir}; then \
			mkdir ${__objdir}; exit 1; \
		fi; \
		${ECHO_TRACE} "[Creating objdir ${__objdir}...]" >&2; \
	fi

.if !target(_SUBDIRUSE)
# this just allows us to be included by ourselves
_SUBDIRUSE:
.endif

# so we can interact with freebsd makefiles
.if !target(objwarn)
objwarn:
.if ${.OBJDIR} == ${.CURDIR}
	@echo "Warning Object directory is ${.CURDIR}"
.elif ${.OBJDIR} != ${__objdir}
	@echo "Warning Object directory is ${.OBJDIR} vs. ${__objdir}"
.endif
.endif

.if !target(objlink)
objlink:
.if ${__objdir} != ${__objlink}
	@if test -d ${__objdir}/.; then \
		${RM} -f ${.CURDIR}/${__objlink}; \
		${LN} -s ${__objdir} ${.CURDIR}/${__objlink}; \
		echo "${__objlink} -> ${__objdir}"; \
	else \
		echo "No ${__objdir} to link to - do a 'make obj'"; \
	fi
.endif
.endif
.endif

.if !target(print-objdir)
print-objdir:
	@echo ${.OBJDIR}
.endif

.if !target(whereobj)
whereobj:
	@echo ${.OBJDIR}
.endif

.if !target(destroy)
.if ${.CURDIR} != ${.OBJDIR}
_CURDIR?= ${.CURDIR}
_OBJDIR?= ${.OBJDIR}
destroy:
	(cd ${_CURDIR} && rm -rf ${_OBJDIR})
.else
destroy:  clean
.endif
.endif

.endif
