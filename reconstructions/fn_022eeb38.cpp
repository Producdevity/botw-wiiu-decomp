#include "botw/teardown.h"

extern "C" void fn_02228630(void* object, unsigned flags);

extern "C" void fn_022eeb38(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02228630, 0, 0>(object, release_flags);
}
