#include "botw/teardown.h"

extern "C" void fn_022c5750(void* object, unsigned flags);

extern "C" void fn_024043cc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022c5750, 0, 0>(object, release_flags);
}
