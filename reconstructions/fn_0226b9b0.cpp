#include "botw/teardown.h"

extern "C" void fn_0230b068(void* object, unsigned flags);

extern "C" void fn_0226b9b0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0230b068, 0, 0>(object, release_flags);
}
