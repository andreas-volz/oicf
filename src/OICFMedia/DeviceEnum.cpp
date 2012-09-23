#include "DeviceEnum.h"

DeviceEnum::DeviceEnum() :
  value(0)
{
}

int32_t &operator << (int32_t &s1, const DeviceEnum &s2)
{
  s1 = s2.value;

  return s1;
}
