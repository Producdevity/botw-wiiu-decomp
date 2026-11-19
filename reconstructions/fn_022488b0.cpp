#include "botw/teardown.h"

extern "C" void fn_02247144(void* object, unsigned flags);

extern "C" void fn_022488b0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02247144, 0, 0>(object, release_flags);
}
