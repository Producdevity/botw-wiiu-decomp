#include "botw/teardown.h"

extern "C" void fn_02175efc(void* object, unsigned flags);

extern "C" void fn_0217a224(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02175efc, 0, 0>(object, release_flags);
}
