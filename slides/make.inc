SHELL					=	/bin/sh

RM						=	rm
ECHO					=	echo
COPY					=	cp

R						=	/usr/bin/R
RSCRIPT					=	/usr/bin/Rscript
ROPTS					=	--slave

XARINGAN				=
XARINGAN_OUTPUT			=	xaringan::moon_reader
XARINGAN_EXT			=	 %.html : %.Rmd

ALL_FILES				=	$(XARINGAN)

CLEAN_FILES				=	*_files/											\
							*_cache/

define make_all
	   $(ECHO) All builds in $(CURDIR) complete!
endef

define cleanup
	   $(ECHO) cleaning up in $(CURDIR)
	   -$(RM) -rf $(CLEAN_FILES)
	   -$(RM) -f $(ALL_FILES)
endef

define rmarkdown_render
		$(R) $(ROPTS) -e "rmarkdown::render(input='$<', output_file='$@',		\
		output_format='$(1)')"
endef
