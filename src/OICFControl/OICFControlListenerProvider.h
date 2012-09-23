#ifndef IOCFCONTROLLISTENERPROVIDER_H
#define IOCFCONTROLLISTENERPROVIDER_H

#include "OICFControlListenerProviderPrivate.h"
#include "KeyEvent.h"

class OICFControlListenerProvider :
  public org::oicf::ControlListener_adaptor,
  public DBus::IntrospectableAdaptor,
  public DBus::ObjectAdaptor
{
public:
  OICFControlListenerProvider(DBus::Connection &connection) :
    DBus::ObjectAdaptor(connection, "/org/oicf/ControlListener") {}

};

#endif // IOCFCONTROLLISTENERPROVIDER_H
