#include "botw/teardown.h"

extern "C" void fn_022d8930(void* object, unsigned flags);

extern "C" void fn_023c9fdc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022d8930, 0, 0>(object, release_flags);
}
