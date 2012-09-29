BUILT_SOURCES = OICFPhoneListenerPrivate.h OICFPhoneListenerProviderPrivate.h \
		OICFPhonePrivate.h OICFPhoneProviderPrivate.h

OBJECT_H = PhoneEntry.h PhoneEntryVector.h
API_H = OICFPhone.h OICFPhoneListener.h
API_PROVIDER_H = OICFPhoneProvider.h OICFPhoneListenerProvider.h

DBUS_XML_H = OICFPhone.xml OICFPhoneListener.xml

oicf_HEADERS = $(API_H) $(API_PROVIDER_H) $(OBJECT_H)

# We don't want to install this header
noinst_HEADERS = $(BUILT_SOURCES)

oicfdir = \
	$(pkgincludedir)/OICFPhone

# Correctly clean the generated headers, but keep the xml description
CLEANFILES = $(BUILT_SOURCES)
EXTRA_DIST = $(oicf_HEADERS) $(DBUS_XML)

lib_LTLIBRARIES = \
	libOICFPhone.la \
	libOICFPhoneProvider.la 

libOICFPhone_la_SOURCES = \
	$(API_H) \
	PhoneEntry.cpp \
	PhoneEntryVector.cpp

libOICFPhoneProvider_la_SOURCES = \
	$(API_PROVIDER_H) \
	PhoneEntry.cpp \
	PhoneEntryVector.cpp 

libOICFPhone_la_LIBADD = \
	@DEBUG_LIBS@ \
	@DBUSCXX_LIBS@

libOICFPhoneProvider_la_LIBADD = \
	@DEBUG_LIBS@ \
	@DBUSCXX_LIBS@

libOICFPhone_la_CXXFLAGS = \
	@DEBUG_CFLAGS@ \
	@DBUSCXX_CFLAGS@

libOICFPhoneProvider_la_CXXFLAGS = \
	@DEBUG_CFLAGS@ \
	@DBUSCXX_CFLAGS@

AM_CPPFLAGS = 

#Rule to generate the binding headers

OICFPhoneProviderPrivate.h:  OICFPhone.xml
	dbusxx-xml2cpp $< --adaptor=$@

OICFPhonePrivate.h:  OICFPhone.xml
	dbusxx-xml2cpp $< --proxy=$@

OICFPhoneListenerProviderPrivate.h:  OICFPhoneListener.xml
	dbusxx-xml2cpp $< --adaptor=$@

OICFPhoneListenerPrivate.h:  OICFPhoneListener.xml
	dbusxx-xml2cpp $< --proxy=$@

## File created by the gnome-build tools
