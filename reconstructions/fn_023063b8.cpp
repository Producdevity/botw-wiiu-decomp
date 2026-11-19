#include "botw/teardown.h"

extern "C" void fn_022c059c(void* object, unsigned flags);

extern "C" void fn_023063b8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022c059c, 0, 0>(object, release_flags);
}
