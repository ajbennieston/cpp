SUBPROJECTS := notes

.PHONY: all clean

all:
	for subproject in $(SUBPROJECTS) ; do \
		$(MAKE) -C $$subproject ; \
	done

clean:
	for subproject in $(SUBPROJECTS) ; do \
		$(MAKE) -C $$subproject clean ; \
	done
