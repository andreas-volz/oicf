#ifndef IOCFPHONELISTENERPROVIDER_H
#define IOCFPHONELISTENERPROVIDER_H

#include "OICFPhoneListenerProviderPrivate.h"

class OICFPhoneListenerProvider :
  public org::oicf::PhoneListener_adaptor,
  public DBus::IntrospectableAdaptor,
  public DBus::ObjectAdaptor
{
public:
  OICFPhoneListenerProvider(DBus::Connection &connection) :
    DBus::ObjectAdaptor(connection, "/org/oicf/PhoneListener") {}

};

#endif // IOCFPHONELISTENERPROVIDER_H
