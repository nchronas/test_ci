#include "modes.h"

sat_mode_id  satellite_modes(sat_mode_id current) {
  sat_mode_id next = current;

  if(current == DELFI_NOMINAL) {
    float volt = 0;
    volt = get_voltage();
    if(volt < 3.6) {
      next = DELFI_SAFE;
    }
  } else if(current == DELFI_SAFE) {
    float volt = 0;
    volt = get_voltage();
    if(volt > 3.6) {
      next = DELFI_NOMINAL;
    }
  }

  return next;
}
