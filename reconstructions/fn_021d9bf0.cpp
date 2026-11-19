#include "botw/teardown.h"

extern "C" void fn_021d81a8(void* object, unsigned flags);

extern "C" void fn_021d9bf0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_021d81a8, 0, 0>(object, release_flags);
}
