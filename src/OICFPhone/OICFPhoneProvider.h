#ifndef IOCFPHONEPROVIDER_H
#define IOCFPHONEPROVIDER_H

#include "OICFPhoneProviderPrivate.h"

class OICFPhoneProvider :
  public org::oicf::Phone_adaptor,
  public DBus::IntrospectableAdaptor,
  public DBus::ObjectAdaptor
{
public:
  OICFPhoneProvider(DBus::Connection &connection) :
    DBus::ObjectAdaptor(connection, "/org/oicf/Phone") {}

};

#endif // IOCFPHONEPROVIDER_H
