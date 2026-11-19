#include "botw/teardown.h"

extern "C" void fn_0210187c(void* object, unsigned flags);

extern "C" void fn_02103b74(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0210187c, 0, 0>(object, release_flags);
}
