#include "botw/teardown.h"

extern "C" void fn_02367b30(void* object, unsigned flags);

extern "C" void fn_0225ef68(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02367b30, 0, 0>(object, release_flags);
}
