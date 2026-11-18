#include "botw/teardown.h"

extern "C" void fn_0226dcc8(void* object, unsigned flags);

extern "C" void fn_0226fabc(void* object, unsigned flags) {
    teardown::destroy<fn_0226dcc8, 0, 0>(object, flags);
}
