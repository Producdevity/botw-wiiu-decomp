#include "botw/teardown.h"

extern "C" void fn_039270ec(void* object, unsigned flags);

extern "C" void fn_036f0224(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_039270ec, 0, 0>(object, release_flags);
}
