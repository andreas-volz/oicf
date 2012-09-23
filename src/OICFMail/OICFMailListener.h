#ifndef IOCFPHONEBOOKLISTENER_H
#define IOCFPHONEBOOKLISTENER_H

#include "OICFMailListenerPrivate.h"

class OICFMailListener :
  public org::oicf::MailListener_proxy,
  public DBus::IntrospectableProxy,
  public DBus::ObjectProxy
{
public:
  OICFMailListener(DBus::Connection &connection)
    : DBus::ObjectProxy(connection, "/org/oicf/MailListener", "org.oicf.MailListener") {}

private:

};

#endif // IOCFPHONEBOOKLISTENER_H
