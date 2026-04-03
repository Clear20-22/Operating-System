all depend install tidy clean:
	(cd build-sys161 && $(MAKE) $@)
	(cd build-trace161 && $(MAKE) $@)
	(cd build-stat161 && $(MAKE) $@)
	(cd build-hub161 && $(MAKE) $@)
	(cd build-doc && $(MAKE) $@)

distclean:
	rm -rf build-sys161 build-trace161 build-stat161 build-hub161 build-doc
	rm -rf test-cpu
	rm -f Makefile defs.mk

test:
	(cd test-cpu && $(MAKE))
