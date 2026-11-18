#include "botw/teardown.h"

extern "C" void fn_022fc7a8(void* object, unsigned flags);

extern "C" void fn_022f82f4(void* object, unsigned flags) {
    teardown::destroy<fn_022fc7a8, 0, 0>(object, flags);
}
