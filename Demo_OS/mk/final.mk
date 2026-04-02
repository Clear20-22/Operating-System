# $Id: final.mk,v 1.4 2009/12/15 22:16:20 sjg Exp $

.if !target(__${.PARSEFILE}__)
__${.PARSEFILE}__:

# provide a hook for folk who want to do scary stuff
.-include "${.CURDIR}/../Makefile-final.inc"

.if !empty(STAGE)
.-include <stage.mk>
.endif

.endif
