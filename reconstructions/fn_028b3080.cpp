#include "botw/teardown.h"

extern "C" void fn_0263e390(void* object, unsigned flags);

extern "C" void fn_028b3080(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0263e390, 0, 0>(object, release_flags);
}
