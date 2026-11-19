#include "botw/teardown.h"

extern "C" void fn_0280ad8c(void* object, unsigned flags);

extern "C" void fn_027fee88(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0280ad8c, 0, 0>(object, release_flags);
}
