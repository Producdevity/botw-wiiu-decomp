#include "botw/teardown.h"

extern "C" void fn_03023ec0(void* object, unsigned flags);

extern "C" void fn_03029870(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03023ec0, 0, 0>(object, release_flags);
}
