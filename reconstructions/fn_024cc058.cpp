#include "botw/teardown.h"

extern "C" void fn_02851b44(void* object, unsigned flags);

extern "C" void fn_024cc058(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02851b44, 0, 0>(object, release_flags);
}
