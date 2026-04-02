#
# Makefile fragment for installing the docs
#

HTML=devices.html gdb.html index.html install.html lamebus.html \
     mips.html networking.html system.html


include defs.mk

all tidy distclean clean rules depend: ;

install:
	(umask 022; [ -d "$(EXAMPLEDIR)" ] || mkdir -p $(EXAMPLEDIR))
	(umask 022; [ -d "$(DOCDIR)" ] || mkdir -p $(DOCDIR))
	@for h in $(HTML); do \
		echo cp $S/doc/$$h $(DOCDIR)/$$h; \
		cp $S/doc/$$h $(DOCDIR)/$$h; \
		chmod 644 $(DOCDIR)/$$h; \
	  done
	cp $S/COPYING $(DOCDIR)/copying.txt
	chmod 644 $(DOCDIR)/copying.txt
	cp $S/sys161.conf.sample $(EXAMPLEDIR)/sys161.conf.sample
	chmod 644 $(EXAMPLEDIR)/sys161.conf.sample
