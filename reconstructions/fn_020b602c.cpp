#include "botw/teardown.h"

extern "C" void fn_020ba87c(void* object, unsigned flags);

extern "C" void fn_020b602c(void* object, unsigned flags) {
    teardown::destroy<fn_020ba87c, 0, 0>(object, flags);
}
