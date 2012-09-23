#ifndef IOCF_NAVIGATION_PROVIDER_H
#define IOCF_NAVIGATION_PROVIDER_H

#include "OICFNavigationProviderPrivate.h"

class OICFNavigationProvider :
  public org::oicf::Navigation_adaptor,
  public DBus::IntrospectableAdaptor,
  public DBus::ObjectAdaptor
{
public:
  OICFNavigationProvider(DBus::Connection &connection) :
    DBus::ObjectAdaptor(connection, "/org/oicf/Navigation") {}

};

#endif // IOCF_NAVIGATION_PROVIDER_H
