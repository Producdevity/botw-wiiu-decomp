#include "botw/teardown.h"

extern "C" void fn_022e6184(void* object, unsigned flags);

extern "C" void fn_022e5fb0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022e6184, 0, 0>(object, release_flags);
}
