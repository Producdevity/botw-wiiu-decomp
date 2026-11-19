#include "botw/teardown.h"

extern "C" void fn_0234ff10(void* object, unsigned flags);

extern "C" void fn_02353928(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0234ff10, 0, 0>(object, release_flags);
}
