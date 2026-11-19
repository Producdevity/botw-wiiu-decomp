#include "botw/teardown.h"

extern "C" void fn_0392c3b0(void* object, unsigned flags);

extern "C" void fn_0392da30(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0392c3b0, 0, 0>(object, release_flags);
}
