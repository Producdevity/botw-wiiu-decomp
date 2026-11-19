#include "botw/teardown.h"

extern "C" void fn_03908f1c(void* object, unsigned flags);

extern "C" void fn_039115c0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03908f1c, 0, 0>(object, release_flags);
}
