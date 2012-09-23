#include "Line.h"

Line::Line() :
  type(Invalid),
  id(InvalidID)
{
}

Line_Dbus_t &operator << (Line_Dbus_t &s1, const Line &s2)
{
  s1._1 = s2.name;
  s1._2 = s2.type;
  s1._3 = s2.id;

  return s1;
}
