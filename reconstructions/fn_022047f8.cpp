#include "botw/teardown.h"

extern "C" void fn_022316e4(void* object, unsigned flags);

extern "C" void fn_022047f8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022316e4, 0, 0>(object, release_flags);
}
