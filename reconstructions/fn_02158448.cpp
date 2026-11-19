#include "botw/teardown.h"

extern "C" void fn_03112434(void* object, unsigned flags);

extern "C" void fn_02158448(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03112434, 0, 0>(object, release_flags);
}
