BUILT_SOURCES = OICFControlListenerPrivate.h OICFControlListenerProviderPrivate.h
OBJECT_H = KeyEvent.h

DBUS_XML = OICFControlListener.xml

# We don't want to install this header
noinst_HEADERS = $(BUILT_SOURCES)

# Correctly clean the generated headers, but keep the xml description
CLEANFILES = $(BUILT_SOURCES)
EXTRA_DIST = $(OBJECT_H) $(DBUS_XML)

lib_LTLIBRARIES = \
	libOICFControl.la \
	libOICFControlProvider.la

libOICFControl_la_SOURCES = \
	OICFControlListener.h \
	KeyEvent.cpp \
	KeyEvent.h

libOICFControlProvider_la_SOURCES = \
	OICFControlListenerProvider.h \
        KeyEvent.cpp \
        KeyEvent.h

libOICFControl_la_LIBADD = \
	@DEBUG_LIBS@ \
	@DBUSCXX_LIBS@

libOICFControlProvider_la_LIBADD = \
	@DEBUG_LIBS@ \
	@DBUSCXX_LIBS@

libOICFControl_la_CXXFLAGS = \
	@DEBUG_CFLAGS@ \
	@DBUSCXX_CFLAGS@

libOICFControlProvider_la_CXXFLAGS = \
	@DEBUG_CFLAGS@ \
	@DBUSCXX_CFLAGS@

#Rule to generate the binding headers

OICFControlListenerProviderPrivate.h:  OICFControlListener.xml
	dbusxx-xml2cpp $< --adaptor=$@

OICFControlListenerPrivate.h:  OICFControlListener.xml
	dbusxx-xml2cpp $< --proxy=$@

## File created by the gnome-build tools
