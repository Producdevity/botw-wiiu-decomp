#include "botw/teardown.h"

extern "C" void fn_02296800(void* object, unsigned flags);

extern "C" void fn_0229d2b8(void* object, unsigned flags) {
    teardown::destroy<fn_02296800, 0, 0>(object, flags);
}
