#include "botw/teardown.h"

extern "C" void fn_02674a24(void* object, unsigned flags);

extern "C" void fn_026a41a8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02674a24, 0, 0>(object, release_flags);
}
