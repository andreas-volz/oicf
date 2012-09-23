#ifndef MAIL_ENTRY_H
#define MAIL_ENTRY_H

#include <dbus-c++/dbus.h>

// TODO: add getters
typedef ::DBus::Struct< std::string, std::string, std::string, std::string, int32_t, int32_t > MailEntry_Dbus_t;

class MailEntry
{
public:
  MailEntry();

  std::string from;
  std::string to;
  std::string subject;
  std::string content; // here is to define how content is interpreted. At first text only would be sufficient...
  int32_t date; // time since 1.1.1970, 00:00
  int32_t id;

public:
  void operator << (const MailEntry_Dbus_t &pos)
  {
    from = pos._1;
    to = pos._2;
    subject = pos._3;
    content = pos._4;
    date = pos._5;
    id = pos._6;
  }
};

MailEntry_Dbus_t &operator << (MailEntry_Dbus_t &s1, const MailEntry &s2);

#endif // MAIL_ENTRY_H
