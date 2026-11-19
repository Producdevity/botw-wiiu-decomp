#include "botw/teardown.h"

extern "C" void fn_022da2c0(void* object, unsigned flags);

extern "C" void fn_023ca76c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022da2c0, 0, 0>(object, release_flags);
}
