#include "botw/teardown.h"

extern "C" void fn_023424f4(void* object, unsigned flags);

extern "C" void fn_02343280(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023424f4, 0, 0>(object, release_flags);
}
