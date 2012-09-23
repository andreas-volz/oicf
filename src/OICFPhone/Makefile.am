BUILT_SOURCES = OICFPhoneListenerPrivate.h OICFPhoneListenerProviderPrivate.h \
								OICFPhonePrivate.h OICFPhoneProviderPrivate.h

# We don't want to install this header
noinst_HEADERS = $(BUILT_SOURCES)

# Correctly clean the generated headers, but keep the xml description
CLEANFILES = $(BUILT_SOURCES)
EXTRA_DIST = OICFPhone.xml OICFPhoneListener.xml

lib_LTLIBRARIES = \
	libOICFPhone.la \
	libOICFPhoneProvider.la 

libOICFPhone_la_SOURCES = \
	OICFPhone.h \
	OICFPhoneListener.h \
	PhoneEntry.cpp \
	PhoneEntry.h \
	PhoneEntryVector.cpp \
	PhoneEntryVector.h

libOICFPhoneProvider_la_SOURCES = \
	OICFPhoneProvider.h \
	OICFPhoneListenerProvider.h \
	PhoneEntry.cpp \
	PhoneEntry.h \
	PhoneEntryVector.cpp \
	PhoneEntryVector.h

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