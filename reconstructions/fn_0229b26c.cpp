#include "botw/teardown.h"

extern "C" void fn_02296800(void* object, unsigned flags);

extern "C" void fn_0229b26c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02296800, 0, 0>(object, release_flags);
}
