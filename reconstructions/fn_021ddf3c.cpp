#include "botw/teardown.h"

extern "C" void fn_0245d6d0(void* object, unsigned flags);

extern "C" void fn_021ddf3c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0245d6d0, 0, 0>(object, release_flags);
}
