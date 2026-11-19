#include "botw/teardown.h"

extern "C" void fn_02413d78(void* object, unsigned flags);

extern "C" void fn_02413c9c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02413d78, 0, 0>(object, release_flags);
}
