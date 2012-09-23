BUILT_SOURCES = OICFMediaListenerPrivate.h OICFMediaListenerProviderPrivate.h \
								OICFMediaPrivate.h OICFMediaProviderPrivate.h

# We don't want to install this header
noinst_HEADERS = $(BUILT_SOURCES)

# Correctly clean the generated headers, but keep the xml description
CLEANFILES = $(BUILT_SOURCES)
EXTRA_DIST = OICFMedia.xml OICFMediaListener.xml

lib_LTLIBRARIES = \
	libOICFMedia.la \
	libOICFMediaProvider.la

libOICFMedia_la_SOURCES = \
	OICFMedia.h \
	OICFMediaListener.h \
	Line.cpp \
	Line.h \
	LineVector.cpp \
	LineVector.h \
	DeviceEnum.cpp \
	DeviceEnum.h

libOICFMediaProvider_la_SOURCES = \
	OICFMediaProvider.h \
	OICFMediaListenerProvider.h \
	Line.cpp \
	Line.h \
	LineVector.cpp \
	LineVector.h \
	DeviceEnum.cpp \
	DeviceEnum.h

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
