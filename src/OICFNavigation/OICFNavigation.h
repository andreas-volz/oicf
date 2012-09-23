#ifndef IOCF_NAVIGATION_H
#define IOCF_NAVIGATION_H

#include "OICFNavigationPrivate.h"

class OICFNavigation :
  public org::oicf::Navigation_proxy,
  public DBus::IntrospectableProxy,
  public DBus::ObjectProxy
{
public:
  OICFNavigation(DBus::Connection &connection)
    : DBus::ObjectProxy(connection, "/org/oicf/Navigation", "org.oicf.Navigation") {}

private:

};

#endif // IOCF_NAVIGATION_H
