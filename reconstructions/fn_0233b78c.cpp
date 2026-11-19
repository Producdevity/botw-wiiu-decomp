#include "botw/teardown.h"

extern "C" void fn_0233c12c(void* object, unsigned flags);

extern "C" void fn_0233b78c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0233c12c, 0, 0>(object, release_flags);
}
