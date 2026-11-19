#include "botw/teardown.h"

extern "C" void fn_03a28f80(void* object, unsigned flags);

extern "C" void fn_03a28c70(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03a28f80, 0, 0>(object, release_flags);
}
