#ifndef MAIL_BOOK_ENTRY_VECTOR_H
#define MAIL_BOOK_ENTRY_VECTOR_H

#include <dbus-c++/dbus.h>
#include "MailEntry.h"

// TODO: add getters
typedef std::vector <MailEntry_Dbus_t> MailEntryVector_Dbus_t;

class MailEntryVector : public std::vector <MailEntry>
{
public:
  void operator << (const MailEntryVector_Dbus_t &s)
  {
    for (MailEntryVector_Dbus_t::const_iterator lv_it = s.begin();
         lv_it != s.end();
         ++lv_it)
    {
      MailEntry_Dbus_t s2 = *lv_it;

      MailEntry l;
      l << s2;

      push_back(l);
    }
  }
};

MailEntryVector_Dbus_t &operator << (MailEntryVector_Dbus_t &s1, const MailEntryVector &s2);

#endif // MAIL_BOOK_ENTRY_VECTOR_H
