#include "botw/teardown.h"

extern "C" void fn_027c4bd0(void* object, unsigned flags);

extern "C" void fn_027d1844(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_027c4bd0, 0, 0>(object, release_flags);
}
