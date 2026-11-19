#include "botw/teardown.h"

extern "C" void fn_0233ab60(void* object, unsigned flags);

extern "C" void fn_0233b18c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0233ab60, 0, 0>(object, release_flags);
}
