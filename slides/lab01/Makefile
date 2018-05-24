include ../Makefile

XARINGAN		=	lab01_slides.html

all : $(ALL_FILES)
	$(call make_all)

clean :
	$(call cleanup)

$(XARINGAN) : $(XARINGAN_EXT)
	$(call rmarkdown_render,$(XARINGAN_OUTPUT))
