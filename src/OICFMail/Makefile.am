BUILT_SOURCES = OICFMailListenerPrivate.h OICFMailListenerProviderPrivate.h \
								OICFMailPrivate.h OICFMailProviderPrivate.h

# We don't want to install this header
noinst_HEADERS = $(BUILT_SOURCES)

# Correctly clean the generated headers, but keep the xml description
CLEANFILES = $(BUILT_SOURCES)
EXTRA_DIST = OICFMail.xml OICFMailListener.xml

lib_LTLIBRARIES = \
	libOICFMail.la \
	libOICFMailProvider.la 

libOICFMail_la_SOURCES = \
	OICFMail.h \
	OICFMailListener.h \
	MailEntry.cpp \
	MailEntry.h \
	MailEntryVector.cpp \
	MailEntryVector.h

libOICFMailProvider_la_SOURCES = \
	OICFMailProvider.h \
	OICFMailListenerProvider.h \
	MailEntry.cpp \
	MailEntry.h \
	MailEntryVector.cpp \
	MailEntryVector.h

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
