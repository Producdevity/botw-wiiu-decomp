#include "botw/teardown.h"

extern "C" void fn_02341598(void* object, unsigned flags);

extern "C" void fn_023feda4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02341598, 0, 0>(object, release_flags);
}
