#ifndef IOCFPHONEBOOK_H
#define IOCFPHONEBOOK_H

#include "OICFMailPrivate.h"

class OICFMail :
  public org::oicf::Mail_proxy,
  public DBus::IntrospectableProxy,
  public DBus::ObjectProxy
{
public:
  OICFMail(DBus::Connection &connection)
    : DBus::ObjectProxy(connection, "/org/oicf/Mail", "org.oicf.Mail") {}

private:

};

#endif // IOCFPHONEBOOK_H
