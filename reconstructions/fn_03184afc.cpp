#include "botw/teardown.h"

extern "C" void fn_03180fb8(void* object, unsigned flags);

extern "C" void fn_03184afc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03180fb8, 0, 0>(object, release_flags);
}
