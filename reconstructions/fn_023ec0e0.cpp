#include "botw/teardown.h"

extern "C" void fn_022c4170(void* object, unsigned flags);

extern "C" void fn_023ec0e0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_022c4170, 0, 0>(object, release_flags);
}
