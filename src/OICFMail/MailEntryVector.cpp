#include "MailEntryVector.h"

MailEntryVector_Dbus_t &operator << (MailEntryVector_Dbus_t &s1, const MailEntryVector &s2)
{
  for (MailEntryVector::const_iterator lv_it = s2.begin();
       lv_it != s2.end();
       ++lv_it)
  {
    MailEntry l = *lv_it;

    MailEntry_Dbus_t l2;
    l2 << l;

    s1.push_back(l2);
  }

  return s1;
}
