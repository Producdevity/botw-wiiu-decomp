#include "botw/teardown.h"

extern "C" void fn_0236ac44(void* object, unsigned flags);

extern "C" void fn_022cbd34(void* object, unsigned flags) {
    teardown::destroy<fn_0236ac44, 0, 0>(object, flags);
}
