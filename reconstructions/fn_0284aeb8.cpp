#include "botw/teardown.h"

extern "C" void fn_02848cb0(void* object, unsigned flags);

extern "C" void fn_0284aeb8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02848cb0, 0, 0>(object, release_flags);
}
