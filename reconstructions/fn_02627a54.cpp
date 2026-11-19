#include "botw/teardown.h"

extern "C" void fn_029022ac(void* object, unsigned flags);

extern "C" void fn_02627a54(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_029022ac, 0, 0>(object, release_flags);
}
