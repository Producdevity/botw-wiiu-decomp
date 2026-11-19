#include "botw/teardown.h"

extern "C" void fn_0399e108(void* object, unsigned flags);

extern "C" void fn_0399974c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0399e108, 0, 0>(object, release_flags);
}
