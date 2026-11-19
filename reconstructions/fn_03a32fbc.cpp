#include "botw/teardown.h"

extern "C" void fn_03c485a0(void* object, unsigned flags);

extern "C" void fn_03a32fbc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03c485a0, 0, 0>(object, release_flags);
}
