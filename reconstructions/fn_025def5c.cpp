#include "botw/teardown.h"

extern "C" void fn_025df250(void* object, unsigned flags);

extern "C" void fn_025def5c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_025df250, 0, 0>(object, release_flags);
}
