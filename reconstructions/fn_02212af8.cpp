#include "botw/teardown.h"

extern "C" void fn_0221d998(void* object, unsigned flags);

extern "C" void fn_02212af8(void* object, unsigned flags) {
    teardown::destroy<fn_0221d998, 0, 0>(object, flags);
}
