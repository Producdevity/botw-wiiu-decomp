#include "botw/teardown.h"

extern "C" void fn_022df2f0(void* object, unsigned flags);

extern "C" void fn_023e5b4c(void* object, unsigned flags) {
    teardown::destroy<fn_022df2f0, 0, 0>(object, flags);
}
