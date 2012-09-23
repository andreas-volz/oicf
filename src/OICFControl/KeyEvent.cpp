#include "KeyEvent.h"

KeyEvent_Dbus_t &operator << (KeyEvent_Dbus_t &s1, const KeyEvent &s2)
{
  s1._1 = s2.time;
  s1._2 = s2.value;
  s1._3 = s2.number;

  return s1;
}

