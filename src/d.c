#include "d.h"
#include "m.h"

int8_t AverageThreeBytes(int8_t a, int8_t b, int8_t c)
{
  if(mocked()) {
    return -1;
  }
  
  return (int8_t)(((int16_t)a + (int16_t)b + (int16_t)c) / 3);
}
