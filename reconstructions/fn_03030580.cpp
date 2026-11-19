#include "botw/teardown.h"

extern "C" void fn_0302a870(void* object, unsigned flags);

extern "C" void fn_03030580(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0302a870, 0, 0>(object, release_flags);
}
