#include "botw/teardown.h"

extern "C" void fn_0399e6e4(void* object, unsigned flags);

extern "C" void fn_03999d04(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0399e6e4, 0, 0>(object, release_flags);
}
