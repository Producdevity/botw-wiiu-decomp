#include "botw/teardown.h"

extern "C" void fn_03119680(void* object, unsigned flags);

extern "C" void fn_03117f30(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03119680, 0, 0>(object, release_flags);
}
