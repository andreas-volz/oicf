#ifndef PHONE_ENTRY_H
#define PHONE_ENTRY_H

#include <dbus-c++/dbus.h>

// TODO: add getters
typedef ::DBus::Struct< std::string, std::string, std::string, std::string, std::string, int32_t > PhoneEntry_Dbus_t;

class PhoneEntry
{
public:
  PhoneEntry();

  std::string prename;
  std::string surname;
  std::string number;
  std::string city;
  std::string street;
  int32_t housenumber;

public:
  void operator << (const PhoneEntry_Dbus_t &pos)
  {
    prename = pos._1;
    surname = pos._2;
    number = pos._3;
    city = pos._4;
    street = pos._5;
    housenumber = pos._6;
  }
};

PhoneEntry_Dbus_t &operator << (PhoneEntry_Dbus_t &s1, const PhoneEntry &s2);

#endif // PHONE_ENTRY_H
