#include "botw/teardown.h"

extern "C" void fn_0333b26c(void* object, unsigned flags);

extern "C" void fn_0203bda4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0333b26c, 0, 0>(object, release_flags);
}
