#include "botw/teardown.h"

extern "C" void fn_023a3c14(void* object, unsigned flags);

extern "C" void fn_023a4858(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023a3c14, 0, 0>(object, release_flags);
}
