#include "botw/teardown.h"

extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_022cab04(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_030eb73c, 4, 2>(object, release_flags);
}
