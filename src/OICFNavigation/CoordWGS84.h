#ifndef COORDWGS84_H
#define COORDWGS84_H

#include <dbus-c++/dbus.h>

// TODO: add getters
typedef ::DBus::Struct< double, double, double, double, double > CoordWGS84_Dbus_t;

class CoordWGS84
{
public:
  double latitude;    /* Latitude in degrees */
  double longitude;   /* Longitude in degrees */
  double altitude;    /* Altitude in meters */
  double speed;       /* Speed over ground, meters/sec */
  double track;       // heading: N/S/W/E

public:
  void operator << (const CoordWGS84_Dbus_t &pos)
  {
    latitude = pos._1;
    longitude = pos._2;
    altitude = pos._3;
    speed = pos._4;
    track = pos._5;
  }
};

CoordWGS84_Dbus_t &operator << (CoordWGS84_Dbus_t &s1, const CoordWGS84 &s2);

#endif // COORDWGS84_H
