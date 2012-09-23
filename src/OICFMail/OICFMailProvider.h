#ifndef IOCFPHONEBOOKPROVIDER_H
#define IOCFPHONEBOOKPROVIDER_H

#include "OICFMailProviderPrivate.h"

class OICFMailProvider :
  public org::oicf::Mail_adaptor,
  public DBus::IntrospectableAdaptor,
  public DBus::ObjectAdaptor
{
public:
  OICFMailProvider(DBus::Connection &connection) :
    DBus::ObjectAdaptor(connection, "/org/oicf/Mail") {}

};

#endif // IOCFPHONEBOOKPROVIDER_H
