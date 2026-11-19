#include "botw/teardown.h"

extern "C" void fn_023b91f0(void* object, unsigned flags);

extern "C" void fn_023b96b8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023b91f0, 0, 0>(object, release_flags);
}
