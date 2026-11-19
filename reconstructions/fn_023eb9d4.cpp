#include "botw/teardown.h"

extern "C" void fn_023ea85c(void* object, unsigned flags);

extern "C" void fn_023eb9d4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023ea85c, 0, 0>(object, release_flags);
}
