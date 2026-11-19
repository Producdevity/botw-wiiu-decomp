#include "botw/teardown.h"

extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_027b6708(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_037b7d90, 0, 0>(object, release_flags);
}
