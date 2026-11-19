#include "botw/teardown.h"

extern "C" void fn_03c480fc(void* object, unsigned flags);

extern "C" void fn_03a341b8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03c480fc, 0, 0>(object, release_flags);
}
