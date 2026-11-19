#include "botw/teardown.h"

extern "C" void fn_0224a294(void* object, unsigned flags);

extern "C" void fn_02249928(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0224a294, 0, 0>(object, release_flags);
}
