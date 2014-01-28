.PHONY: all clean

SUBDIRS=notes

all:
	$(foreach subdir,$(SUBDIRS),$(MAKE) -C $(subdir))

clean:
	$(foreach subdir,$(SUBDIRS),$(MAKE) -C $(subdir) clean)
