#include "botw/teardown.h"

extern "C" void fn_030914e4(void* object, unsigned flags);

extern "C" void fn_03091a0c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_030914e4, 0, 0>(object, release_flags);
}
