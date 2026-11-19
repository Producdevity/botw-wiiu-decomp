#include "botw/teardown.h"

extern "C" void fn_0312a6d0(void* object, unsigned flags);

extern "C" void fn_020954a8(void* object, unsigned flags) {
    teardown::destroy<fn_0312a6d0, 0, 0>(object, flags);
}
