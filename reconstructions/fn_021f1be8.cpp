#include "botw/teardown.h"

extern "C" void fn_021f09f8(void* object, unsigned flags);

extern "C" void fn_021f1be8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_021f09f8, 0, 0>(object, release_flags);
}
