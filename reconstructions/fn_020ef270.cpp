#include "botw/teardown.h"

extern "C" void fn_020efa3c(void* object, unsigned flags);

extern "C" void fn_020ef270(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_020efa3c, 0, 0>(object, release_flags);
}
