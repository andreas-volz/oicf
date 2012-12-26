#ifndef BUTTON_EVENT_H
#define BUTTON_EVENT_H

#include "KeyEvent.h"

class ButtonEvent : public KeyEvent
{
public:
  enum Number
  {
    Navigation,
    Media,
    Phone,
    Menu,
    Return,
    DDS,
    Volume
  };

  enum Value
  {
    Up,
    Down
  };
};

#endif // BUTTON_EVENT_H
