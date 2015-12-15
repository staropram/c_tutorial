# in this makefile, the special variable $(MAKE) is used
# to call make recursively

default:
	$(MAKE) -f Makefile_basic
	$(MAKE) -f Makefile_custom
	$(MAKE) -f Makefile_multi
	$(MAKE) -f Makefile_nested

clean:
	$(MAKE) -f Makefile_basic clean
	$(MAKE) -f Makefile_custom clean
	$(MAKE) -f Makefile_multi clean
	$(MAKE) -f Makefile_nested clean
