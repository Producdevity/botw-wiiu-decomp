#include "botw/teardown.h"

extern "C" void fn_02913c5c(void* object, unsigned flags);

extern "C" void fn_029146a0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02913c5c, 0, 0>(object, release_flags);
}
