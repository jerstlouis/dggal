.PHONY: all clean realclean distclean eC_c ecere_c dggal_c

DGGAL_ABSPATH := $(dir $(realpath $(firstword $(MAKEFILE_LIST))))../../

ifndef ECERE_SDK_SRC
ECERE_SDK_SRC := $(DGGAL_ABSPATH)../ecere-sdk
endif

_CF_DIR = $(ECERE_SDK_SRC)/
include $(_CF_DIR)crossplatform.mk

# TARGETS

all: eC_c ecere_c dggal_c

eC_c:
	+$(_MAKE) -f eC_c.Makefile

ecere_c:
	+$(_MAKE) -f ecere_c.Makefile

dggal_c:
	+$(_MAKE) -f dggal_c.Makefile

clean:
	+$(_MAKE) -f eC_c.Makefile clean
	+$(_MAKE) -f ecere_c.Makefile clean
	+$(_MAKE) -f dggal_c.Makefile clean
	
realclean:
	+$(_MAKE) -f eC_c.Makefile realclean
	+$(_MAKE) -f ecere_c.Makefile realclean
	+$(_MAKE) -f dggal_c.Makefile realclean

distclean:
	+$(_MAKE) -f eC_c.Makefile distclean
	+$(_MAKE) -f ecere_c.Makefile distclean
	+$(_MAKE) -f dggal_c.Makefile distclean
