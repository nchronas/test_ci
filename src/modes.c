#include "modes.h"
#include "params.h"

sat_mode_id  satellite_modes(sat_mode_id current) {
  float volt = 0.0;
  sat_mode_id next = current;
  //printf("A %d, %d, %f\n", next, current, volt);

  if(current == DELFI_NOMINAL) {
    volt = get_voltage();
    if(volt < 3.6) {
      next = DELFI_SAFE;
    }
  } else if(current == DELFI_SAFE) {
    volt = get_voltage();
    if(volt > 3.6) {
      next = DELFI_NOMINAL;
    }
  }

  //printf("B %d, %d, %f\n", next, current, volt);

  return next;
}
