#include "botw/teardown.h"

extern "C" void fn_02088d2c(void* object, unsigned flags);

extern "C" void fn_02089bbc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02088d2c, 0, 0>(object, release_flags);
}
