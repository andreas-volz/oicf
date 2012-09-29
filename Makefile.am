## Process this file with automake to produce Makefile.in
## Created by Anjuta

SUBDIRS = src 

oicfdocdir = ${prefix}/doc/oicf
oicfdoc_DATA = \
	README\
	COPYING\
	AUTHORS\
	ChangeLog\
	INSTALL\
	NEWS

ACLOCAL_AMFLAGS = -I m4

EXTRA_DIST = $(oicfdoc_DATA)

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = OICFMedia.pc OICFMediaProvider.pc OICFControl.pc OICFControlProvider.pc OICFNavigation.pc OICFNavigationProvider.pc OICFPhone.pc OICFPhoneProvider.pc OICFMail.pc OICFMailProvider.pc

# Copy all the spec files. Of cource, only one is actually used.
dist-hook:
	for specfile in *.spec; do \
		if test -f $$specfile; then \
			cp -p $$specfile $(distdir); \
		fi \
	done

