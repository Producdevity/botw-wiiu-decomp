#include "botw/teardown.h"

extern "C" void fn_02334c20(void* object, unsigned flags);

extern "C" void fn_02337b38(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02334c20, 0, 0>(object, release_flags);
}
