#include "botw/teardown.h"

extern "C" void fn_025c21d0(void* object, unsigned flags);

extern "C" void fn_02642048(void* object, unsigned flags) {
    teardown::destroy<fn_025c21d0, 0, 0>(object, flags);
}
