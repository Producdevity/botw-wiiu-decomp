#include "botw/teardown.h"

extern "C" void fn_0221dd08(void* object, unsigned flags);

extern "C" void fn_0221e7f8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0221dd08, 0, 0>(object, release_flags);
}
