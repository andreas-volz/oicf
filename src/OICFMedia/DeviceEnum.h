#ifndef DEVICE_ENUM_H
#define DEVICE_ENUM_H

#include <dbus-c++/dbus.h>

// TODO: add getters

class DeviceEnum
{
public:
  enum e
  {
    CD,
    USB,
    HDD
  };

  DeviceEnum();

  int32_t value;

public:
  void operator << (const int32_t &pos)
  {
    value = pos;
  }
};

int32_t &operator << (int32_t &s1, const DeviceEnum &s2);

#endif // DEVICE_ENUM_H
