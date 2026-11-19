#include "botw/teardown.h"

extern "C" void fn_029dcb94(void* object, unsigned flags);

extern "C" void fn_029dc8e8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_029dcb94, 0, 0>(object, release_flags);
}
