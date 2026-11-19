#include "botw/teardown.h"

extern "C" void fn_024178b0(void* object, unsigned flags);

extern "C" void fn_02418d6c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_024178b0, 0, 0>(object, release_flags);
}
