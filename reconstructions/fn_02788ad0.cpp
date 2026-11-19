#include "botw/teardown.h"

extern "C" void fn_02787c3c(void* object, unsigned flags);

extern "C" void fn_02788ad0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02787c3c, 0, 0>(object, release_flags);
}
