#include "botw/teardown.h"

extern "C" void fn_023b9aec(void* object, unsigned flags);

extern "C" void fn_022c5750(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_023b9aec, 0, 0>(object, release_flags);
}
