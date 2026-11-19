#include "botw/teardown.h"

extern "C" void fn_024328f0(void* object, unsigned flags);

extern "C" void fn_02436ad4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_024328f0, 0, 0>(object, release_flags);
}
