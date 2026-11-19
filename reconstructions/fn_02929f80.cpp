#include "botw/teardown.h"

extern "C" void fn_029198b0(void* object, unsigned flags);

extern "C" void fn_02929f80(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_029198b0, 0, 0>(object, release_flags);
}
