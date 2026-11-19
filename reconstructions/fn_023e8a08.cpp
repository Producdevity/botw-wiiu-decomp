#include "botw/teardown.h"

extern "C" void fn_023e8da4(void* object, unsigned flags);

extern "C" void fn_023e8a08(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023e8da4, 0, 0>(object, release_flags);
}
