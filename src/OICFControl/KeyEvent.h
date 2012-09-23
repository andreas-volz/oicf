#ifndef KEYEVENT_H
#define KEYEVENT_H

#include <dbus-c++/dbus.h>

// TODO: add getters
typedef ::DBus::Struct <int32_t, int16_t, uint8_t> KeyEvent_Dbus_t;

class KeyEvent
{
public:
  enum ButtonNumber
  {
    // Screens
    Navigation,
    Media,
    Test,
    Test2,

    // Numbers at front
    One,
    Two,
    Three,
    Four,

    // Meta Buttons
    Start,
    Menu,
  };

  enum ButtonValue
  {
    //Button Value
    Up,
    Down
  };

  enum AxisNumber
  {
    // Axis type
    X,
    Y
  };

  enum AxisValue
  {
    // Axis value
    Min = -1,
    Max = 1,
    Zero = 0
  };

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

#endif // KEYEVENT_H
