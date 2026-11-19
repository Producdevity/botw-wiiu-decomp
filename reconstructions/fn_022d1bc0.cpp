#include "botw/teardown.h"

extern "C" void fn_022d0e88(void* object, unsigned flags);

extern "C" void fn_022d1bc0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022d0e88, 0, 0>(object, release_flags);
}
