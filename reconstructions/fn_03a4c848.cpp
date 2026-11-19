#include "botw/teardown.h"

extern "C" void fn_03c4d9c8(void* object, unsigned flags);

extern "C" void fn_03a4c848(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03c4d9c8, 0, 0>(object, release_flags);
}
