#include "botw/teardown.h"

extern "C" void fn_030dfefc(void* object, unsigned flags);

extern "C" void fn_0341aad0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_030dfefc, 0, 0>(object, release_flags);
}
