#include "botw/teardown.h"

extern "C" void fn_02862dd4(void* object, unsigned flags);

extern "C" void fn_02861838(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02862dd4, 0, 0>(object, release_flags);
}
