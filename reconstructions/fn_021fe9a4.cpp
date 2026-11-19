#include "botw/teardown.h"

extern "C" void fn_021eadec(void* object, unsigned flags);

extern "C" void fn_021fe9a4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_021eadec, 0, 0>(object, release_flags);
}
