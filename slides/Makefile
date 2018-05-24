include make.inc

DIRS	=	lab01

.SILENT :
.PHONY : clean all $(DIRS)

all : $(DIRS)

clean :
	$(ECHO) Currently in $(CURDIR)
	$(foreach dir,$(DIRS),cd $(dir) && $(MAKE) clean && cd ../;)

$(DIRS) :
	$(ECHO) Currently in $(CURDIR)
	$(MAKE) -C $@
