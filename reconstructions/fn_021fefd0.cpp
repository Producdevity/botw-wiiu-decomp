#include "botw/teardown.h"

extern "C" void fn_022264f8(void* object, unsigned flags);

extern "C" void fn_021fefd0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022264f8, 0, 0>(object, release_flags);
}
