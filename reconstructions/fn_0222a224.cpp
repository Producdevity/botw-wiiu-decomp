#include "botw/teardown.h"

extern "C" void fn_02229744(void* object, unsigned flags);

extern "C" void fn_0222a224(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02229744, 0, 0>(object, release_flags);
}
