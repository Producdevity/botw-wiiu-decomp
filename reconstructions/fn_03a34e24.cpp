#include "botw/teardown.h"

extern "C" void fn_03c49a34(void* object, unsigned flags);

extern "C" void fn_03a34e24(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03c49a34, 0, 0>(object, release_flags);
}
