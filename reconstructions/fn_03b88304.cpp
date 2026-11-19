#include "botw/teardown.h"

extern "C" void fn_030bc668(void* object, unsigned flags);

extern "C" void fn_03b88304(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_030bc668, 4, 2>(object, release_flags);
}
