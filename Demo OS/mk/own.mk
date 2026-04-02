# $Id: own.mk,v 1.21 2010/01/04 17:27:11 sjg Exp $

.if !target(__${.PARSEFILE}__)
__${.PARSEFILE}__:

.ifndef NOMAKECONF
MAKECONF?=	/etc/mk.conf
.-include "${MAKECONF}"
.endif

RM?= rm
LN?= ln
INSTALL?= install

prefix?=	/usr
.if exists(${prefix}/lib)
libprefix?=	${prefix}
.else
libprefix?=	/usr
.endif

# FreeBSD at least does not set this
MACHINE_ARCH?=${MACHINE}
# we need to make sure these are defined too in case sys.mk fails to.
COMPILE.s?=	${CC} ${AFLAGS} -c
LINK.s?=	${CC} ${AFLAGS} ${LDFLAGS}
COMPILE.S?=	${CC} ${AFLAGS} ${CPPFLAGS} -c -traditional-cpp
LINK.S?=	${CC} ${AFLAGS} ${CPPFLAGS} ${LDFLAGS}
COMPILE.c?=	${CC} ${CFLAGS} ${CPPFLAGS} -c
LINK.c?=	${CC} ${CFLAGS} ${CPPFLAGS} ${LDFLAGS}
CXXFLAGS?=	${CFLAGS}
COMPILE.cc?=	${CXX} ${CXXFLAGS} ${CPPFLAGS} -c
LINK.cc?=	${CXX} ${CXXFLAGS} ${CPPFLAGS} ${LDFLAGS}
COMPILE.m?=	${OBJC} ${OBJCFLAGS} ${CPPFLAGS} -c
LINK.m?=	${OBJC} ${OBJCFLAGS} ${CPPFLAGS} ${LDFLAGS}
COMPILE.f?=	${FC} ${FFLAGS} -c
LINK.f?=	${FC} ${FFLAGS} ${LDFLAGS}
COMPILE.F?=	${FC} ${FFLAGS} ${CPPFLAGS} -c
LINK.F?=	${FC} ${FFLAGS} ${CPPFLAGS} ${LDFLAGS}
COMPILE.r?=	${FC} ${FFLAGS} ${RFLAGS} -c
LINK.r?=	${FC} ${FFLAGS} ${RFLAGS} ${LDFLAGS}
LEX.l?=		${LEX} ${LFLAGS}
COMPILE.p?=	${PC} ${PFLAGS} ${CPPFLAGS} -c
LINK.p?=	${PC} ${PFLAGS} ${CPPFLAGS} ${LDFLAGS}
YACC.y?=	${YACC} ${YFLAGS}

# for suffix rules
IMPFLAGS?=	${COPTS.${.IMPSRC:T}} ${CPUFLAGS.${.IMPSRC:T}} ${CPPFLAGS.${.IMPSRC:T}}
.for s in .c .cc 
COMPILE.$s += ${IMPFLAGS}
LINK.$s +=  ${IMPFLAGS}
.endfor

# override this in sys.mk
ROOT_GROUP?=	wheel
BINGRP?=	${ROOT_GROUP}
BINOWN?=	root
BINMODE?=	555
NONBINMODE?=	444

# Define MANZ to have the man pages compressed (gzip)
#MANZ=		1

MANTARGET?= cat
MANDIR?=	${prefix}/share/man/${MANTARGET}
MANGRP?=	${BINGRP}
MANOWN?=	${BINOWN}
MANMODE?=	${NONBINMODE}

LIBDIR?=	${libprefix}/lib
SHLIBDIR?=	${libprefix}/lib
.if ${USE_SHLIBDIR:Uno} == "yes"
_LIBSODIR?=	${SHLIBDIR}
.else
_LIBSODIR?=	${LIBDIR}
.endif
# this is where ld.*so lives
SHLINKDIR?=	/usr/libexec
LINTLIBDIR?=	${libprefix}/libdata/lint
LIBGRP?=	${BINGRP}
LIBOWN?=	${BINOWN}
LIBMODE?=	${NONBINMODE}

DOCDIR?=        ${prefix}/share/doc
DOCGRP?=	${BINGRP}
DOCOWN?=	${BINOWN}
DOCMODE?=       ${NONBINMODE}

NLSDIR?=	${prefix}/share/nls
NLSGRP?=	${BINGRP}
NLSOWN?=	${BINOWN}
NLSMODE?=	${NONBINMODE}

KMODDIR?=	${prefix}/lkm
KMODGRP?=	${BINGRP}
KMODOWN?=	${BINOWN}
KMODMODE?=	${NONBINMODE}

COPY?=		-c
STRIP_FLAG?=	-s

.include <host-target.mk>

TARGET_OSNAME?= ${_HOST_OSNAME}
TARGET_OSREL?= ${_HOST_OSREL}
TARGET_OSTYPE?= ${HOST_OSTYPE}
TARGET_HOST?= ${HOST_TARGET}

.-include "${TARGET_HOST}.mk"
.-include "config.mk"

.if ${TARGET_OSNAME} == "NetBSD"
.if exists(/usr/libexec/ld.elf_so)
OBJECT_FMT=ELF
.endif
OBJECT_FMT?=a.out
.endif
# sys.mk should set something appropriate if need be.
OBJECT_FMT?=ELF

.if (${_HOST_OSNAME} == "FreeBSD")
CFLAGS+= ${CPPFLAGS}
.endif

PRINT.VAR.MAKE = MAKESYSPATH=${MAKESYSPATH:U${.PARSEDIR}} ${.MAKE}
.if empty(.MAKEFLAGS:M-V*)
.if defined(MAKEOBJDIRPREFIX) || defined(MAKEOBJDIR)
PRINTOBJDIR=	${PRINT.VAR.MAKE} -r -V .OBJDIR -f /dev/null xxx
.else
PRINTOBJDIR=	${PRINT.VAR.MAKE} -V .OBJDIR
.endif
.else
PRINTOBJDIR=	echo # prevent infinite recursion
.endif

.if !defined(SRCTOP)			# {
# if using mk(1) SB will be set.
.ifdef SB
.if ${.CURDIR:S,${SB},,} != ${.CURDIR}
# we are actually within SB
.ifdef SB_SRC
SRCTOP:=${SB_SRC}
.elif exists(${SB}/src)
SRCTOP:=${SB}/src
.else
SRCTOP:=${SB}
.endif
.endif
.endif

.if !defined(SRCTOP)
_SRCTOP_TEST_?= [ -f ../.sandbox-env -o -d share/mk ]
# Linux at least has a bug where attempting to check an automounter
# directory will hang.  So avoid looking above /a/b
SRCTOP!= cd ${.CURDIR}; while :; do \
		here=`pwd`; \
		${_SRCTOP_TEST_} && { echo $$here; break; }; \
		case $$here in /*/*/*) cd ..;; *) echo ""; break;; esac; \
		done 

.MAKEOVERRIDES+=	SRCTOP

.endif
.endif

.if !defined(OBJTOP) && !empty(SRCTOP)
.if defined(MAKEOBJDIRPREFIX) && exists(${MAKEOBJDIRPREFIX}${SRCTOP})
OBJTOP?=${MAKEOBJDIRPREFIX}${SRCTOP}
.elif (exists(${SRCTOP}/Makefile) || exists(${SRCTOP}/makefile))
OBJTOP!=		cd ${SRCTOP} && ${PRINTOBJDIR}
.endif
.MAKEOVERRIDES+=	OBJTOP
.endif
OBJTOP?= ${SRCTOP}

# Define SYS_INCLUDE to indicate whether you want symbolic links to the system
# source (``symlinks''), or a separate copy (``copies''); (latter useful
# in environments where it's not possible to keep /sys publicly readable)
#SYS_INCLUDE= 	symlinks

# don't try to generate PIC versions of libraries on machines
# which don't support PIC.
.if  (${MACHINE_ARCH} == "vax") || \
    ((${MACHINE_ARCH} == "mips") && defined(STATIC_TOOLCHAIN)) || \
    ((${MACHINE_ARCH} == "alpha") && defined(ECOFF_TOOLCHAIN))
MKPIC=no
.endif

# No lint, for now.
NOLINT=

# This is the new MK control magic in NetBSD...

# Define MKxxx variables (which are either yes or no) for users
# to set in /etc/mk.conf and override on the make commandline.
# These should be tested with `== "no"' or `!= "no"'.
# The NOxxx variables should only be used by Makefiles.
#

# Supported NO* options (if defined, MK* will be forced to "no",
# regardless of user's mk.conf setting).
.for var in ARCHIVE CRYPTO DOC LINKLIB LINT MAN NLS OBJ \
	PIC PICINSTALL PROFILE SHARE
.if defined(NO${var})
MK${var}:=	no
.endif
.endfor

.if defined(NOMAN)
NOHTML=
.endif

# MK* options which default to "yes".
.for var in ARCHIVE BFD CATPAGES CRYPTO DOC GCC GDB HESIOD IEEEFP INFO \
	KERBEROS \
	LINKLIB LINT MAN NLS OBJ PIC PICINSTALL PROFILE SHARE SKEY YP
MK${var}?=	yes
.endfor

# MK* options which default to "no".
.for var in CRYPTO_IDEA CRYPTO_RC5 OBJDIRS SOFTFLOAT
MK${var}?=	no
.endfor

# Force some options off if their dependencies are off.
.if ${MKCRYPTO} == "no"
MKKERBEROS:=	no
.endif

.if ${MKLINKLIB} == "no"
MKPICINSTALL:=	no
MKPROFILE:=	no
.endif

.if ${MKMAN} == "no"
MKCATPAGES:=	no
.endif

.if ${MKOBJ} == "no"
MKOBJDIRS:=	no
.endif

.if ${MKSHARE} == "no"
MKCATPAGES:=	no
MKDOC:=		no
MKINFO:=	no
MKMAN:=		no
MKNLS:=		no
.endif

# x86-64 cannot currently use the in-tree toolchain, but does
# use the "new toolchain" build framework.
.if ${MACHINE_ARCH} == "x86_64"
MKBFD:=	no
MKGDB:=	no
MKGCC:=	no
.endif

# Set defaults for the USE_xxx variables.  They all default to "yes"
# unless the corresponding MKxxx variable is set to "no".
.for var in HESIOD KERBEROS SKEY YP
.if (${MK${var}} == "no")
USE_${var}:= no
.else
USE_${var}?= yes
.endif
.endfor

# Use XFree86 4.x as default version on i386 and x86_64.
.if ${MACHINE_ARCH} == "i386" || ${MACHINE_ARCH} == "x86_64"
USE_XF86_4?=	yes
.endif

.endif
