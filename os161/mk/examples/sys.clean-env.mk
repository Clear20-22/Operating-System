# $Id: sys.clean-env.mk,v 1.11 2010/06/09 16:00:53 sjg Exp $
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

.if ${MAKE_VERSION} >= 20100606 && ${.MAKE.LEVEL} == 0
# we save any env var that starts with these
MAKE_SAVE_ENV_PREFIX += \
	CCACHE \
	CVS \
	DEBUG \
	DISTCC \
	HOST \
	MACHINE \
	MAKE \
	MK \
	NEED_ \
	SB \
	SSH \
	SVN \
	USE_ \

# this is the list that we will save
MAKE_SAVE_ENV_VARS += \
	HOME \
	LOGNAME \
	OBJROOT \
	OBJTOP \
	PATH \
	SRCTOP \
	USER \
	${_env_vars}

_env_vars != env | egrep '^(${MAKE_SAVE_ENV_PREFIX:ts|})' | sed 's,=.*,,'; echo

_export_list =
.for v in ${MAKE_SAVE_ENV_VARS:O:u}
.if !empty($v)
_export_list += $v
$v := ${$v}
.endif
.endfor
# now clobber the environment
.unexport-env

# list of vars that we handle specially below
_tricky_env_vars = MAKEOBJDIR
# export our selection - sans tricky ones
.export ${_export_list:${_tricky_env_vars:${M_ListToSkip}}}

# this next bit may need tweaking
.if defined(MAKEOBJDIR)
srctop := ${SRCTOP:U${SB_SRC:U${SB}/src}}
objroot := ${OBJROOT:U${SB_OBJROOT:U${SB}/${SB_OBJPREFIX}}}
# we'll take care of MACHINE below
objtop := ${OBJTOP:U${objroot}${MACHINE}}
.if !empty(objtop)
# we would normally want something like (/bin/sh):
# MAKEOBJDIR="\${.CURDIR:S,${SRCTOP},${OBJROOT}\${MACHINE},}"
# the $$ below is how we achieve the same result here.
# since everything saved from the environment above
# has run through := we need to compensate for ${MACHINE}
MAKEOBJDIR = $${.CURDIR:S,${srctop},${objtop:S,${MACHINE},\${MACHINE},},}

# export these as-is, and do not track...
.export-env ${_tricky_env_vars}
# now evaluate for ourselves
.for v in ${_tricky_env_vars}
$v := ${$v}
.endfor

.endif
.endif
.endif
