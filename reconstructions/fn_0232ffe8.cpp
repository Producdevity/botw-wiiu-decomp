#include "botw/teardown.h"

extern "C" void fn_0232c30c(void* object, unsigned flags);

extern "C" void fn_0232ffe8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0232c30c, 0, 0>(object, release_flags);
}
