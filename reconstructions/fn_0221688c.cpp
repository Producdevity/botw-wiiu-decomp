#include "botw/teardown.h"

extern "C" void fn_022176f0(void* object, unsigned flags);

extern "C" void fn_0221688c(void* object, unsigned flags) {
    teardown::destroy<fn_022176f0, 0, 0>(object, flags);
}
