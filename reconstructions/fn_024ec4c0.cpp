#include "botw/teardown.h"

extern "C" void fn_028a2de4(void* object, unsigned flags);

extern "C" void fn_024ec4c0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_028a2de4, 0, 0>(object, release_flags);
}
