#include "botw/teardown.h"

extern "C" void fn_0240e9c8(void* object, unsigned flags);

extern "C" void fn_0240db68(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0240e9c8, 0, 0>(object, release_flags);
}
