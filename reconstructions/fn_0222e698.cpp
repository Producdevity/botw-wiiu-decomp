#include "botw/teardown.h"

extern "C" void fn_0222f1a4(void* object, unsigned flags);

extern "C" void fn_0222e698(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0222f1a4, 0, 0>(object, release_flags);
}
