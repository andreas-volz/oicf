#ifndef ROTARY_EVENT_H
#define ROTARY_EVENT_H

#include "KeyEvent.h"

class RotaryEvent : public KeyEvent
{
public:
  enum Number
  {
    DDS,
    Volume
  };
  
  enum Value
  {
    Left,
    Right
  };
};

#endif // ROTARY_EVENT_H
