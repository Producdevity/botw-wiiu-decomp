#include "botw/teardown.h"

extern "C" void fn_02254478(void* object, unsigned flags);

extern "C" void fn_02256fb4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02254478, 0, 0>(object, release_flags);
}
