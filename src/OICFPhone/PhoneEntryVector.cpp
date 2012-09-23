#include "PhoneEntryVector.h"

PhoneEntryVector_Dbus_t &operator << (PhoneEntryVector_Dbus_t &s1, const PhoneEntryVector &s2)
{
  for (PhoneEntryVector::const_iterator lv_it = s2.begin();
       lv_it != s2.end();
       ++lv_it)
  {
    PhoneEntry l = *lv_it;

    PhoneEntry_Dbus_t l2;
    l2 << l;

    s1.push_back(l2);
  }

  return s1;
}
