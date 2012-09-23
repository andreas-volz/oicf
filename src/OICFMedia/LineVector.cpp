#include "LineVector.h"

LineVector_Dbus_t &operator << (LineVector_Dbus_t &s1, const LineVector &s2)
{
  for (LineVector::const_iterator lv_it = s2.begin();
       lv_it != s2.end();
       ++lv_it)
  {
    Line l = *lv_it;

    Line_Dbus_t l2;
    l2 << l;

    s1.push_back(l2);
  }

  return s1;
}
