#ifndef PHONE_BOOK_ENTRY_VECTOR_H
#define PHONE_BOOK_ENTRY_VECTOR_H

#include <dbus-c++/dbus.h>
#include "PhoneEntry.h"

// TODO: add getters
typedef std::vector <PhoneEntry_Dbus_t> PhoneEntryVector_Dbus_t;

class PhoneEntryVector : public std::vector <PhoneEntry>
{
public:
  void operator << (const PhoneEntryVector_Dbus_t &s)
  {
    for (PhoneEntryVector_Dbus_t::const_iterator lv_it = s.begin();
         lv_it != s.end();
         ++lv_it)
    {
      PhoneEntry_Dbus_t s2 = *lv_it;

      PhoneEntry l;
      l << s2;

      push_back(l);
    }
  }
};

PhoneEntryVector_Dbus_t &operator << (PhoneEntryVector_Dbus_t &s1, const PhoneEntryVector &s2);

#endif // PHONE_BOOK_ENTRY_VECTOR_H
