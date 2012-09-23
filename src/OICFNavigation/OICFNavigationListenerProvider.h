#ifndef IOCF_NAVIGATION_LISTENERPROVIDER_H
#define IOCF_NAVIGATION_LISTENERPROVIDER_H

#include "OICFNavigationListenerProviderPrivate.h"
#include "CoordWGS84.h"

class OICFNavigationListenerProvider :
  public org::oicf::NavigationListener_adaptor,
  public DBus::IntrospectableAdaptor,
  public DBus::ObjectAdaptor
{
public:
  OICFNavigationListenerProvider(DBus::Connection &connection) :
    DBus::ObjectAdaptor(connection, "/org/oicf/NavigationListener") {}
};

#endif // IOCF_NAVIGATION_LISTENERPROVIDER_H
