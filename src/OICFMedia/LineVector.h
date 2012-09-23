#ifndef MEDIA_LINEVECTOR_H
#define MEDIA_LINEVECTOR_H

#include <dbus-c++/dbus.h>
#include "Line.h"

// TODO: add getters
typedef std::vector <Line_Dbus_t> LineVector_Dbus_t;

class LineVector : public std::vector <Line>
{
public:
  void operator << (const LineVector_Dbus_t &s)
  {
    for (LineVector_Dbus_t::const_iterator lv_it = s.begin();
         lv_it != s.end();
         ++lv_it)
    {
      Line_Dbus_t s2 = *lv_it;

      Line l;
      l << s2;

      push_back(l);
    }
  }
};

LineVector_Dbus_t &operator << (LineVector_Dbus_t &s1, const LineVector &s2);

#endif // MEDIA_LINEVECTOR_H
