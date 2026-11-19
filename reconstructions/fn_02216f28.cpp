#include "botw/teardown.h"

extern "C" void fn_022176f0(void* object, unsigned flags);

extern "C" void fn_02216f28(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022176f0, 0, 0>(object, release_flags);
}
