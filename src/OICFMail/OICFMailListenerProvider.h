#ifndef IOCFPHONEBOOKLISTENERPROVIDER_H
#define IOCFPHONEBOOKLISTENERPROVIDER_H

#include "OICFMailListenerProviderPrivate.h"

class OICFMailListenerProvider :
  public org::oicf::MailListener_adaptor,
  public DBus::IntrospectableAdaptor,
  public DBus::ObjectAdaptor
{
public:
  OICFMailListenerProvider(DBus::Connection &connection) :
    DBus::ObjectAdaptor(connection, "/org/oicf/MailListener") {}

};

#endif // IOCFPHONEBOOKLISTENERPROVIDER_H
