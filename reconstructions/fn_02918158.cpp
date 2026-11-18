#include "botw/teardown.h"

extern "C" void fn_0291f184(void* object, unsigned flags);

extern "C" void fn_02918158(void* object, unsigned flags) {
    teardown::destroy<fn_0291f184, 0, 0>(object, flags);
}
