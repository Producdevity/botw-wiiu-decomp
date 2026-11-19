#include "botw/teardown.h"

extern "C" void fn_029c8610(void* object, unsigned flags);

extern "C" void fn_029c4560(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_029c8610, 0, 0>(object, release_flags);
}
