# RCSid:
#	$Id: host-target.mk,v 1.4 2009/12/12 08:04:03 sjg Exp $

# Host platform information; may be overridden
.if !defined(_HOST_OSNAME)
_HOST_OSNAME !=	uname -s
_HOST_OSREL  !=	uname -r
_HOST_ARCH   !=	uname -p 2>/dev/null || uname -m
.export _HOST_OSNAME _HOST_OSREL _HOST_ARCH
.endif

HOST_OSMAJOR := ${_HOST_OSREL:C/[^0-9].*//}
HOST_OSTYPE  :=	${_HOST_OSNAME}-${_HOST_OSREL:C/\([^\)]*\)//}-${_HOST_ARCH}
HOST_OS      :=	${_HOST_OSNAME}
host_os      :=	${_HOST_OSNAME:tl}
HOST_TARGET  := ${host_os}${HOST_OSMAJOR}-${_HOST_ARCH}

# tr is insanely non-portable, accommodate the lowest common denominator
TR ?= tr
toLower = ${TR} 'ABCDEFGHIJKLMNOPQRSTUVWXYZ' 'abcdefghijklmnopqrstuvwxyz'
toUpper = ${TR} 'abcdefghijklmnopqrstuvwxyz' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
