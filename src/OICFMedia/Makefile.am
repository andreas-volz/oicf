BUILT_SOURCES = OICFMediaListenerPrivate.h OICFMediaListenerProviderPrivate.h \
		OICFMediaPrivate.h OICFMediaProviderPrivate.h

OBJECT_H = Line.h LineVector.h DeviceEnum.h
API_H = OICFMedia.h OICFMediaListener.h
API_PROVIDER_H = OICFMediaProvider.h OICFMediaListenerProvider.h

DBUS_XML_H = OICFMedia.xml OICFMediaListener.xml

oicf_HEADERS = $(API_H) $(API_PROVIDER_H) $(OBJECT_H) $(BUILT_SOURCES)

# We don't want to install this header
#noinst_HEADERS = $(BUILT_SOURCES)

oicfdir = \
	$(pkgincludedir)/OICFMedia

# Correctly clean the generated headers, but keep the xml description
CLEANFILES = $(BUILT_SOURCES)
EXTRA_DIST = $(oicf_HEADERS)

lib_LTLIBRARIES = \
	libOICFMedia.la \
	libOICFMediaProvider.la

libOICFMedia_la_SOURCES = \
	$(API_H) \
	Line.cpp \
	LineVector.cpp \
	DeviceEnum.cpp 

libOICFMediaProvider_la_SOURCES = \
	$(API_PROVIDER_H) \
	Line.cpp \
	LineVector.cpp \
	DeviceEnum.cpp 

libOICFMedia_la_LIBADD = \
	@DEBUG_LIBS@ \
	@DBUSCXX_LIBS@

libOICFMediaProvider_la_LIBADD = \
	@DEBUG_LIBS@ \
	@DBUSCXX_LIBS@

libOICFMedia_la_CXXFLAGS = \
	@DEBUG_CFLAGS@ \
	@DBUSCXX_CFLAGS@

libOICFMediaProvider_la_CXXFLAGS = \
	@DEBUG_CFLAGS@ \
	@DBUSCXX_CFLAGS@

AM_CPPFLAGS = 

#Rule to generate the binding headers

OICFMediaProviderPrivate.h:  OICFMedia.xml
	dbusxx-xml2cpp $< --adaptor=$@

OICFMediaPrivate.h:  OICFMedia.xml
	dbusxx-xml2cpp $< --proxy=$@

OICFMediaListenerProviderPrivate.h:  OICFMediaListener.xml
	dbusxx-xml2cpp $< --adaptor=$@

OICFMediaListenerPrivate.h:  OICFMediaListener.xml
	dbusxx-xml2cpp $< --proxy=$@

## File created by the gnome-build tools
