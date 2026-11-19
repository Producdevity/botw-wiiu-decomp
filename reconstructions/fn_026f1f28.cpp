#include "botw/teardown.h"

extern "C" void fn_026ee320(void* object, unsigned flags);

extern "C" void fn_026f1f28(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_026ee320, 0, 0>(object, release_flags);
}
