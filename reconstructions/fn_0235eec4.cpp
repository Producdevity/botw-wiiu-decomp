#include "botw/teardown.h"

extern "C" void fn_0235e164(void* object, unsigned flags);

extern "C" void fn_0235eec4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0235e164, 0, 0>(object, release_flags);
}
