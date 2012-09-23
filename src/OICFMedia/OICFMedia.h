#ifndef IOCFMEDIA_H
#define IOCFMEDIA_H

#include "OICFMediaPrivate.h"

class OICFMedia :
  public org::oicf::Media_proxy,
  public DBus::IntrospectableProxy,
  public DBus::ObjectProxy
{
public:
  OICFMedia(DBus::Connection &connection)
    : DBus::ObjectProxy(connection, "/org/oicf/Media", "org.oicf.Media") {}

private:

};

#endif // IOCFMEDIA_H
