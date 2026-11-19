#include "botw/teardown.h"

extern "C" void fn_02226e7c(void* object, unsigned flags);

extern "C" void fn_02159508(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02226e7c, 0, 0>(object, release_flags);
}
