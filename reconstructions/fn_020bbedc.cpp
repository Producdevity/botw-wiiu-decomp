#include "botw/teardown.h"

extern "C" void fn_0230ba64(void* object, unsigned flags);

extern "C" void fn_020bbedc(void* object, unsigned flags) {
    teardown::destroy<fn_0230ba64, 0, 0>(object, flags);
}
