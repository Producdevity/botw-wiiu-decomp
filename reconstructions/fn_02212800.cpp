#include "botw/teardown.h"

extern "C" void fn_022120f0(void* object, unsigned flags);

extern "C" void fn_02212800(void* object, unsigned flags) {
    teardown::destroy<fn_022120f0, 0, 0>(object, flags);
}
