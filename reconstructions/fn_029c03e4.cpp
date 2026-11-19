#include "botw/teardown.h"

extern "C" void fn_029e47d8(void* object, unsigned flags);

extern "C" void fn_029c03e4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_029e47d8, 0, 0>(object, release_flags);
}
