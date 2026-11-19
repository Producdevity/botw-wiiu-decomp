#include "botw/teardown.h"

extern "C" void fn_02a3e4e4(void* object, unsigned flags);

extern "C" void fn_02483eb4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02a3e4e4, 0, 0>(object, release_flags);
}
