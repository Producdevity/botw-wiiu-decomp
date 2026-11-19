#include "botw/teardown.h"

extern "C" void fn_03c4bdc4(void* object, unsigned flags);

extern "C" void fn_03a360f0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03c4bdc4, 0, 0>(object, release_flags);
}
