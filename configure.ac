dnl Process this file with autoconf to produce a configure script.
dnl Created by Anjuta application wizard.

AC_INIT(oicf, 0.1)

AM_INIT_AUTOMAKE
AM_CONFIG_HEADER(config.h)
AC_CONFIG_MACRO_DIR([m4])
AM_MAINTAINER_MODE

AC_ISC_POSIX
AC_PROG_CXX
AM_PROG_CC_STDC
AC_HEADER_STDC






AM_PROG_LIBTOOL

dnl Check for option to enable debug
AC_MSG_CHECKING(whether to enable debugging)
AC_ARG_ENABLE(debug,
        [  --enable-debug=[no/yes]        enables debug build (default=no)],,
                 enable_debug=no)

dnl Checks for libraries
AS_IF( [ ! test "x$enable_debug" != "xyes"],[
  AC_DEFINE(DEBUG, 1, [Define to enable debug build])
  PKG_CHECK_MODULES(DEBUG, StopClock >= 0.1)
  AC_SUBST(DEBUG_CFLAGS)
  AC_SUBST(DEBUG_LIBS)
  CXXFLAGS="-ggdb"
  AC_MSG_RESULT(yes)
],[
  AC_MSG_RESULT(no)
  DEBUG_CFLAGS=""
  DEBUG_LIBS=""
  AC_SUBST(DEBUG_CFLAGS)
  AC_SUBST(DEBUG_LIBS)
])

dnl Check for headers
ACX_PTHREAD
if test x"$acx_pthread_ok" = xyes; then
  AC_DEFINE(HAVE_PTHREAD_H, 1, [Define to enable pthread support])
  AM_CONDITIONAL(HAVE_PTHREAD, test x"$acx_pthread_ok" = xyes)
fi

PKG_CHECK_MODULES(DBUSCXX, dbus-c++-1)
AC_SUBST(DBUSCXX_CFLAGS)
AC_SUBST(DBUSCXX_LIBS)

AC_OUTPUT([
Makefile
src/Makefile
src/OICFControl/Makefile
src/OICFMail/Makefile
src/OICFMedia/Makefile
src/OICFNavigation/Makefile
src/OICFPhone/Makefile
])

### AUTO_AC_OUTPUT ###
AC_OUTPUT([
OICFMedia.pc
OICFMedia-uninstalled.pc
OICFMediaProvider.pc
OICFMediaProvider-uninstalled.pc
OICFControl.pc
OICFControl-uninstalled.pc
OICFControlProvider.pc
OICFControlProvider-uninstalled.pc
OICFNavigation.pc
OICFNavigation-uninstalled.pc
OICFNavigationProvider.pc
OICFNavigationProvider-uninstalled.pc
OICFPhone.pc
OICFPhone-uninstalled.pc
OICFPhoneProvider.pc
OICFPhoneProvider-uninstalled.pc
OICFMail.pc
OICFMail-uninstalled.pc
OICFMailProvider.pc
OICFMailProvider-uninstalled.pc
])


