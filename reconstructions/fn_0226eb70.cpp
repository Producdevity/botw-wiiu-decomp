#include "botw/teardown.h"

extern "C" void fn_021108f0(void* object, unsigned flags);

extern "C" void fn_0226eb70(void* object, unsigned flags) {
    teardown::destroy<fn_021108f0, 0, 0>(object, flags);
}
