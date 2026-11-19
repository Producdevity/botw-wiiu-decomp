#include "botw/teardown.h"

extern "C" void fn_0215d118(void* object, unsigned flags);

extern "C" void fn_0236d864(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0215d118, 0, 0>(object, release_flags);
}
