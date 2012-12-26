#ifndef KEY_EVENT_H
#define KEY_EVENT_H

#include <dbus-c++/dbus.h>

// TODO: add getters
typedef ::DBus::Struct <int32_t, int16_t, uint8_t> KeyEvent_Dbus_t;

class KeyEvent
{
public:
  int32_t time;
  int16_t value;
  int8_t number;

public:
  void operator << (const KeyEvent_Dbus_t &event)
  {
    time = event._1;
    value = event._2;
    number = event._3;
  }
};

KeyEvent_Dbus_t &operator << (KeyEvent_Dbus_t &s1, const KeyEvent &s2);

#endif // KEY_EVENT_H
