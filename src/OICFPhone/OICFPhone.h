#ifndef IOCFPHONE_H
#define IOCFPHONE_H

#include "OICFPhonePrivate.h"

class OICFPhone :
  public org::oicf::Phone_proxy,
  public DBus::IntrospectableProxy,
  public DBus::ObjectProxy
{
public:
  OICFPhone(DBus::Connection &connection)
    : DBus::ObjectProxy(connection, "/org/oicf/Phone", "org.oicf.Phone") {}

private:

};

#endif // IOCFPHONE_H
