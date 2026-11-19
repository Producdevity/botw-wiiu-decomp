#include "botw/teardown.h"

extern "C" void fn_02557bbc(void* object, unsigned flags);

extern "C" void fn_02559e40(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02557bbc, 0, 0>(object, release_flags);
}
