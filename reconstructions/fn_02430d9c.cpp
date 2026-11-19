#include "botw/teardown.h"

extern "C" void fn_020e0cd4(void* object, unsigned flags);

extern "C" void fn_02430d9c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_020e0cd4, 0, 0>(object, release_flags);
}
