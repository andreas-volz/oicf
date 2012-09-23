#include "MailEntry.h"

MailEntry::MailEntry() :
  date(-1)
{
}

MailEntry_Dbus_t &operator << (MailEntry_Dbus_t &s1, const MailEntry &s2)
{
  s1._1 = s2.from;
  s1._2 = s2.to;
  s1._3 = s2.subject;
  s1._4 = s2.content;
  s1._5 = s2.date;
  s1._6 = s2.id;

  return s1;
}
