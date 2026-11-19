#include "botw/teardown.h"

extern "C" void fn_030b7184(void* object, unsigned flags);

extern "C" void fn_03070e4c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_030b7184, 0, 0>(object, release_flags);
}
