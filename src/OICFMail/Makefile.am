BUILT_SOURCES = OICFMailListenerPrivate.h OICFMailListenerProviderPrivate.h \
		OICFMailPrivate.h OICFMailProviderPrivate.h

OBJECT_H = MailEntry.h MailEntryVector.h
API_H = OICFMail.h OICFMailListener.h
API_PROVIDER_H = OICFMailProvider.h OICFMailListenerProvider.h

DBUS_XML_H = OICFMail.xml OICFMailListener.xml

oicf_HEADERS = $(API_H) $(API_PROVIDER_H) $(OBJECT_H) $(BUILT_SOURCES)

# We don't want to install this header
#noinst_HEADERS = $(BUILT_SOURCES)

oicfdir = \
	$(pkgincludedir)/OICFMail

# Correctly clean the generated headers, but keep the xml description
CLEANFILES = $(BUILT_SOURCES)
EXTRA_DIST = $(oicf_HEADERS)

lib_LTLIBRARIES = \
	libOICFMail.la \
	libOICFMailProvider.la 

libOICFMail_la_SOURCES = \
	$(API_H) \
	MailEntry.cpp \
	MailEntryVector.cpp 

libOICFMailProvider_la_SOURCES = \
	$(API_PROVIDER_H) \
	MailEntry.cpp \
	MailEntryVector.cpp 

libOICFMail_la_LIBADD = \
	@DEBUG_LIBS@ \
	@DBUSCXX_LIBS@

libOICFMailProvider_la_LIBADD = \
	@DEBUG_LIBS@ \
	@DBUSCXX_LIBS@

libOICFMail_la_CXXFLAGS = \
	@DEBUG_CFLAGS@ \
	@DBUSCXX_CFLAGS@

libOICFMailProvider_la_CXXFLAGS = \
	@DEBUG_CFLAGS@ \
	@DBUSCXX_CFLAGS@

AM_CPPFLAGS = 

#Rule to generate the binding headers

OICFMailProviderPrivate.h:  OICFMail.xml
	dbusxx-xml2cpp $< --adaptor=$@

OICFMailPrivate.h:  OICFMail.xml
	dbusxx-xml2cpp $< --proxy=$@

OICFMailListenerProviderPrivate.h:  OICFMailListener.xml
	dbusxx-xml2cpp $< --adaptor=$@

OICFMailListenerPrivate.h:  OICFMailListener.xml
	dbusxx-xml2cpp $< --proxy=$@

## File created by the gnome-build tools
