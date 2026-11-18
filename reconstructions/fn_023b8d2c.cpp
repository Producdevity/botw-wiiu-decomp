#include "botw/teardown.h"

extern "C" void fn_0236ac44(void* object, unsigned flags);

extern "C" void fn_023b8d2c(void* object, unsigned flags) {
    teardown::destroy<fn_0236ac44, 0, 0>(object, flags);
}
