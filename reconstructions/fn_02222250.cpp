#include "botw/teardown.h"

extern "C" void fn_0221d998(void* object, unsigned flags);

extern "C" void fn_02222250(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0221d998, 0, 0>(object, release_flags);
}
