#include "botw/teardown.h"

extern "C" void fn_022012c0(void* object, unsigned flags);

extern "C" void fn_022025ec(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022012c0, 0, 0>(object, release_flags);
}
