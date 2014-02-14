SUBDIRS=day1 day2 day3 day4 day5

.PHONY: all clean

all:
	for subdir in $(SUBDIRS) ; do \
		$(MAKE) -C $$subdir ; \
		done

clean:
	for subdir in $(SUBDIRS) ; do \
		$(MAKE) -C $$subdir clean ; \
		done
