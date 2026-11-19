#include "botw/teardown.h"

extern "C" void fn_0242859c(void* object, unsigned flags);

extern "C" void fn_02429ab0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0242859c, 0, 0>(object, release_flags);
}
