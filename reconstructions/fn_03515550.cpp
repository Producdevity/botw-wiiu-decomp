#include "botw/teardown.h"

extern "C" void fn_03511c9c(void* object, unsigned flags);

extern "C" void fn_03515550(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03511c9c, 4, 2>(object, release_flags);
}
