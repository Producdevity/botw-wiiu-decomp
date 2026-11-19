#include "botw/teardown.h"

extern "C" void fn_021d54c0(void* object, unsigned flags);

extern "C" void fn_021d79ac(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_021d54c0, 0, 0>(object, release_flags);
}
