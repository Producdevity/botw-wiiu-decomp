#include "botw/teardown.h"

extern "C" void fn_023b64ec(void* object, unsigned flags);

extern "C" void fn_023b8944(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023b64ec, 0, 0>(object, release_flags);
}
