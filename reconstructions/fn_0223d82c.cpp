#include "botw/teardown.h"

extern "C" void fn_023ba32c(void* object, unsigned flags);

extern "C" void fn_0223d82c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023ba32c, 0, 0>(object, release_flags);
}
