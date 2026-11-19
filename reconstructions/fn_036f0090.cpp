#include "botw/teardown.h"

extern "C" void fn_039280f0(void* object, unsigned flags);

extern "C" void fn_036f0090(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_039280f0, 0, 0>(object, release_flags);
}
