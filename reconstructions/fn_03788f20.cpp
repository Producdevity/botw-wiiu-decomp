#include "botw/teardown.h"

extern "C" void fn_030bb79c(void* object, unsigned flags);

extern "C" void fn_03788f20(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_030bb79c, 4, 2>(object, release_flags);
}
