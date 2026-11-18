#include "botw/teardown.h"

extern "C" void fn_0284c94c(void* object, unsigned flags);

extern "C" void fn_0284c55c(void* object, unsigned flags) {
    teardown::destroy<fn_0284c94c, 0, 0>(object, flags);
}
