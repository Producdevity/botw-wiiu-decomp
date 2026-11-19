#include "botw/teardown.h"

extern "C" void fn_029198b0(void* object, unsigned flags);

extern "C" void fn_0292a658(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_029198b0, 0, 0>(object, release_flags);
}
