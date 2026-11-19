#include "botw/teardown.h"

extern "C" void fn_020cf58c(void* object, unsigned flags);

extern "C" void fn_020d0028(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_020cf58c, 0, 0>(object, release_flags);
}
