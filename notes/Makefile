SUBDIRS=day1 day2 day3 day4 day5

.PHONY: all clean 

all: notes-day1 notes-day2 notes-day3 notes-day4 notes-day5

clean:
	for subdir in $(SUBDIRS) ; do \
		$(MAKE) -C $$subdir clean ; \
		done

notes-day%:
	$(MAKE) -C $(patsubst notes-%,%,$@)
