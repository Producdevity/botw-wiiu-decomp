#include "botw/teardown.h"

extern "C" void fn_02550514(void* object, unsigned flags);

extern "C" void fn_0293f0d4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02550514, 0, 0>(object, release_flags);
}
