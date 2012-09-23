BUILT_SOURCES = OICFNavigationListenerPrivate.h OICFNavigationListenerProviderPrivate.h \
								OICFNavigationPrivate.h OICFNavigationProviderPrivate.h

# We don't want to install this header
noinst_HEADERS = $(BUILT_SOURCES)

# Correctly clean the generated headers, but keep the xml description
CLEANFILES = $(BUILT_SOURCES)
EXTRA_DIST = OICFNavigation.xml OICFNavigationListener.xml

lib_LTLIBRARIES = \
	libOICFNavigation.la \
	libOICFNavigationProvider.la

libOICFNavigation_la_SOURCES = \
	OICFNavigation.h \
	OICFNavigationListener.h \
	CoordWGS84.cpp \
	CoordWGS84.h

libOICFNavigationProvider_la_SOURCES = \
	OICFNavigationProvider.h \
	OICFNavigationListenerProvider.h \
	CoordWGS84.cpp \
	CoordWGS84.h

libOICFNavigation_la_LIBADD = \
	@DEBUG_LIBS@ \
	@DBUSCXX_LIBS@

libOICFNavigationProvider_la_LIBADD = \
	@DEBUG_LIBS@ \
	@DBUSCXX_LIBS@

libOICFNavigation_la_CXXFLAGS = \
	@DEBUG_CFLAGS@ \
	@DBUSCXX_CFLAGS@

libOICFNavigationProvider_la_CXXFLAGS = \
	@DEBUG_CFLAGS@ \
	@DBUSCXX_CFLAGS@

#Rule to generate the binding headers

OICFNavigationProviderPrivate.h:  OICFNavigation.xml
	dbusxx-xml2cpp $< --adaptor=$@

OICFNavigationPrivate.h:  OICFNavigation.xml
	dbusxx-xml2cpp $< --proxy=$@

OICFNavigationListenerProviderPrivate.h:  OICFNavigationListener.xml
	dbusxx-xml2cpp $< --adaptor=$@

OICFNavigationListenerPrivate.h:  OICFNavigationListener.xml
	dbusxx-xml2cpp $< --proxy=$@

## File created by the gnome-build tools
