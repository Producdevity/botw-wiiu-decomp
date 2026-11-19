#include "botw/teardown.h"

extern "C" void fn_02103b74(void* object, unsigned flags);

extern "C" void fn_0233e9bc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02103b74, 0, 0>(object, release_flags);
}
