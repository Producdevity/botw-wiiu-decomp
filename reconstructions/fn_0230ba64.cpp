#include "botw/teardown.h"

extern "C" void fn_020eba44(void* object, unsigned flags);

extern "C" void fn_0230ba64(void* object, unsigned flags) {
    teardown::destroy<fn_020eba44, 0, 0>(object, flags);
}
