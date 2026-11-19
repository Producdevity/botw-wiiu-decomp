#include "botw/teardown.h"

extern "C" void fn_02caf05c(void* object, unsigned flags);

extern "C" void fn_02ceaa30(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02caf05c, 0, 0>(object, release_flags);
}
