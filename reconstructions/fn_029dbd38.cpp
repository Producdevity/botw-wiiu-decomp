#include "botw/teardown.h"

extern "C" void fn_029dc024(void* object, unsigned flags);

extern "C" void fn_029dbd38(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_029dc024, 0, 0>(object, release_flags);
}
