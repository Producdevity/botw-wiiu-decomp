#include "botw/teardown.h"

extern "C" void fn_022e176c(void* object, unsigned flags);

extern "C" void fn_022ab5e4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022e176c, 0, 0>(object, release_flags);
}
