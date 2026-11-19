#include "botw/teardown.h"

extern "C" void fn_020f4538(void* object, unsigned flags);

extern "C" void fn_02109d14(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_020f4538, 0, 0>(object, release_flags);
}
