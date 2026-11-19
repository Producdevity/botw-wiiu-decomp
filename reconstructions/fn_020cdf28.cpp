#include "botw/teardown.h"

extern "C" void fn_020cd3d0(void* object, unsigned flags);

extern "C" void fn_020cdf28(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_020cd3d0, 0, 0>(object, release_flags);
}
