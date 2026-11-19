#include "botw/teardown.h"

extern "C" void fn_02189010(void* object, unsigned flags);

extern "C" void fn_021888e0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02189010, 0, 0>(object, release_flags);
}
