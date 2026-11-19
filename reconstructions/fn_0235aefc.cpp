#include "botw/teardown.h"

extern "C" void fn_02357a28(void* object, unsigned flags);

extern "C" void fn_0235aefc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02357a28, 0, 0>(object, release_flags);
}
