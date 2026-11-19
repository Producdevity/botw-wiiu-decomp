#include "botw/teardown.h"

extern "C" void fn_0215c38c(void* object, unsigned flags);

extern "C" void fn_0245098c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0215c38c, 0, 0>(object, release_flags);
}
