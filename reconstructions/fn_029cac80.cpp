#include "botw/teardown.h"

extern "C" void fn_029caa3c(void* object, unsigned flags);

extern "C" void fn_029cac80(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_029caa3c, 0, 0>(object, release_flags);
}
