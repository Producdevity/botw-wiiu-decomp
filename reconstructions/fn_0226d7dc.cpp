#include "botw/teardown.h"

extern "C" void fn_0226cf70(void* object, unsigned flags);

extern "C" void fn_0226d7dc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0226cf70, 0, 0>(object, release_flags);
}
