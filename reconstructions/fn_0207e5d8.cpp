#include "botw/teardown.h"

extern "C" void fn_0207aa20(void* object, unsigned flags);

extern "C" void fn_0207e5d8(void* object, unsigned flags) {
    teardown::destroy<fn_0207aa20, 0, 0>(object, flags);
}
