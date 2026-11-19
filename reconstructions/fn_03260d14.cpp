#include "botw/teardown.h"

extern "C" void fn_0325f420(void* object, unsigned flags);

extern "C" void fn_03260d14(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0325f420, 0, 0>(object, release_flags);
}
