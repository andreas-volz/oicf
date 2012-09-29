BUILT_SOURCES = OICFNavigationListenerPrivate.h OICFNavigationListenerProviderPrivate.h \
		OICFNavigationPrivate.h OICFNavigationProviderPrivate.h

OBJECT_H = CoordWGS84.h
API_H = OICFNavigation.h OICFNavigationListener.h
API_PROVIDER_H = OICFNavigationProvider.h OICFNavigationListenerProvider.h

DBUS_XML_H = OICFNavigation.xml OICFNavigationListener.xml

oicf_HEADERS = $(API_H) $(API_PROVIDER_H) $(OBJECT_H)

# We don't want to install this header
noinst_HEADERS = $(BUILT_SOURCES)

oicfdir = \
	$(pkgincludedir)/OICFNavigation

# Correctly clean the generated headers, but keep the xml description
CLEANFILES = $(BUILT_SOURCES)
EXTRA_DIST = $(oicf_HEADERS) $(DBUS_XML)

lib_LTLIBRARIES = \
	libOICFNavigation.la \
	libOICFNavigationProvider.la

libOICFNavigation_la_SOURCES = \
	$(API_H) \
	CoordWGS84.cpp 

libOICFNavigationProvider_la_SOURCES = \
	$(API_PROVIDER_H) \
	CoordWGS84.cpp 

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
