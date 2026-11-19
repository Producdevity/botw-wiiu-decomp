#include "botw/teardown.h"

extern "C" void fn_02dcd0c8(void* object, unsigned flags);

extern "C" void fn_02ddcef4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02dcd0c8, 0, 0>(object, release_flags);
}
