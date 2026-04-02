#	$Id: subdir.mk,v 1.10 2010/04/19 02:19:14 sjg Exp $
#	skip missing directories...

#	$NetBSD: bsd.subdir.mk,v 1.11 1996/04/04 02:05:06 jtc Exp $
#	@(#)bsd.subdir.mk	5.9 (Berkeley) 2/1/91

.if !commands(_SUBDIRUSE)
.if exists(${.CURDIR}/Makefile.inc)
.include "Makefile.inc"
.endif
.if !target(.MAIN)
.MAIN: all
.endif

ECHO_DIR ?= echo
.ifdef SUBDIR_MUST_EXIST
MISSING_DIR=echo "Missing ===> ${.CURDIR}/$${entry}"; exit 1
.else
MISSING_DIR=echo "Skipping ===> ${.CURDIR}/$${entry}"; continue
.endif

_SUBDIRUSE: .USE
.if defined(SUBDIR)
	@Exists() { test -f $$1; }; \
	for entry in ${SUBDIR}; do \
		(set -e; \
		if Exists ${.CURDIR}/$${entry}.${MACHINE}/[mM]akefile; then \
			_newdir_="$${entry}.${MACHINE}"; \
		elif  Exists ${.CURDIR}/$${entry}/[mM]akefile; then \
			_newdir_="$${entry}"; \
		else \
			${MISSING_DIR}; \
		fi; \
		if test X"${_THISDIR_}" = X""; then \
			_nextdir_="$${_newdir_}"; \
		else \
			_nextdir_="$${_THISDIR_}/$${_newdir_}"; \
		fi; \
		${ECHO_DIR} "===> $${_nextdir_}"; \
		cd ${.CURDIR}/$${_newdir_}; \
		${.MAKE} _THISDIR_="$${_nextdir_}" \
		    ${.TARGET:S/realinstall/install/:S/.depend/depend/}) || exit 1; \
	done

${SUBDIR}::
	@set -e; if test -d ${.CURDIR}/${.TARGET}.${MACHINE}; then \
		_newdir_=${.TARGET}.${MACHINE}; \
	else \
		_newdir_=${.TARGET}; \
	fi; \
	${ECHO_DIR} "===> $${_newdir_}"; \
	cd ${.CURDIR}/$${_newdir_}; \
	${.MAKE} _THISDIR_="$${_newdir_}" all
.endif

.if !target(install)
.if !target(beforeinstall)
beforeinstall:
.endif
.if !target(afterinstall)
afterinstall:
.endif
install: maninstall
maninstall: afterinstall
afterinstall: realinstall
realinstall: beforeinstall _SUBDIRUSE
.endif

.if !target(all)
all: _SUBDIRUSE
.endif

.if !target(clean)
clean: _SUBDIRUSE
.endif

.if !target(cleandir)
cleandir: _SUBDIRUSE
.endif

.if !target(includes)
includes: _SUBDIRUSE
.endif

.if !target(depend)
depend: _SUBDIRUSE
.endif

.if !target(lint)
lint: _SUBDIRUSE
.endif

.if !target(obj)
obj: _SUBDIRUSE
.endif

.if !target(tags)
tags: _SUBDIRUSE
.endif

.if !target(etags)
.if defined(SRCS)
etags: ${SRCS} _SUBDIRUSE
	-cd ${.CURDIR}; etags `echo ${.ALLSRC:N*.h} | sed 's;${.CURDIR}/;;'`
.elif defined(SUBDIR)
etags:
	-rm -f TAGS
	-cd ${.CURDIR}; find ${SUBDIR} \( -name '*.[chy]' -o -name '*.pc' -o -name '*.cc' \) -print | grep -v /obj | xargs etags -a
.else
etags: _SUBDIRUSE
.endif
.endif

.include <own.mk>
.if make(destroy*)
.include <obj.mk>
.endif
.endif
