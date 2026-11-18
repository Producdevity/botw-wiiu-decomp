#include "botw/teardown.h"

extern "C" void fn_0261681c(void* object, unsigned flags);

extern "C" void fn_02615f74(void* object, unsigned flags) {
    teardown::destroy<fn_0261681c, 0, 0>(object, flags);
}
