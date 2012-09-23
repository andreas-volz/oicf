#ifndef IOCFMEDIALISTENER_H
#define IOCFMEDIALISTENER_H

#include "OICFMediaListenerPrivate.h"

class OICFMediaListener :
  public org::oicf::MediaListener_proxy,
  public DBus::IntrospectableProxy,
  public DBus::ObjectProxy
{
public:
  OICFMediaListener(DBus::Connection &connection)
    : DBus::ObjectProxy(connection, "/org/oicf/MediaListener", "org.oicf.MediaListener") {}

private:

};

#endif // IOCFMEDIALISTENER_H
