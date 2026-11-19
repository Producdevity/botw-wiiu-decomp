#include "botw/teardown.h"

extern "C" void fn_03946284(void* object, unsigned flags);

extern "C" void fn_03968e40(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03946284, 0, 0>(object, release_flags);
}
