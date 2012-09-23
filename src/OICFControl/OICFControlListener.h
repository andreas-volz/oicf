#ifndef IOCFCONTROLLISTENER_H
#define IOCFCONTROLLISTENER_H

#include "OICFControlListenerPrivate.h"
#include "KeyEvent.h"

class OICFControlListener :
  public org::oicf::ControlListener_proxy,
  public DBus::IntrospectableProxy,
  public DBus::ObjectProxy
{
public:
  OICFControlListener(DBus::Connection &connection)
    : DBus::ObjectProxy(connection, "/org/oicf/ControlListener", "org.oicf.ControlListener") {}

private:

};

#endif // IOCFCONTROLLISTENER_H
