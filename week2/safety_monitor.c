#include <stdio.h>
#include "flight_computer.h"
#include <math.h>

int main()
{
  float prev_pitch = 0.0;
  while (true)
  {
    float pitch = get_pitch();
    float diff = fabs(pitch - prev_pitch);
    if (diff < 5.0 && (pitch > 20.0 || pitch < -20.0))
    {
      set_warning_light(true);
    }
    else
    {
      set_warning_light(false);
    }
    prev_pitch = pitch;
  }
  return 0;
}
