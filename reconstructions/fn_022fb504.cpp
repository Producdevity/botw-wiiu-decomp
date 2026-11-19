#include "botw/teardown.h"

extern "C" void fn_022fa430(void* object, unsigned flags);

extern "C" void fn_022fb504(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022fa430, 0, 0>(object, release_flags);
}
