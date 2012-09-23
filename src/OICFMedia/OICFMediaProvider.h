#ifndef IOCFMEDIAPROVIDER_H
#define IOCFMEDIAPROVIDER_H

#include "OICFMediaProviderPrivate.h"

class OICFMediaProvider :
  public org::oicf::Media_adaptor,
  public DBus::IntrospectableAdaptor,
  public DBus::ObjectAdaptor
{
public:
  OICFMediaProvider(DBus::Connection &connection) :
    DBus::ObjectAdaptor(connection, "/org/oicf/Media") {}

};

#endif // IOCFMEDIAPROVIDER_H
