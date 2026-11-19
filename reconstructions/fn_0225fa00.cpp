#include "botw/teardown.h"

extern "C" void fn_023e7b48(void* object, unsigned flags);

extern "C" void fn_0225fa00(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023e7b48, 0, 0>(object, release_flags);
}
