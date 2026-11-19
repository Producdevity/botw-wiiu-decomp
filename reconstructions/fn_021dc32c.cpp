#include "botw/teardown.h"

extern "C" void fn_021dbeb4(void* object, unsigned flags);

extern "C" void fn_021dc32c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_021dbeb4, 0, 0>(object, release_flags);
}
