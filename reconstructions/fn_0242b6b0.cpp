#include "botw/teardown.h"

extern "C" void fn_023629f8(void* object, unsigned flags);

extern "C" void fn_0242b6b0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023629f8, 0, 0>(object, release_flags);
}
