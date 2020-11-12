SUBDIRS = dir1

.PHONY: subdirs $(SUBDIRS)

target:
	for dir in $(SUBDIRS); do \
		$(MAKE) -c $$dir; \
	done

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -c $$dir clean; \
	done
	
