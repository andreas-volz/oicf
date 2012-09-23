#include "CoordWGS84.h"

CoordWGS84_Dbus_t &operator << (CoordWGS84_Dbus_t &s1, const CoordWGS84 &s2)
{
  s1._1 = s2.latitude;
  s1._2 = s2.longitude;
  s1._3 = s2.altitude;
  s1._4 = s2.speed;
  s1._5 = s2.track;

  return s1;
}
