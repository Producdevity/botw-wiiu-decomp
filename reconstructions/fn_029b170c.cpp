#include "botw/teardown.h"

extern "C" void fn_029dcf60(void* object, unsigned flags);

extern "C" void fn_029b170c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_029dcf60, 0, 0>(object, release_flags);
}
