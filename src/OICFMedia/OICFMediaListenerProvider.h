#ifndef IOCFMEDIALISTENERPROVIDER_H
#define IOCFMEDIALISTENERPROVIDER_H

#include "OICFMediaListenerProviderPrivate.h"

class OICFMediaListenerProvider :
  public org::oicf::MediaListener_adaptor,
  public DBus::IntrospectableAdaptor,
  public DBus::ObjectAdaptor
{
public:
  OICFMediaListenerProvider(DBus::Connection &connection) :
    DBus::ObjectAdaptor(connection, "/org/oicf/MediaListener") {}

};

#endif // IOCFMEDIALISTENERPROVIDER_H
