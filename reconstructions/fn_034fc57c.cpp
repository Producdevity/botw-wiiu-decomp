#include "botw/teardown.h"

extern "C" void fn_037d790c(void* object, unsigned flags);

extern "C" void fn_034fc57c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_037d790c, 0, 0>(object, release_flags);
}
