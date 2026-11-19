#include "botw/teardown.h"

extern "C" void fn_02401490(void* object, unsigned flags);

extern "C" void fn_0244a800(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02401490, 0, 0>(object, release_flags);
}
