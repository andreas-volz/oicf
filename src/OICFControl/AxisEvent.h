#ifndef AXIS_EVENT_H
#define AXIS_EVENT_H

#include "KeyEvent.h"

class AxisEvent : public KeyEvent
{
public:
  enum Number
  {
    X,
    Y
  };

  enum Value
  {
    Min = -1,
    Max = 1,
    Zero = 0
  };
};

#endif // AXIS_EVENT_H
