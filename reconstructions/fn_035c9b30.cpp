#include "botw/teardown.h"

extern "C" void fn_031a7810(void* object, unsigned flags);

extern "C" void fn_035c9b30(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_031a7810, 0, 0>(object, release_flags);
}
