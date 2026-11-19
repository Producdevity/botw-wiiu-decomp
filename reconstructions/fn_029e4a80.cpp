#include "botw/teardown.h"

extern "C" void fn_029e4120(void* object, unsigned flags);

extern "C" void fn_029e4a80(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_029e4120, 0, 0>(object, release_flags);
}
