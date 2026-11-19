#include "botw/teardown.h"

extern "C" void fn_022319d8(void* object, unsigned flags);

extern "C" void fn_021dd920(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022319d8, 0, 0>(object, release_flags);
}
