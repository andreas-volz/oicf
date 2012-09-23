#include "PhoneEntry.h"

PhoneEntry::PhoneEntry() :
  housenumber(0)
{
}

PhoneEntry_Dbus_t &operator << (PhoneEntry_Dbus_t &s1, const PhoneEntry &s2)
{
  s1._1 = s2.prename;
  s1._2 = s2.surname;
  s1._3 = s2.number;
  s1._4 = s2.city;
  s1._5 = s2.street;
  s1._6 = s2.housenumber;

  return s1;
}
