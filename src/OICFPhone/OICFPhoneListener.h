#ifndef IOCFPHONELISTENER_H
#define IOCFPHONELISTENER_H

#include "OICFPhoneListenerPrivate.h"

class OICFPhoneListener :
  public org::oicf::PhoneListener_proxy,
  public DBus::IntrospectableProxy,
  public DBus::ObjectProxy
{
public:
  OICFPhoneListener(DBus::Connection &connection)
    : DBus::ObjectProxy(connection, "/org/oicf/PhoneListener", "org.oicf.PhoneListener") {}

private:

};

#endif // IOCFPHONELISTENER_H
