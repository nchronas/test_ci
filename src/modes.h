#ifndef __MODES_H
#define __MODES_H

#include <stdbool.h>

typedef enum {
   DELFI_NOMINAL = 0,
   DELFI_SAFE    = 1,
   LAST_MODE_ID  = 2
}sat_mode_id;

sat_mode_id  satellite_modes(sat_mode_id current);

#endif
