#include "botw/teardown.h"

extern "C" void fn_0235afbc(void* object, unsigned flags);

extern "C" void fn_0235c6c8(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0235afbc, 0, 0>(object, release_flags);
}
