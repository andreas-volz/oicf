#ifndef IOCF_NAVIGATION_LISTENER_H
#define IOCF_NAVIGATION_LISTENER_H

#include "OICFNavigationListenerPrivate.h"

class OICFNavigationListener :
  public org::oicf::NavigationListener_proxy,
  public DBus::IntrospectableProxy,
  public DBus::ObjectProxy
{
public:
  OICFNavigationListener(DBus::Connection &connection)
    : DBus::ObjectProxy(connection, "/org/oicf/NavigationListener", "org.oicf.NavigationListener") {}

private:

};

#endif // IOCF_NAVIGATION_LISTENER_H
