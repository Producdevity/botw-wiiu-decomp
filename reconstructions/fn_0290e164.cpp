#include "botw/teardown.h"

extern "C" void fn_025e7324(void* object, unsigned flags);

extern "C" void fn_0290e164(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_025e7324, 0, 0>(object, release_flags);
}
