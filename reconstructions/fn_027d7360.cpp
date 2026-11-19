#include "botw/teardown.h"

extern "C" void fn_0289d3e0(void* object, unsigned flags);

extern "C" void fn_027d7360(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0289d3e0, 0, 0>(object, release_flags);
}
